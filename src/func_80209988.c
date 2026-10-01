typedef struct func_80209988_S1 func_80209988_S1;
struct func_80209988_S1 {
    char pad0[0x2F4];
    int unk2F4;
    char pad2F4[0x2F8 - 0x2F4 - sizeof(int)];
    int unk2F8;
    char pad2F8[0x2FC - 0x2F8 - sizeof(int)];
    int unk2FC;
};

/** Reset three state words and set the final state to one. */
void func_80209988(void *arg0) {
    ((func_80209988_S1 *)(arg0))->unk2F4 = 0;
    ((func_80209988_S1 *)(arg0))->unk2F8 = 0;
    ((func_80209988_S1 *)(arg0))->unk2FC = 1;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C3320_4 = 1.0f;
const float unbake_rodata_800C3324_4 = 15.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C83E0_4 = 16.0f;
const float unbake_rodata_800C83E4_4 = 30.0f;
const float unbake_rodata_800C83E8_4 = 30.0f;
const float unbake_rodata_800C83EC_4 = 16.0f;
const float unbake_rodata_800C83F0_4 = 30.0f;
const float unbake_rodata_800C83F4_4 = 30.0f;
const float unbake_rodata_800C83F8_4 = 16.0f;
const float unbake_rodata_800C83FC_4 = 30.0f;
const float unbake_rodata_800C8400_4 = 30.0f;
const float unbake_rodata_800C8404_4 = 16.0f;
const float unbake_rodata_800C8408_4 = 30.0f;
const float unbake_rodata_800C840C_4 = 30.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C335C_4 = 2.14748365e+09f;
const float unbake_rodata_800C3360_4 = 2.14748365e+09f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C3390_4 = 1.0f;
const float unbake_rodata_800C3394_4 = 1024.0f;
const float unbake_rodata_800C3398_4 = 47.5f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C32F0_4 = 16.0f;
const float unbake_rodata_800C32F4_4 = 30.0f;
const float unbake_rodata_800C32F8_4 = 30.0f;
const float unbake_rodata_800C32FC_4 = 16.0f;
const float unbake_rodata_800C3300_4 = 30.0f;
const float unbake_rodata_800C3304_4 = 30.0f;
const float unbake_rodata_800C3308_4 = 16.0f;
const float unbake_rodata_800C330C_4 = 30.0f;
const float unbake_rodata_800C3310_4 = 30.0f;
const float unbake_rodata_800C3314_4 = 16.0f;
const float unbake_rodata_800C3318_4 = 30.0f;
const float unbake_rodata_800C331C_4 = 30.0f;
#endif
