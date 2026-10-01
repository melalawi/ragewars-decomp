typedef struct func_8020999C_S1 func_8020999C_S1;
struct func_8020999C_S1 {
    char pad0[0x300];
    int unk300;
    char pad300[0x304 - 0x300 - sizeof(int)];
    int unk304;
    char pad304[0x308 - 0x304 - sizeof(int)];
    int unk308;
    char pad308[0x30C - 0x308 - sizeof(int)];
    int unk30C;
    char pad30C[0x310 - 0x30C - sizeof(int)];
    int unk310;
};

/** Clear five consecutive object words beginning at offset 0x300. */
void func_8020999C(void *arg0) {
    ((func_8020999C_S1 *)(arg0))->unk300 = 0;
    ((func_8020999C_S1 *)(arg0))->unk304 = 0;
    ((func_8020999C_S1 *)(arg0))->unk308 = 0;
    ((func_8020999C_S1 *)(arg0))->unk30C = 0;
    ((func_8020999C_S1 *)(arg0))->unk310 = 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C3328_4 = 9.0f;
const float unbake_rodata_800C332C_4 = 0.810000002f;
const float unbake_rodata_800C3330_4 = 1.0f;
const float unbake_rodata_800C3334_4 = 1.57079637f;
const float unbake_rodata_800C3338_4 = 255.0f;
const float unbake_rodata_800C333C_4 = 1.0f;
const float unbake_rodata_800C3340_4 = 0.0666666701f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C8410_4 = 0.5f;
#elif defined(VERSION_EU)
const double unbake_rodata_800C3368_8 = 4294967296.0;
const float unbake_rodata_800C3370_4 = 4.0f;
const float unbake_rodata_800C3374_4 = 0.0174532942f;
const float unbake_rodata_800C3378_4 = 16.0f;
const float unbake_rodata_800C337C_4 = 2.14748365e+09f;
const float unbake_rodata_800C3380_4 = 1.0f;
const float unbake_rodata_800C3384_4 = 64.0f;
const float unbake_rodata_800C3388_4 = 48.0f;
const float unbake_rodata_800C338C_4 = 255.0f;
const float unbake_rodata_800C3390_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C339C_4 = 2.14748365e+09f;
const float unbake_rodata_800C33A0_4 = 2.14748365e+09f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C3320_4 = 0.5f;
#endif
