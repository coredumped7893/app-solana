#include "os.h"
#include "ux.h"
#include "cx.h"
#include "menu.h"
#include "utils.h"

#include "sol/parser.h"
#include "sol/printer.h"
#include "sol/print_config.h"
#include "sol/message.h"
#include "sol/transaction_summary.h"

typedef struct sign_message_ctx_s {
    int messageLength;
    uint8_t message[MAX_MESSAGE_LENGTH];
    uint8_t numDerivationPaths;
    uint32_t derivationPathLength;
    uint32_t derivationPath[BIP32_PATH];
    bool non_confirm_requested;
} sign_message_ctx_t;

static sign_message_ctx_t G_ctx;

void reset_sign_message_context(void) {
    MEMCLEAR(G_ctx);
}

static void derive_private_key(cx_ecfp_private_key_t *privateKey,
                               uint32_t *derivationPath,
                               uint8_t derivationPathLength) {
    uint8_t privateKeyData[32];
    BEGIN_TRY {
        TRY {
            os_perso_derive_node_bip32_seed_key(HDW_ED25519_SLIP10,
                                                CX_CURVE_Ed25519,
                                                derivationPath,
                                                derivationPathLength,
                                                privateKeyData,
                                                NULL,
                                                (unsigned char *) "ed25519 seed",
                                                12);
            cx_ecfp_init_private_key(CX_CURVE_Ed25519, privateKeyData, 32, privateKey);
        }
        FINALLY {
            MEMCLEAR(privateKeyData);
        }
    }
    END_TRY;
}

static uint8_t set_result_sign_message() {
    uint8_t tx = SIGNATURE_LENGTH;
    uint8_t signature[SIGNATURE_LENGTH];
    cx_ecfp_private_key_t privateKey;
    BEGIN_TRY {
        TRY {
            derive_private_key(&privateKey, G_ctx.derivationPath, G_ctx.derivationPathLength);
            cx_eddsa_sign(&privateKey,
                          CX_LAST,
                          CX_SHA512,
                          G_ctx.message,
                          G_ctx.messageLength,
                          NULL,
                          0,
                          signature,
                          SIGNATURE_LENGTH,
                          NULL);
            memcpy(G_io_apdu_buffer, signature, SIGNATURE_LENGTH);
        }
        FINALLY {
            MEMCLEAR(privateKey);
        }
    }
    END_TRY;
    return tx;
}

//////////////////////////////////////////////////////////////////////

UX_STEP_VALID(ux_approve_step,
              pb,
              sendResponse(set_result_sign_message(), true),
              {
                  &C_icon_validate_14,
                  "Approve",
              });
UX_STEP_VALID(ux_reject_step,
              pb,
              sendResponse(0, false),
              {
                  &C_icon_crossmark,
                  "Reject",
              });
UX_STEP_NOCB_INIT(ux_summary_step,
                  bnnn_paging,
                  {
                      size_t step_index = G_ux.flow_stack[stack_slot].index;
                      enum DisplayFlags flags = DisplayFlagNone;
                      if (N_storage.settings.pubkey_display == PubkeyDisplayLong) {
                          flags |= DisplayFlagLongPubkeys;
                      }
                      if (transaction_summary_display_item(step_index, flags)) {
                          THROW(ApduReplySolanaSummaryUpdateFailed);
                      }
                  },
                  {
                      .title = G_transaction_summary_title,
                      .text = G_transaction_summary_text,
                  });

#define MAX_FLOW_STEPS                                     \
    (MAX_TRANSACTION_SUMMARY_ITEMS + 1 /* approve */       \
     + 1                               /* reject */        \
     + 1                               /* FLOW_END_STEP */ \
    )
ux_flow_step_t const *flow_steps[MAX_FLOW_STEPS];

void handle_sign_message_receive_apdus(uint8_t p1,
                                       uint8_t p2,
                                       const uint8_t *dataBuffer,
                                       size_t dataLength) {
    if (dataLength == 0) {
        THROW(ApduReplySolanaInvalidMessage);
    }

    // Detect old host and remove the obsolete flag if set
    bool deprecated_host = ((dataLength & DATA_HAS_LENGTH_PREFIX) != 0);
    if (deprecated_host) {
        dataLength &= ~DATA_HAS_LENGTH_PREFIX;
    }

    if ((p2 & P2_EXTEND) == 0) {
        // First APDU received, reset module context before parsing
        reset_sign_message_context();
        G_ctx.numDerivationPaths = 1;

        if (!deprecated_host) {
            G_ctx.numDerivationPaths = dataBuffer[0];
            dataBuffer++;
            dataLength--;
            // We only support one derivation path ATM
            if (G_ctx.numDerivationPaths != 1) {
                THROW(ApduReplySdkExceptionOverflow);
            }
        } else {
            G_ctx.numDerivationPaths = 1;
        }

        G_ctx.derivationPathLength =
            read_derivation_path(dataBuffer, dataLength, G_ctx.derivationPath);
        dataBuffer += 1 + G_ctx.derivationPathLength * 4;
        dataLength -= 1 + G_ctx.derivationPathLength * 4;
    } else {
        // P2_EXTEND is set to signal that this APDU buffer extends, rather
        // than replaces, the current message buffer. Asserting it with the
        // first APDU buffer is an error, since we haven't yet received a
        // derivation path.
        if (G_ctx.numDerivationPaths == 0) {
            THROW(ApduReplySolanaInvalidMessage);
        }
    }

    size_t messageLength;
    if (deprecated_host) {
        // Deprecated APDU format uses 2 bytes to write remaining length
        messageLength = U2BE(dataBuffer, 0);
        dataBuffer += 2;
        if (messageLength != (dataLength - 2)) {
            THROW(ApduReplySolanaInvalidMessage);
        }
    } else {
        messageLength = dataLength;
    }

    // Append current message to global message reception buffer
    if (G_ctx.messageLength + messageLength > MAX_MESSAGE_LENGTH) {
        THROW(ApduReplySdkExceptionOverflow);
    }
    memcpy(G_ctx.message + G_ctx.messageLength, dataBuffer, messageLength);
    G_ctx.messageLength += messageLength;

    // Stop processing here if another APDU is expected
    if (p2 & P2_MORE) {
        THROW(ApduReplySuccess);
    }

    if (p1 == P1_NON_CONFIRM) {
        G_ctx.non_confirm_requested = true;
    }

    // Host has signaled that the message is complete. We won't be receiving
    // any more extending APDU buffers. Clear the derivation path count so we
    // can detect P2_EXTEND misuse at the start of the next exchange
    G_ctx.numDerivationPaths = 0;
}

static int scan_header_for_signer(size_t *signer_index, const MessageHeader *header) {
    uint8_t signer_pubkey[PUBKEY_LENGTH];
    get_public_key(signer_pubkey, G_ctx.derivationPath, G_ctx.derivationPathLength);
    for (size_t i = 0; i < header->pubkeys_header.num_required_signatures; ++i) {
        const Pubkey *current_pubkey = &(header->pubkeys[i]);
        if (memcmp(current_pubkey, signer_pubkey, PUBKEY_SIZE) == 0) {
            *signer_index = i;
            return 0;
        }
    }
    return -1;
}

void handle_sign_message_parse_message(volatile unsigned int *tx) {
    Parser parser = {G_ctx.message, G_ctx.messageLength};
    PrintConfig print_config;
    print_config.expert_mode = (N_storage.settings.display_mode == DisplayModeExpert);
    print_config.signer_pubkey = NULL;
    MessageHeader *header = &print_config.header;
    size_t signer_index;

    if (parse_message_header(&parser, header) != 0) {
        // This is not a valid Solana message
        THROW(ApduReplySolanaInvalidMessage);
    }

    // Ensure the requested signer is present in the header
    if (scan_header_for_signer(&signer_index, header) != 0) {
        THROW(ApduReplySdkInvalidParameter);
    }
    print_config.signer_pubkey = &header->pubkeys[signer_index];

    if (G_ctx.non_confirm_requested) {
        // Uncomment this to allow blind signing without other checks.
        // *tx = set_result_sign_message();
        // THROW(ApduReplySuccess);
        UNUSED(tx);

        sendResponse(0, false);
    }

    // Set the transaction summary
    transaction_summary_reset();
    if (process_message_body(parser.buffer, parser.buffer_length, &print_config) != 0) {
        // Message not processed, throw if blind signing is not enabled
        if (N_storage.settings.allow_blind_sign == BlindSignEnabled) {
            SummaryItem *item = transaction_summary_primary_item();
            summary_item_set_string(item, "Unrecognized", "format");
            Hash UnrecognizedMessageHash;

            cx_hash_sha256(G_ctx.message,
                           G_ctx.messageLength,
                           (uint8_t *) &UnrecognizedMessageHash,
                           HASH_LENGTH);

            item = transaction_summary_general_item();
            summary_item_set_hash(item, "Message Hash", &UnrecognizedMessageHash);
        } else {
            THROW(ApduReplySdkNotSupported);
        }
    }

    // Add fee payer to summary if needed
    const Pubkey *fee_payer = &header->pubkeys[0];
    if (print_config_show_authority(&print_config, fee_payer)) {
        transaction_summary_set_fee_payer_pubkey(fee_payer);
    }
}

void handle_sign_message_UI(volatile unsigned int *flags) {
    // Display the transaction summary
    SummaryItemKind_t summary_step_kinds[MAX_TRANSACTION_SUMMARY_ITEMS];
    size_t num_summary_steps = 0;
    if (transaction_summary_finalize(summary_step_kinds, &num_summary_steps) == 0) {
        size_t num_flow_steps = 0;

        for (size_t i = 0; i < num_summary_steps; i++) {
            flow_steps[num_flow_steps++] = &ux_summary_step;
        }

        flow_steps[num_flow_steps++] = &ux_approve_step;
        flow_steps[num_flow_steps++] = &ux_reject_step;
        flow_steps[num_flow_steps++] = FLOW_END_STEP;

        ux_flow_init(0, flow_steps, NULL);
    } else {
        THROW(ApduReplySolanaSummaryFinalizeFailed);
    }

    *flags |= IO_ASYNCH_REPLY;
}
