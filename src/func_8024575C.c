typedef struct func_8024575C_S1 func_8024575C_S1;
struct func_8024575C_S1 {
    char pad0[0xDC];
    int unkDC;
};

extern func_8024575C_S1 *D_800E2830;
int func_8024575C(void) {
    return D_800E2830->unkDC != -1;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const double unbake_rodata_800DD370_8 = 4294967296.0;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800E24E4_4 = 0.5f;
const float unbake_rodata_800E24E8_4 = 2.14748365e+09f;
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800ED400_4[] = {0x25, 0x32, 0x64, 0x00};
#elif defined(VERSION_EU_X)
const float unbake_rodata_800E84B0_4 = (-10000.0f);
const float unbake_rodata_800E84B4_4 = (-20000.0f);
#elif defined(VERSION_DE)
const float unbake_rodata_800DDB0C_4 = 150.0f;
const float unbake_rodata_800DDB10_4 = 255.0f;
#endif
