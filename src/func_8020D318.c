typedef struct func_8020D318_S1 func_8020D318_S1;
struct func_8020D318_S1 {
    char pad0[0x28];
    unsigned int unk28;
};

/** Report whether the word at object offset 0x28 equals two. */
int func_8020D318(void *arg0) {
    return ((func_8020D318_S1 *)(arg0))->unk28 == 2;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C3720_4 = 0.00787401572f;
const float unbake_rodata_800C3724_4 = 3.0f;
const float unbake_rodata_800C3728_4 = 1.0f;
const float unbake_rodata_800C372C_4 = 0.00872664712f;
const float unbake_rodata_800C3730_4 = 6.28318548f;
const float unbake_rodata_800C3734_4 = 6.28318548f;
const float unbake_rodata_800C3738_4 = 0.0174532942f;
const float unbake_rodata_800C373C_4 = 0.0174532942f;
const float unbake_rodata_800C3740_4 = 1.0f;
const float unbake_rodata_800C3744_4 = 0.200000003f;
const float unbake_rodata_800C3748_4 = 10.2399998f;
const float unbake_rodata_800C374C_4 = 4.0f;
const float unbake_rodata_800C3750_4 = 0.200000003f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C8840_4 = 0.5f;
const float unbake_rodata_800C8844_4 = 0.5f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C3860_4 = 768.0f;
const float unbake_rodata_800C3864_4 = 5120.0f;
const float unbake_rodata_800C3868_4 = 10240.0f;
const float unbake_rodata_800C386C_4 = 0.25f;
const float unbake_rodata_800C3870_4 = 0.75f;
const float unbake_rodata_800C3874_4 = 1.0f;
const float unbake_rodata_800C3878_4 = 0.5f;
const float unbake_rodata_800C387C_4 = 16384.0f;
const float unbake_rodata_800C3880_4 = 2.14748365e+09f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C3894_4 = 1.0f;
const float unbake_rodata_800C3898_4 = 15.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C3750_4 = 0.5f;
const float unbake_rodata_800C3754_4 = 0.5f;
#endif
