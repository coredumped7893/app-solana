#include "token_info.h"
#include "util.h"

const TokenInfo TOKEN_REGISTRY[] = {
    // So11111111111111111111111111111111111111112
    {{{0x06, 0x9b, 0x88, 0x57, 0xfe, 0xab, 0x81, 0x84, 0xfb, 0x68, 0x7f,
       0x63, 0x46, 0x18, 0xc0, 0x35, 0xda, 0xc4, 0x39, 0xdc, 0x1a, 0xeb,
       0x3b, 0x55, 0x98, 0xa0, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x01}},
     "SOL"},

    // Es9vMFrzaCERmJfrF4H2FYD4KCoNkY11McCe8BenwNYB
    {{{0xce, 0x01, 0x0e, 0x60, 0xaf, 0xed, 0xb2, 0x27, 0x17, 0xbd, 0x63,
       0x19, 0x2f, 0x54, 0x14, 0x5a, 0x3f, 0x96, 0x5a, 0x33, 0xbb, 0x82,
       0xd2, 0xc7, 0x02, 0x9e, 0xb2, 0xce, 0x1e, 0x20, 0x82, 0x64}},
     "USDT"},

    // EPjFWdd5AufqSSqeM2qN1xzybapC8G4wEGGkZwyTDt1v
    {{{0xc6, 0xfa, 0x7a, 0xf3, 0xbe, 0xdb, 0xad, 0x3a, 0x3d, 0x65, 0xf3,
       0x6a, 0xab, 0xc9, 0x74, 0x31, 0xb1, 0xbb, 0xe4, 0xc2, 0xd2, 0xf6,
       0xe0, 0xe4, 0x7c, 0xa6, 0x02, 0x03, 0x45, 0x2f, 0x5d, 0x61}},
     "USDC"},

    // 7JnHPPJBBKSTJ7iEmsiGSBcPJgbcKw28uCRXtQgimncp
    {{{0x5d, 0xb4, 0x32, 0x48, 0x5c, 0xc3, 0x62, 0x4b, 0x41, 0xfa, 0x24,
       0x6b, 0x72, 0xbd, 0xb1, 0x06, 0x96, 0xff, 0x1a, 0x9e, 0x62, 0x9e,
       0xf8, 0x03, 0xab, 0xfb, 0xd9, 0xee, 0x67, 0xb0, 0xaa, 0x81}},
     "AVAX"},

    // rndrizKT3MK1iimdxRdWabcF7Zg7AR5T4nud4EkHBof
    {{{0x0c, 0xc1, 0x0f, 0x51, 0x6a, 0xaa, 0xe9, 0xc1, 0x4b, 0xa9, 0x47,
       0x1f, 0x60, 0xab, 0xd3, 0x92, 0xdc, 0xd7, 0x86, 0xd5, 0x73, 0x54,
       0xab, 0xed, 0xee, 0xe7, 0x28, 0x9d, 0xd4, 0x0a, 0x0a, 0x0a}},
     "RNDR"},

    // ChVzxWRmrTeSgwd3Ui3UumcN8KX7VK3WaD4KGeSKpypj
    {{{0xad, 0xd0, 0x93, 0xff, 0xa5, 0x4b, 0x9f, 0x21, 0xd5, 0xd6, 0x61,
       0xc9, 0x7c, 0x0f, 0xa0, 0x29, 0x1a, 0xc4, 0x30, 0x38, 0x4e, 0xae,
       0x77, 0x52, 0xcc, 0xf3, 0x37, 0x6b, 0x68, 0x71, 0xec, 0x88}},
     "SUSHI"},

    // 7i5KKsX2weiTkry7jA4ZwSuXGhs5eJBEjY8vVxR4pfRx
    {{{0x63, 0xab, 0xd0, 0x96, 0x70, 0x76, 0xf5, 0x8b, 0xa2, 0xed, 0xad,
       0xb4, 0x1f, 0x10, 0x71, 0x9d, 0xf1, 0x35, 0x4a, 0xbe, 0x11, 0x8f,
       0x29, 0xa8, 0xf3, 0x0e, 0xe6, 0x63, 0x94, 0x74, 0xb9, 0x47}},
     "GMT"},

    // 6LX8BhMQ4Sy2otmAWj7Y5sKd9YTVVUgfMsBzT6B9W7ct
    {{{0x4f, 0x4a, 0x87, 0xfa, 0xdc, 0x7f, 0xf3, 0x77, 0x32, 0x91, 0xf9,
       0x9b, 0xcb, 0x3c, 0x8b, 0x6a, 0xf1, 0x58, 0x9f, 0x7a, 0x53, 0xd4,
       0x5d, 0xf1, 0xab, 0xa5, 0x2c, 0xab, 0x29, 0x6a, 0x83, 0x81}},
     "FXS"},

    // HZ1JovNiVvGrGNiiYvEozEVgZ58xaU3RKwX8eACQBCt3
    {{{0xf5, 0xed, 0xec, 0x84, 0x71, 0xc7, 0x56, 0x24, 0xeb, 0xc4, 0x07,
       0x9a, 0x63, 0x43, 0x26, 0xd9, 0x6a, 0x68, 0x9e, 0x61, 0x57, 0xd7,
       0x9a, 0xbe, 0x8f, 0x5a, 0x6f, 0x94, 0x47, 0x28, 0x53, 0xbc}},
     "PYTH"},

    // 4k3Dyjzvzp8eMZWUXbBCjEvwSkkk59S5iCNLY3QrkX6R
    {{{0x37, 0x99, 0x8c, 0xcb, 0xf2, 0xd0, 0x45, 0x8b, 0x61, 0x5c, 0xbc,
       0xc6, 0xb1, 0xa3, 0x67, 0xc4, 0x74, 0x9e, 0x9f, 0xef, 0x73, 0x06,
       0x62, 0x2e, 0x1b, 0x1b, 0x58, 0x91, 0x01, 0x20, 0xbc, 0x9a}},
     "RAY"},

    // DezXAZ8z7PnrnRJjz3wXBoRgixCa6xjnB7YaB1pPB263
    {{{0xbc, 0x07, 0xc5, 0x6e, 0x60, 0xad, 0x3d, 0x3f, 0x17, 0x73, 0x82,
       0xea, 0xc6, 0x54, 0x8f, 0xba, 0x1f, 0xd3, 0x2c, 0xfd, 0x90, 0xca,
       0x02, 0xb3, 0xe7, 0xcf, 0xa1, 0x85, 0xfd, 0xce, 0x73, 0x98}},
     "BONK"},

    // 5tB5D6DGJMxxHYmNkfJNG237x6pZGEwTzGpUUh62yQJ7
    {{{0x48, 0x8a, 0xc2, 0x0f, 0x66, 0x22, 0x77, 0xd8, 0xf1, 0xfe, 0xf7,
       0x6a, 0x75, 0x32, 0x69, 0x11, 0x62, 0x0d, 0xad, 0x86, 0xb4, 0x87,
       0x08, 0x92, 0xef, 0x55, 0xe6, 0xb8, 0x55, 0xd8, 0x9e, 0x8c}},
     "ROA"},

    // C98A4nkJXhpVZNAZdHUA95RpTF3T4whtQubL3YobiUX9
    {{{0xa5, 0x85, 0x4b, 0x58, 0x3d, 0x61, 0xbd, 0x67, 0x40, 0x64, 0x52,
       0x2d, 0x1d, 0x30, 0x17, 0xa3, 0x89, 0x99, 0x0e, 0x96, 0xa9, 0xc2,
       0x44, 0xb9, 0xc5, 0x7f, 0x0d, 0xac, 0x1c, 0xde, 0x4e, 0xa8}},
     "C98"},

    // ATLASXmbPQxBUYbxPsV97usA3fPQYEqzQBUHgiFCUsXx
    {{{0x8c, 0x77, 0xf3, 0x66, 0x1d, 0x6b, 0x4a, 0x8e, 0xf3, 0x9d, 0xbc,
       0x53, 0x40, 0xee, 0xad, 0x8c, 0x3c, 0xbe, 0x0b, 0x45, 0x09, 0x98,
       0x40, 0xe8, 0x26, 0x3d, 0x87, 0x25, 0xb5, 0x87, 0xb0, 0x73}},
     "ATLAS"},

    // E5rk3nmgLUuKUiS94gg4bpWwWwyjCMtddsAXkTFLtHEy
    {{{0xc2, 0x66, 0x7f, 0x39, 0xa3, 0xa7, 0xb6, 0xfe, 0xbb, 0x2f, 0x99,
       0x5e, 0xb4, 0xd1, 0xb7, 0x39, 0xf4, 0x5f, 0xe2, 0xed, 0xd6, 0x45,
       0x40, 0x3c, 0x3e, 0x52, 0xe6, 0x77, 0xe6, 0xbd, 0x68, 0x52}},
     "WOO"},

    // FR87nWEUxVgerFGhZM8Y4AggKGLnaXswr1Pd8wZ4kZcp
    {{{0xd6, 0x31, 0x9a, 0x83, 0xf5, 0xe4, 0xf8, 0x9a, 0x42, 0xdc, 0x9b,
       0x81, 0x2b, 0x41, 0x26, 0x06, 0x9c, 0xbc, 0x0c, 0xe0, 0xfc, 0xfa,
       0x1e, 0x55, 0x76, 0x6f, 0xe0, 0x16, 0x12, 0xea, 0x8f, 0x85}},
     "FRAX"},

    // RLBxxFkseAZ4RgJH3Sqn8jXxhmGoz9jWxDNJMh8pL7a
    {{{0x06, 0x3b, 0xa2, 0xf4, 0x69, 0x72, 0x05, 0xf5, 0x31, 0xb6, 0xde,
       0x49, 0xbb, 0x96, 0x05, 0xfd, 0x2c, 0xa6, 0xa9, 0xdd, 0xf2, 0x43,
       0xbe, 0xd2, 0x51, 0xfd, 0xa6, 0x55, 0x2e, 0xf0, 0xe5, 0x71}},
     "RLB"},

    // EchesyfXePKdLtoiZSL8pBe8Myagyy8ZRqsACNCFGnvp
    {{{0xca, 0x4d, 0x39, 0x96, 0x4c, 0x9c, 0xb5, 0xf9, 0x79, 0x0d, 0x0a,
       0x12, 0x96, 0x9f, 0x60, 0xfd, 0x97, 0x24, 0x93, 0x62, 0x84, 0xea,
       0x4a, 0x12, 0xda, 0xde, 0xd4, 0x2d, 0xdf, 0xa6, 0x9c, 0x5d}},
     "FIDA"},

    // mSoLzYCxHdYgdzU16g5QSh3i5K3z3KZK7ytfqcJm7So
    {{{0x0b, 0x62, 0xba, 0x07, 0x4f, 0x72, 0x2c, 0x9d, 0x41, 0x14, 0xf2,
       0xd8, 0xf7, 0x0a, 0x00, 0xc6, 0x60, 0x02, 0x33, 0x7b, 0x9b, 0xf9,
       0x0c, 0x87, 0x36, 0x57, 0xa6, 0xd2, 0x01, 0xdb, 0x4c, 0x80}},
     "MSOL"},

    // HhJpBhRRn4g56VsyLuT8DL5Bv31HkXqsrahTTUCZeZg4
    {{{0xf8, 0x0e, 0x5d, 0x70, 0xb7, 0x83, 0x02, 0xf8, 0xd6, 0x2d, 0x34,
       0xaa, 0x70, 0xf1, 0xb5, 0xb9, 0x1f, 0xee, 0xde, 0xa3, 0x30, 0xd9,
       0xbe, 0x32, 0x69, 0xca, 0xeb, 0x8e, 0x9a, 0x38, 0x74, 0xc1}},
     "$MYRO"},

    // Saber2gLauYim4Mvftnrasomsv6NvAuncvMEZwcLpD1
    {{{0x06, 0x8d, 0x82, 0x4d, 0x56, 0xf0, 0xee, 0xbb, 0x75, 0x66, 0xe6,
       0xee, 0x1d, 0x65, 0xa9, 0xd2, 0x60, 0xff, 0x50, 0x9a, 0x4b, 0x5c,
       0x69, 0xb6, 0x26, 0x9a, 0xd6, 0x4d, 0xe3, 0xcd, 0x50, 0xbc}},
     "SBR"},

    // 7xKXtg2CW87d97TXJSDpbD5jBkheTqA83TZRuJosgAsU
    {{{0x67, 0x52, 0x05, 0x5c, 0x20, 0xb3, 0xe9, 0xd8, 0x74, 0x66, 0x56,
       0xdd, 0xf7, 0x38, 0x55, 0x50, 0x7f, 0x87, 0xab, 0x6d, 0x87, 0x52,
       0x3e, 0x4c, 0x76, 0xa7, 0xfa, 0x36, 0x09, 0x6a, 0x99, 0xeb}},
     "SAMO"},

    // zebeczgi5fSEtbpfQKVZKCJ3WgYXxjkMUkNNx7fLKAF
    {{{0x0e, 0xc4, 0x9e, 0x1c, 0x77, 0xe7, 0x98, 0x28, 0xf9, 0xae, 0x8a,
       0x05, 0x1b, 0x66, 0x2e, 0x20, 0x88, 0xc7, 0x28, 0x06, 0x9c, 0xed,
       0xb7, 0x0f, 0xef, 0x85, 0x21, 0xb9, 0x4a, 0xcf, 0x74, 0xf8}},
     "ZBC"},

    // hntyVP6YFm1Hg25TN9WGLqM12b8TQmcknKrdu1oxWux
    {{{0x0a, 0x73, 0x20, 0x93, 0x91, 0x85, 0x61, 0xf7, 0xdd, 0x7f, 0xcb,
       0xec, 0x4a, 0xbd, 0x85, 0x13, 0xde, 0xca, 0x1a, 0x96, 0x7f, 0x7a,
       0xd7, 0xa3, 0x9d, 0x63, 0xb4, 0x1e, 0xd8, 0x93, 0x80, 0x8b}},
     "HNT"},

    // EcQCUYv57C4V6RoPxkVUiDwtX1SP8y8FP5AEToYL8Az
    {{{0x03, 0x7c, 0x93, 0xcf, 0x68, 0xde, 0xa1, 0x1d, 0x8f, 0xef, 0xcf,
       0x6a, 0x10, 0xf2, 0xaf, 0x7c, 0x66, 0x24, 0x51, 0x49, 0x70, 0xac,
       0xee, 0x49, 0x2b, 0xf4, 0xb6, 0xd3, 0xf6, 0xbc, 0x1a, 0xe7}},
     "WLKN"},

    // AZsHEMXd36Bj1EMNXhowJajpUXzrKcK57wW4ZGXVa7yR
    {{{0x8e, 0x24, 0x9e, 0xac, 0x2a, 0xa0, 0x53, 0x8b, 0x7a, 0x68, 0x63,
       0x80, 0xc7, 0x25, 0x17, 0xdf, 0xfa, 0xb3, 0x17, 0x74, 0x9f, 0x4e,
       0x43, 0x61, 0xf2, 0xb4, 0xfb, 0x37, 0x0d, 0x68, 0xdc, 0x08}},
     "GUAC"},

    // 5MAYDfq5yxtudAhtfyuMBuHZjgAbaS9tbEyEQYAhDS5y
    {{{0x40, 0x99, 0x26, 0x19, 0x06, 0xe4, 0xd9, 0x9a, 0x69, 0x26, 0x40,
       0x4c, 0xb7, 0x9d, 0x4a, 0x2d, 0xe5, 0x16, 0xb4, 0xae, 0xf1, 0x40,
       0xe4, 0xbf, 0x48, 0xd3, 0x5b, 0x4b, 0xa2, 0x26, 0x54, 0xe4}},
     "ACS"},

    // SHDWyBxihqiCj6YekG2GUr7wqKLeLAMK1gHZck9pL6y
    {{{0x06, 0x79, 0xdb, 0x01, 0xce, 0x2a, 0x84, 0xf7, 0x1c, 0x13, 0x9e,
       0x7c, 0x99, 0x42, 0xf6, 0xda, 0x3b, 0x33, 0x1f, 0xde, 0xc3, 0x31,
       0x9d, 0x02, 0xf8, 0x99, 0xeb, 0xa7, 0x01, 0x34, 0x73, 0x7e}},
     "SHDW"},

    // poLisWXnNRwC6oBu1vHiuKQzFjGL4XDSu4g9qjz9qVk
    {{{0x0c, 0x3e, 0xb1, 0xe2, 0xec, 0x6d, 0xbd, 0x1c, 0x0c, 0x8b, 0xd5,
       0x71, 0x71, 0x8d, 0xb6, 0xf6, 0x14, 0xd0, 0x40, 0xfa, 0xb4, 0x12,
       0xf1, 0x09, 0x1b, 0x66, 0xf1, 0x28, 0xde, 0xfb, 0x10, 0x53}},
     "POLIS"},

    // 6DNSN2BJsaPFdFFc1zP37kkeNe4Usc1Sqkzr9C9vPWcU
    {{{0x4d, 0x75, 0xa4, 0xbf, 0xf3, 0x35, 0x44, 0x72, 0x67, 0x1a, 0x94,
       0xf5, 0x78, 0x50, 0x4a, 0xbf, 0x20, 0x8f, 0xf7, 0xd1, 0xb4, 0x38,
       0xe9, 0xe8, 0x6b, 0x4a, 0x66, 0x0f, 0x5a, 0x42, 0xd5, 0x9d}},
     "TBTC"},

    // 7kbnvuGBxxj8AG9qp8Scn56muWGaRaFqxg1FsRp3PaFT
    {{{0x64, 0x51, 0x6f, 0x87, 0x4a, 0x13, 0x1e, 0x76, 0xd7, 0xe7, 0xf8,
       0xa7, 0x90, 0x1b, 0x63, 0x9e, 0xe9, 0x19, 0xc5, 0xa8, 0x37, 0x30,
       0x76, 0x03, 0xe6, 0x3a, 0xf5, 0x4e, 0xf3, 0x3b, 0xab, 0xda}},
     "UXD"},

    // CKaKtYvz6dKPyMvYq9Rh3UBrnNqYZAyd7iF4hJtjUvks
    {{{0xa8, 0x32, 0xb1, 0x34, 0x7f, 0x65, 0x93, 0x2a, 0xa5, 0xa8, 0xb8,
       0xe3, 0xb6, 0xf7, 0x85, 0x4a, 0x29, 0x72, 0x15, 0x7d, 0x03, 0x75,
       0x09, 0x7d, 0x59, 0x9e, 0xab, 0xac, 0x96, 0x85, 0xa9, 0x5c}},
     "GARI"},

    // 7dHbWXmci3dT8UFYWYZweBLXgycu7Y3iL6trKn1Y7ARj
    {{{0x62, 0x71, 0xcb, 0x71, 0x19, 0x47, 0x6b, 0x9d, 0xce, 0x00, 0xd8,
       0x15, 0xc8, 0xff, 0x31, 0x5f, 0xc8, 0xbf, 0x7d, 0x28, 0x48, 0x63,
       0x3d, 0x34, 0x94, 0x2a, 0xdf, 0xd5, 0x35, 0xf2, 0xde, 0xfe}},
     "STSOL"},

    // 3bRTivrVsitbmCTGtqwp7hxXPsybkjn4XLNtPsHqa3zR
    {{{0x26, 0x88, 0xc7, 0x7a, 0x2a, 0x9c, 0x9a, 0xd1, 0x73, 0x18, 0x69,
       0x9d, 0xcb, 0x85, 0xb3, 0xd9, 0xa2, 0x37, 0x62, 0xc6, 0xe7, 0x15,
       0x6b, 0xc7, 0xf8, 0x3b, 0x30, 0x52, 0x95, 0x32, 0x93, 0xf2}},
     "LIKE"},

    // SCSuPPNUSypLBsV4darsrYNg4ANPgaGhKhsA3GmMyjz
    {{{0x06, 0x74, 0x76, 0x83, 0xac, 0x65, 0xf2, 0x3a, 0x11, 0xc4, 0xfc,
       0xc7, 0x8a, 0x2a, 0x1f, 0x80, 0x66, 0xcf, 0xd8, 0x71, 0x0a, 0x00,
       0xa9, 0xc6, 0xfd, 0xcf, 0x43, 0x25, 0x95, 0xd2, 0x3c, 0xdd}},
     "SCS"},

    // BgwQjVNMWvt2d8CN51CsbniwRWyZ9H9HfHkEsvikeVuZ
    {{{0x9e, 0xd0, 0x0a, 0x9e, 0x2b, 0x18, 0x4c, 0x6c, 0x0b, 0x6d, 0x96,
       0x29, 0xc2, 0x64, 0x8e, 0xfe, 0x56, 0xc5, 0x12, 0x45, 0x6e, 0x35,
       0x45, 0x38, 0xbb, 0x4e, 0xfa, 0xd3, 0x32, 0xea, 0x5f, 0x30}},
     "DEP"},

    // orcaEKTdK7LKz57vaAYr9QeNsVEPfiu6QeMU1kektZE
    {{{0x0c, 0x00, 0xd0, 0xaf, 0xeb, 0x86, 0x14, 0xda, 0x7f, 0x19, 0xab,
       0xa0, 0x2d, 0x40, 0xf1, 0x8c, 0x69, 0x25, 0x85, 0xf6, 0x50, 0x20,
       0xdf, 0xce, 0xd3, 0xd5, 0xe5, 0xf9, 0xa9, 0xc0, 0xc4, 0xe1}},
     "ORCA"},

    // SRMuApVNdxXokk5GT7XD5cUUgXMBCoAz2LHeuAoKWRt
    {{{0x06, 0x83, 0x10, 0x86, 0x1a, 0x98, 0x32, 0x7d, 0x05, 0x50, 0x57,
       0x4d, 0x84, 0x41, 0x8a, 0xa6, 0xe1, 0x0c, 0x33, 0x52, 0xdd, 0xaa,
       0x7f, 0xd7, 0xf5, 0x81, 0x52, 0xcc, 0xee, 0xb2, 0x38, 0x87}},
     "SRM"},

    // AURYydfxJib1ZkTir1Jn1J9ECYUtjb6rKQVmtYaixWPP
    {{{0x8c, 0xbf, 0x9f, 0xdb, 0xa8, 0x69, 0x1b, 0x67, 0xe3, 0x2e, 0xb5,
       0x7a, 0x78, 0x4b, 0x1c, 0xae, 0x27, 0x44, 0xc6, 0xfc, 0x03, 0xac,
       0x61, 0xe4, 0x50, 0xdd, 0x93, 0x31, 0xb9, 0xbd, 0xbb, 0x2e}},
     "AURY"},

    // 4vMsoUT2BWatFweudnQM1xedRLfJgJ7hswhcpz4xgBTy
    {{{0x3a, 0x3e, 0x72, 0xb6, 0x7e, 0xa9, 0x4e, 0x17, 0x65, 0x00, 0x4e,
       0xf6, 0x82, 0x44, 0xf6, 0xb0, 0xb3, 0x2d, 0xdd, 0xe7, 0x43, 0xa3,
       0x3b, 0x20, 0xf9, 0x14, 0x30, 0xe1, 0xe8, 0x17, 0xc1, 0xac}},
     "HONEY"},

    // AFbX8oGjGpmVFywbVouvhQSRmiW2aR1mohfahi4Y2AdB
    {{{0x89, 0x76, 0x58, 0x55, 0x7d, 0x21, 0x17, 0x22, 0xba, 0x67, 0x8a,
       0xd9, 0x92, 0x76, 0xeb, 0x14, 0xd9, 0x56, 0x7f, 0x0a, 0x79, 0x2e,
       0x3b, 0xa7, 0x0c, 0x89, 0x47, 0x85, 0xc7, 0x42, 0xbf, 0xae}},
     "GST-SOL"},

    // xxxxa1sKNGwFtw2kFn8XauW9xq8hBZ5kVtcSesTT9fW
    {{{0x0e, 0x56, 0x39, 0x5e, 0x3c, 0x86, 0x01, 0x43, 0x80, 0x2e, 0x9b,
       0x94, 0xa0, 0x2c, 0xc6, 0xd0, 0x4f, 0x75, 0xfe, 0xc7, 0x2a, 0x3f,
       0xbb, 0x71, 0x52, 0x68, 0x35, 0x5e, 0x0c, 0xd7, 0xcd, 0x89}},
     "SLIM"},

    // kinXdEcpDQeHPEuQnqmUgtYykqKGVFq6CeVX5iAHJq6
    {{{0x0b, 0x33, 0x38, 0xa0, 0xab, 0x2c, 0xc8, 0x41, 0xd5, 0xb0, 0x14,
       0xbc, 0x6a, 0x3c, 0xf7, 0x56, 0x29, 0x18, 0x74, 0xb3, 0x19, 0xc9,
       0x51, 0x7d, 0x9b, 0xbf, 0xa9, 0xe4, 0xe9, 0x66, 0x1e, 0xf9}},
     "KIN"},

    // 9ET2QCQJdFkeKkuaampNbmicbA8eLYauFCWch9Ddh9p5
    {{{0x7a, 0x4f, 0x78, 0xb5, 0x27, 0xd4, 0x3a, 0xcb, 0xd8, 0x7d, 0xd4,
       0xe6, 0x5d, 0xe0, 0xe9, 0xde, 0x6a, 0xa5, 0x68, 0x4c, 0xba, 0xf5,
       0xa1, 0x37, 0xfd, 0x53, 0x54, 0xb3, 0x63, 0xd9, 0x6a, 0xca}},
     "CTI"},

    // GDfnEsia2WLAW5t8yx2X5j2mkfA74i5kwGdDuZHt7XmG
    {{{0xe2, 0x1e, 0x1f, 0x4d, 0x64, 0x60, 0xe8, 0xf5, 0xfb, 0xc8, 0x1c,
       0xfc, 0x0b, 0x79, 0x23, 0x1c, 0x42, 0xa0, 0xe3, 0xeb, 0x9a, 0x07,
       0xc7, 0x28, 0xaa, 0xc8, 0x8b, 0x1f, 0x59, 0xcc, 0x5f, 0x5f}},
     "CROWN"},

    // MNDEFzGvMt87ueuHvVU9VcTqsAP5b3fTGPsHuuPA5ey
    {{{0x05, 0x37, 0x99, 0x6f, 0x26, 0x99, 0x67, 0x4f, 0xb7, 0x08, 0x6e,
       0x46, 0x8f, 0xb3, 0x3b, 0x4f, 0xde, 0x14, 0x49, 0xf4, 0x7a, 0x8b,
       0xef, 0xd8, 0xb3, 0x42, 0xbf, 0x6b, 0x33, 0xcf, 0xf3, 0x72}},
     "MNDE"},

    // ETAtLmCmsoiEEKfNrHKJ2kYy3MoABhU6NQvpSfij5tDs
    {{{0xc7, 0xdc, 0x35, 0x52, 0xac, 0xd0, 0x85, 0xff, 0xa9, 0x89, 0xb8,
       0x1b, 0x21, 0xe5, 0xe0, 0xbc, 0xbc, 0xcb, 0xb1, 0xec, 0x87, 0x83,
       0x5f, 0x0d, 0xb1, 0x2f, 0xab, 0xba, 0xd6, 0x66, 0xdd, 0xf6}},
     "MEDIA"},

    // 6VNKqgz9hk7zRShTFdg5AnkfKwZUcojzwAkzxSH3bnUm
    {{{0x51, 0x8e, 0xcf, 0x30, 0x94, 0x20, 0x36, 0xe1, 0x1b, 0x4e, 0xb4,
       0xf2, 0xf5, 0xa0, 0x5d, 0x32, 0x66, 0x1f, 0x9a, 0xda, 0x0a, 0x6a,
       0x44, 0x02, 0xc5, 0xdf, 0x09, 0x8e, 0xa6, 0xc4, 0xfb, 0xce}},
     "HAPI"},

    // 6cVgJUqo4nmvQpbgrDZwyfd6RwWw5bfnCamS3M9N1fd
    {{{0x01, 0x70, 0x09, 0xa9, 0x39, 0x0d, 0x6d, 0x6e, 0x77, 0x77, 0xa2,
       0x76, 0x75, 0xf0, 0x5e, 0x16, 0x92, 0xfe, 0x09, 0x56, 0x1c, 0xf2,
       0x58, 0x79, 0x20, 0x3a, 0x0d, 0x28, 0x2f, 0x8b, 0x34, 0x08}},
     "SHILL"},

    // HBB111SCo9jkCejsZfz8Ec8nH7T6THF8KEKSnvwT6XK6
    {{{0xf0, 0x56, 0x1b, 0x1f, 0x9a, 0x0a, 0xbc, 0x90, 0x09, 0xa9, 0x18,
       0xdc, 0x1c, 0x4f, 0x5f, 0xf9, 0x6d, 0x3f, 0xa2, 0x95, 0x3a, 0xcd,
       0xf3, 0xee, 0x01, 0xbb, 0x22, 0xde, 0xad, 0x2f, 0xd9, 0x39}},
     "HBB"},

    // HHjoYwUp5aU6pnrvN4s2pwEErwXNZKhxKGYjRJMoBjLw
    {{{0xf2, 0x04, 0xae, 0x4a, 0x20, 0x20, 0x16, 0xd4, 0xde, 0x45, 0x49,
       0x6d, 0x2b, 0x0b, 0xec, 0xaa, 0x65, 0x0f, 0x1e, 0x9a, 0x58, 0xc0,
       0x24, 0x26, 0xf4, 0x19, 0x01, 0x66, 0x48, 0x8f, 0x4d, 0x9c}},
     "PIP"},

    // BiDB55p4G3n1fGhwKFpxsokBMqgctL4qnZpDH1bVQxMD
    {{{0x9f, 0x23, 0x72, 0x7b, 0xb4, 0xe0, 0x7e, 0x5c, 0xd8, 0x8e, 0xb5,
       0x18, 0x1a, 0xab, 0xc6, 0xe9, 0xe8, 0x7f, 0x53, 0xd1, 0x36, 0xbd,
       0x29, 0xfa, 0x5b, 0x67, 0xaf, 0x7c, 0x6e, 0x81, 0x9f, 0xe8}},
     "DIO"},

    // DUSTawucrTsGU8hcqRdHDCbuYhCPADMLM2VcCb8VnFnQ
    {{{0xb9, 0x53, 0xb5, 0xf8, 0xdd, 0x54, 0x57, 0xa2, 0xa0, 0xf0, 0xd4,
       0x19, 0x03, 0x40, 0x97, 0x85, 0xb9, 0xd8, 0x4d, 0x40, 0x45, 0x61,
       0x4f, 0xaa, 0x4f, 0x50, 0x5e, 0xe1, 0x32, 0xdc, 0xd7, 0x69}},
     "DUST"},

    // CRWNYkqdgvhGGae9CKfNka58j6QQkaD5bLhKXvUYqnc1
    {{{0xa9, 0xb7, 0xb4, 0xc1, 0x91, 0xb9, 0xfc, 0xd8, 0xa1, 0x01, 0xe5,
       0x17, 0xde, 0x4a, 0x2b, 0xc4, 0x4a, 0xe7, 0xdf, 0x4f, 0xf6, 0x59,
       0x5f, 0x62, 0xcb, 0x4b, 0xf9, 0xc5, 0xc3, 0xb0, 0x1f, 0xd2}},
     "CRWNY"},

    // Fm9rHUTF5v3hwMLbStjZXqNBBoZyGriQaFM6sTFz3K8A
    {{{0xdb, 0x53, 0x2d, 0xd1, 0xdf, 0x8e, 0x6c, 0x87, 0xca, 0x70, 0x69,
       0x5d, 0xdf, 0x92, 0xf8, 0xd8, 0x6e, 0x62, 0x1d, 0x0d, 0x86, 0xde,
       0x69, 0xc3, 0x05, 0x8d, 0xe9, 0xb2, 0x9e, 0xe2, 0x26, 0x47}},
     "MBS"},

    // GENEtH5amGSi8kHAtQoezp1XEXwZJ8vcuePYnXdKrMYz
    {{{0xe2, 0x4b, 0xde, 0xae, 0xff, 0xa0, 0x4f, 0x43, 0xb8, 0x77, 0x1a,
       0x42, 0x0b, 0x80, 0x06, 0x1c, 0xf0, 0x93, 0x26, 0x0d, 0xb2, 0x9a,
       0xc9, 0xc8, 0xea, 0xd6, 0x50, 0x58, 0xa9, 0x7f, 0x78, 0x57}},
     "GENE"},

    // 3dgCCb15HMQSA4Pn3Tfii5vRk7aRqTH95LJjxzsG2Mug
    {{{0x27, 0x1c, 0x99, 0x48, 0x36, 0x6f, 0xba, 0x24, 0x59, 0x0f, 0xef,
       0xc9, 0x9d, 0x48, 0xca, 0xcb, 0xc2, 0x6e, 0xb3, 0xc4, 0x25, 0x1a,
       0x04, 0x5c, 0xf9, 0xab, 0xbe, 0x0d, 0x0e, 0x25, 0x1f, 0xd7}},
     "HXD"},

    // 35r2jMGKytAJ7FyKfKRHPanT8kpjg3emPy7WG6GANCNB
    {{{0x1e, 0xf5, 0x22, 0xa2, 0xb0, 0x9c, 0x2e, 0x5f, 0x78, 0xa2, 0x3b,
       0x60, 0xc9, 0xa0, 0x64, 0xe2, 0x9f, 0x9d, 0x67, 0xcc, 0x73, 0x51,
       0x78, 0x1b, 0x70, 0x6a, 0x16, 0x4c, 0x2d, 0xff, 0x5a, 0x50}},
     "XCUR"},

    // DAtU322C23YpoZyWBm8szk12QyqHa9rUQe1EYXzbm1JE
    {{{0xb4, 0xd4, 0xa9, 0xcf, 0x77, 0x22, 0x30, 0xb2, 0x4b, 0x42, 0x17,
       0x91, 0xc9, 0xdc, 0x1b, 0x14, 0xe9, 0x6c, 0xb4, 0x44, 0x4b, 0xd6,
       0x0d, 0x77, 0x57, 0x1e, 0xd5, 0xaa, 0xfe, 0x5e, 0x59, 0x87}},
     "FOUR"},

    // Taki7fi3Zicv7Du1xNAWLaf6mRK7ikdn77HeGzgwvo4
    {{{0x06, 0xcf, 0x44, 0x2f, 0xd1, 0xea, 0x50, 0xd2, 0xb1, 0x86, 0x29,
       0x07, 0x92, 0x32, 0x39, 0x6c, 0x07, 0x5d, 0x29, 0xc1, 0xed, 0xa9,
       0x12, 0xd3, 0x8f, 0xd7, 0x50, 0x49, 0xf8, 0x27, 0xe3, 0xa3}},
     "TAKI"},

    // MangoCzJ36AjZyKwVj3VnYU4GTonjfVEnJmvvWaxLac
    {{{0x05, 0x45, 0xd1, 0xee, 0x98, 0x05, 0x76, 0x4e, 0x58, 0xb3, 0xef,
       0x5b, 0xcb, 0x54, 0x17, 0x75, 0x17, 0xdf, 0xe7, 0x98, 0x0e, 0x6e,
       0x44, 0xe6, 0x7a, 0x62, 0x8b, 0xdb, 0x9d, 0x2a, 0x7b, 0xd1}},
     "MNGO"},

    // StepAscQoEioFxxWGnh2sLBDFp9d8rvKz2Yp39iDpyT
    {{{0x06, 0xa1, 0xec, 0x5b, 0xd8, 0x2a, 0xd9, 0xc0, 0x32, 0xa9, 0xf7,
       0xd4, 0x66, 0xba, 0x2c, 0x72, 0x8b, 0x0e, 0xf3, 0x6a, 0x8b, 0x77,
       0x3e, 0xd2, 0x19, 0xd6, 0x96, 0x50, 0xd3, 0x47, 0x2b, 0xd6}},
     "STEP"},

    // GDsVXtyt2CBwieKSYMEsjjZXXvqz2G2VwudD7EvXzoEU
    {{{0xe2, 0x2b, 0x5d, 0x72, 0x5a, 0x52, 0x02, 0x8f, 0x8c, 0x51, 0x24,
       0x08, 0xee, 0x21, 0x11, 0x34, 0xc7, 0xb2, 0x80, 0x54, 0xde, 0x84,
       0xa1, 0xa3, 0x9f, 0xff, 0xd8, 0xb9, 0x4c, 0x6b, 0x78, 0xad}},
     "HIRAM"},

    // F3nefJBcejYbtdREjui1T9DPh5dBgpkKq7u2GAAMXs5B
    {{{0xd0, 0xba, 0x64, 0xf9, 0x84, 0x0c, 0x2e, 0xb3, 0xad, 0xd3, 0x58,
       0x3f, 0x57, 0x8d, 0x12, 0x7d, 0x3f, 0xb3, 0x09, 0x64, 0x8a, 0xb7,
       0xaa, 0x1b, 0x20, 0x91, 0x05, 0xf8, 0x4b, 0xce, 0xa1, 0x4a}},
     "AART"},

    // z3dn17yLaGMKffVogeFHQ9zWVcXgqgf3PQnDsNs2g6M
    {{{0x0e, 0x9d, 0x15, 0x9f, 0x99, 0xb6, 0x2a, 0x1f, 0xd3, 0x47, 0x89,
       0x93, 0xd5, 0x16, 0xb5, 0xc4, 0xcd, 0xdf, 0xf8, 0x29, 0xd9, 0x7d,
       0x61, 0x4a, 0xa1, 0x88, 0x01, 0xb2, 0x13, 0x12, 0x90, 0x9a}},
     "OXY"},

    // MAPS41MDahZ9QdKXhVa4dWB9RuyfV4XqhyAZ8XcYepb
    {{{0x05, 0x2a, 0x3a, 0xd5, 0x9b, 0xc9, 0x81, 0x77, 0x32, 0xc1, 0xe1,
       0x92, 0xf9, 0x39, 0x1d, 0x5f, 0x05, 0x32, 0x2a, 0x5d, 0x2a, 0xfb,
       0x5b, 0x55, 0xe2, 0xf2, 0x18, 0x6c, 0xc3, 0xac, 0xc2, 0x84}},
     "MAPS"},

    // 9nEqaUcb16sQ3Tn1psbkWqyhPdLmfHWjKGymREjsAgTE
    {{{0x82, 0x74, 0x47, 0x29, 0x38, 0x31, 0x0e, 0x90, 0xc7, 0x74, 0xc2,
       0x5a, 0xde, 0x5e, 0x6f, 0xca, 0xa7, 0x23, 0x8a, 0xef, 0x9e, 0x3e,
       0x67, 0x76, 0x4d, 0x45, 0xb9, 0x20, 0xd0, 0xc3, 0xe0, 0x75}},
     "WOOF"},

    // PsyFiqqjiv41G7o5SMRzDJCu4psptThNR2GtfeGHfSq
    {{{0x05, 0xdc, 0x68, 0xde, 0x49, 0xec, 0xea, 0x5a, 0x9b, 0x33, 0xc3,
       0xbc, 0x12, 0xbe, 0x2e, 0x63, 0x33, 0x44, 0x63, 0x4b, 0x0f, 0x95,
       0x11, 0x24, 0xc2, 0xee, 0xf1, 0xb0, 0x1a, 0x6c, 0xb5, 0xc2}},
     "PSY"},

    // DkNihsQs1hqEwf9TgKP8FmGv7dmMQ7hnKjS2ZSmMZZBE
    {{{0xbd, 0x68, 0xc6, 0x94, 0xe6, 0x4b, 0x7a, 0x12, 0xcc, 0xea, 0x06,
       0xf6, 0x4e, 0xaf, 0xa8, 0x59, 0x0e, 0x11, 0x67, 0xaa, 0x70, 0xac,
       0x1a, 0x0f, 0xc8, 0x28, 0xf6, 0x09, 0x2d, 0x54, 0xc7, 0xd1}},
     "QTCON"},

    // DFL1zNkaGPWm1BqAVqRjCZvHmwTFrEaJtbzJWgseoNJh
    {{{0xb5, 0xf7, 0xe0, 0x89, 0x66, 0xfa, 0x2f, 0x99, 0x7a, 0xbc, 0x90,
       0xd7, 0xa7, 0xcd, 0xe1, 0xbc, 0x73, 0x3f, 0x56, 0x7b, 0x9e, 0xaf,
       0xc3, 0x00, 0x7e, 0x80, 0xa3, 0x17, 0x47, 0x26, 0xb6, 0xf6}},
     "DFL"},

    // SLNDpmoWTVADgEdndyvWzroNL7zSi1dF9PC3xHGtPwp
    {{{0x06, 0x7d, 0x6a, 0xd4, 0x10, 0x20, 0xf0, 0x4f, 0xba, 0x7d, 0xa8,
       0xdd, 0x06, 0x76, 0xd3, 0x99, 0xd2, 0x6c, 0x41, 0x40, 0x63, 0x86,
       0xf0, 0x03, 0x9c, 0xa0, 0x06, 0x33, 0x03, 0xb4, 0xc5, 0x2b}},
     "SLND"},

    // a11bdAAuV8iB2fu7X6AxAvDTo1QZ8FXB3kk5eecdasp
    {{{0x08, 0x74, 0x2d, 0xa7, 0x7f, 0x53, 0x2c, 0xb2, 0x33, 0x74, 0x02,
       0xe2, 0xab, 0x66, 0x18, 0x7b, 0x63, 0xa2, 0x90, 0x7c, 0x9a, 0x62,
       0x10, 0x7d, 0xab, 0x70, 0x13, 0xa2, 0x8d, 0xeb, 0x46, 0x57}},
     "ABR"},

    // GFX1ZjR2P15tmrSwow6FjyDYcEkoFb4p4gJCpLBjaxHD
    {{{0xe2, 0x97, 0x5e, 0x09, 0x79, 0x97, 0x18, 0x8b, 0x8c, 0x83, 0xcf,
       0x5b, 0x64, 0xf2, 0x8f, 0xf4, 0x2b, 0x1a, 0xe5, 0x79, 0xb1, 0xb6,
       0x74, 0x78, 0x57, 0xbf, 0x72, 0x21, 0x50, 0xde, 0x7f, 0xb0}},
     "GOFX"},

    // MEANeD3XDdUmNMsRGjASkSWdC8prLYsoRJ61pPeHctD
    {{{0x05, 0x2e, 0x7f, 0x80, 0xa1, 0x4a, 0x1e, 0x7a, 0x52, 0x54, 0xe9,
       0xa1, 0xc2, 0x7f, 0x7f, 0xc4, 0x85, 0x63, 0xbf, 0xc3, 0x5f, 0x0b,
       0xe1, 0x77, 0xa8, 0xd5, 0x56, 0xae, 0x8b, 0xa1, 0xad, 0xd6}},
     "MEAN"},

    // PRSMNsEPqhGVCH1TtWiJqPjJyh2cKrLostPZTNy1o5x
    {{{0x05, 0xbe, 0x68, 0xae, 0x29, 0x77, 0xce, 0x39, 0xf1, 0x50, 0x86,
       0xf2, 0xc7, 0x61, 0xb2, 0x4c, 0xf0, 0x54, 0xa4, 0x0b, 0x22, 0xa2,
       0xa5, 0xb3, 0x3e, 0xf5, 0x83, 0xc5, 0x0f, 0x1c, 0xfd, 0xb7}},
     "PRISM"},

    // 9mWRABuz2x6koTPCWiCPM49WUbcrNqGTHBV9T9k7y1o7
    {{{0x82, 0x44, 0x4f, 0xf8, 0x28, 0x36, 0x60, 0x79, 0x3c, 0x03, 0x70,
       0xa7, 0xdd, 0x9f, 0xb3, 0x5c, 0xb1, 0xf7, 0x33, 0x8d, 0x57, 0xeb,
       0x08, 0x87, 0x65, 0xd0, 0xda, 0xd0, 0x90, 0x54, 0x1e, 0x72}},
     "MIMATIC"},

    // BLT1noyNr3GttckEVrtcfC6oyK6yV1DpPgSyXbncMwef
    {{{0x99, 0x90, 0x51, 0x7d, 0xe4, 0xaa, 0xb7, 0x24, 0xb1, 0xd8, 0xe7,
       0xfe, 0xad, 0x02, 0xd3, 0xf2, 0x5a, 0x7a, 0xd6, 0x91, 0x2b, 0xa3,
       0x39, 0xc6, 0xb7, 0xb6, 0x37, 0xd2, 0xf5, 0x3d, 0x7d, 0x10}},
     "BLT"},

    // UXPhBoR3qG4UCiGNJfV7MqhHyFqKN68g45GoYvAeL2M
    {{{0x07, 0x0d, 0x0b, 0x9b, 0xee, 0x96, 0x60, 0x9a, 0x69, 0xa1, 0x7a,
       0x10, 0x83, 0x37, 0x05, 0x37, 0x0f, 0xb1, 0x16, 0xa0, 0x6a, 0xdb,
       0x20, 0xd5, 0xef, 0xd8, 0x66, 0xe6, 0x80, 0x51, 0xc1, 0x32}},
     "UXP"},

    // NFTUkR4u7wKxy9QLaX2TGvd9oZSWoMo4jqSJqdMb7Nk
    {{{0x05, 0x71, 0x8b, 0x04, 0x57, 0x23, 0x12, 0xd7, 0x3a, 0xa7, 0x1d,
       0xea, 0xec, 0x43, 0xc8, 0x9d, 0x77, 0x84, 0x4b, 0x0b, 0x7f, 0xf9,
       0xe3, 0xe7, 0x2d, 0xa8, 0x51, 0x01, 0x82, 0x62, 0x74, 0x55}},
     "BLOCK"},

    // PoRTjZMPXb9T7dyU7tpLEZRQj7e6ssfAE62j2oQuc6y
    {{{0x05, 0xd7, 0x44, 0x5b, 0xfb, 0x7e, 0x90, 0x52, 0x74, 0xaa, 0xa4,
       0xe5, 0x2a, 0x4b, 0x91, 0x03, 0x1c, 0x82, 0xc5, 0x68, 0x9d, 0x7e,
       0xfe, 0x44, 0x2d, 0x92, 0x9d, 0x69, 0x33, 0xb2, 0x4a, 0xd6}},
     "PORT"},

    // 5oVNBeEEQvYi1cX3ir8Dx5n1P7pdxydbGF2X4TxVusJm
    {{{0x47, 0x57, 0x89, 0x9f, 0xb8, 0xbe, 0xdb, 0xa2, 0x87, 0x78, 0xaa,
       0xcd, 0x67, 0xe5, 0x68, 0xe7, 0x34, 0x70, 0xcc, 0xe9, 0x0b, 0xcd,
       0x53, 0x2b, 0x6c, 0xb6, 0x18, 0x29, 0x76, 0x28, 0x82, 0x4e}},
     "SCNSOL"},

    // CWBzupvyXN1Cf5rsBEHbzfTFvreLfUaJ77BMNLVJ739y
    {{{0xaa, 0xea, 0xd5, 0xed, 0x67, 0x94, 0x51, 0x11, 0x31, 0x03, 0x62,
       0x04, 0xc1, 0x47, 0xc8, 0x94, 0xfb, 0xcf, 0xc5, 0x0e, 0xcd, 0xbc,
       0x8e, 0x36, 0xc6, 0xa0, 0xd6, 0xf4, 0xc2, 0xee, 0xb8, 0x10}},
     "ATPAY"},

    // A94X2fRy3wydNShU4dRaDyap2UuoeWJGWyATtyp61WZf
    {{{0x87, 0xc9, 0xce, 0x6b, 0x63, 0x44, 0x18, 0x7c, 0x4b, 0x75, 0xfa,
       0x01, 0xdd, 0x43, 0x34, 0xd8, 0xbb, 0x82, 0x6a, 0x92, 0x14, 0xfe,
       0xfe, 0x9d, 0x39, 0xcc, 0xe5, 0xfa, 0xd2, 0x9b, 0x6f, 0xaa}},
     "TRYB"},

    // TuLipcqtGVXP9XR62wM8WWCm6a9vhLs7T1uoWBk6FDs
    {{{0x06, 0xe4, 0x48, 0x36, 0x99, 0x8a, 0x9e, 0x52, 0xbd, 0xe7, 0xb5,
       0x18, 0x2f, 0xdb, 0xbd, 0xde, 0x4e, 0x27, 0x89, 0xcb, 0xff, 0xe5,
       0xab, 0x0e, 0x97, 0x62, 0xcb, 0x13, 0x65, 0x1c, 0x8b, 0xda}},
     "TULIP"},

    // 2VhjJ9WxaGC3EZFwJG9BDUs9KxKCAjQY4vgd1qxgYWVg
    {{{0x16, 0x36, 0x00, 0x94, 0xfd, 0x16, 0xe5, 0x88, 0x67, 0x41, 0x2c,
       0xa5, 0x8e, 0x62, 0x2f, 0xe8, 0x1a, 0x71, 0xfe, 0x47, 0xb8, 0xa8,
       0xbf, 0x3b, 0x61, 0x2e, 0x9d, 0x96, 0xa4, 0x03, 0xd3, 0x3b}},
     "EUROE"},

    // BKipkearSqAUdNKa1WDstvcMjoPsSKBuNyvKDQDDu9WE
    {{{0x99, 0x60, 0x9d, 0x15, 0x3e, 0x4a, 0xe2, 0x71, 0x02, 0xe5, 0x4d,
       0x75, 0x0f, 0x65, 0x1d, 0x0f, 0xf4, 0x47, 0x68, 0x6b, 0x58, 0x76,
       0xad, 0x1f, 0x12, 0xcc, 0xa6, 0xe9, 0x42, 0x1e, 0x89, 0xdf}},
     "HAWK"},

    // GsNzxJfFn6zQdJGeYsupJWzUAm57Ba7335mfhWvFiE9Z
    {{{0xeb, 0xc7, 0x38, 0x0b, 0x4b, 0x24, 0x67, 0xa5, 0x6f, 0x24, 0x7d,
       0x9d, 0x83, 0x63, 0x5f, 0x45, 0xdf, 0x77, 0x4b, 0xd3, 0x41, 0xfe,
       0x02, 0x8e, 0xf5, 0x6b, 0x45, 0x60, 0x7b, 0xfe, 0x25, 0x6c}},
     "DXL"},

    // SLCLww7nc1PD2gQPQdGayHviVVcpMthnqUz2iWKhNQV
    {{{0x06, 0x7d, 0x39, 0x88, 0xce, 0x88, 0x29, 0x45, 0xc6, 0x3a, 0x07,
       0x17, 0xa9, 0x25, 0x38, 0xad, 0xdd, 0x9a, 0x37, 0x55, 0x0c, 0xe5,
       0xcd, 0x71, 0x1f, 0x76, 0xca, 0x74, 0xa4, 0xc8, 0x97, 0x86}},
     "SLCL"},

    // Ea5SjE2Y6yvCeW5dYTn7PYMuW5ikXkvbGdcmSnXeaLjS
    {{{0xc9, 0xa1, 0x1f, 0x01, 0xcc, 0x85, 0x7e, 0x5f, 0xeb, 0xdd, 0xff,
       0x9f, 0xd9, 0xe0, 0x4c, 0xc8, 0x2f, 0x44, 0xec, 0x58, 0xec, 0x6f,
       0x19, 0xe2, 0x3f, 0x5e, 0x7c, 0xca, 0x07, 0xff, 0xb0, 0x41}},
     "PAI"},

    // HxhWkVpk5NS4Ltg5nij2G671CKXFRKPK8vy271Ub4uEK
    {{{0xfb, 0xff, 0xbe, 0x51, 0xe1, 0x73, 0x11, 0x60, 0xaa, 0x8e, 0xb9,
       0x1c, 0xbf, 0xe3, 0x1d, 0x8d, 0x67, 0xbd, 0x25, 0xcf, 0xc2, 0xee,
       0x12, 0x01, 0x97, 0x8e, 0x5c, 0x1a, 0xb3, 0x22, 0xfc, 0xcc}},
     "HXRO"}};

const char* get_token_symbol(const Pubkey* mint_address) {
    for (size_t i = 0; i < ARRAY_LEN(TOKEN_REGISTRY); i++) {
        const TokenInfo* info = &TOKEN_REGISTRY[i];

        if (memcmp(&(info->mint_address), mint_address, PUBKEY_SIZE) == 0) {
            return info->symbol;
        }
    }
    return "???";
}
