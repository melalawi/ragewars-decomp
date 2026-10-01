typedef struct func_8023E844_S1 func_8023E844_S1;
struct func_8023E844_S1 {
    char pad0[0x18C];
    int unk18C;
    char pad18C[0x190 - 0x18C - sizeof(int)];
    int unk190;
    char pad190[0x194 - 0x190 - sizeof(int)];
    int unk194;
};

void func_8023E844(void *arg0) {
    ((func_8023E844_S1 *)(arg0))->unk18C = 0;
    ((func_8023E844_S1 *)(arg0))->unk190 = 0;
    ((func_8023E844_S1 *)(arg0))->unk194 = 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned int unbake_rodata_800DC7F0_14[] = {0x0042E49CU, 0x0042E4E0U, 0x0042E53CU, 0x0042E594U, 0x0042E50CU};
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800E19E4_4 = 255.0f;
const float unbake_rodata_800E19E8_4 = 4.0f;
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800E2F84_10[] = {0x80, 0x0D, 0x0F, 0xC0, 0x80, 0x0D, 0x6C, 0x58, 0x80, 0x0D, 0xB3, 0x48, 0x80, 0x0D, 0xF1, 0x04};
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800DE03C_C[] = {0x80, 0x0D, 0x16, 0x94, 0x80, 0x0D, 0x69, 0x7C, 0x80, 0x0D, 0xAD, 0xB8};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800DCD60_12[] = {0x53, 0x69, 0x6E, 0x67, 0x6C, 0x65, 0x20, 0x53, 0x61, 0x76, 0x65, 0x20, 0x42, 0x6C, 0x6F, 0x63, 0x6B, 0x00};
#endif
