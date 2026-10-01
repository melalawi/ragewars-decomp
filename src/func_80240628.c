typedef struct func_80240628_S1 func_80240628_S1;
typedef struct func_80240628_S2 func_80240628_S2;
struct func_80240628_S1 {
    char pad0[0x4];
    float unk4;
};
struct func_80240628_S2 {
    char pad0[0x4];
    float unk4;
};

/** Order two records by their scalar at offset four. */
int func_80240628(void *left, void *right) {
    return ((func_80240628_S1 *)(left))->unk4 < ((func_80240628_S2 *)(right))->unk4 ? -1 : 1;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US_REV1)
const unsigned int unbake_rodata_800E1CC0_74[] = {0x00430950U, 0x0043230CU, 0x00430A58U, 0x00431308U, 0x0043230CU, 0x00431F48U, 0x00431604U, 0x0043148CU, 0x004317ACU, 0x0043230CU, 0x004311C4U, 0x00431040U, 0x004319C0U, 0x0043230CU, 0x00430BB4U, 0x00430CF8U, 0x0043230CU, 0x0043230CU, 0x0043230CU, 0x0043230CU, 0x00431FE0U, 0x00431D40U, 0x00432048U, 0x0043210CU, 0x004321B4U, 0x00432214U, 0x00431E64U, 0x0043226CU, 0x004322C0U};
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800E41E4_10[] = {0x80, 0x0D, 0x25, 0x20, 0x80, 0x0D, 0x89, 0x74, 0x80, 0x0D, 0xC8, 0xA8, 0x80, 0x0E, 0x06, 0x64};
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800DEF00_C[] = {0x80, 0x0D, 0x26, 0xA0, 0x80, 0x0D, 0x7D, 0x48, 0x80, 0x0D, 0xBD, 0xC8};
#elif defined(VERSION_DE)
const float unbake_rodata_800DD404_4 = 1024.0f;
const float unbake_rodata_800DD408_4 = 1024.0f;
const float unbake_rodata_800DD40C_4 = 1024.0f;
#endif
