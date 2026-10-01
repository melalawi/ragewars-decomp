extern void *D_800E2830;
extern void func_802A125C(void *arg0, int arg1);

typedef struct func_80245A68_S1 func_80245A68_S1;
struct func_80245A68_S1 {
    char pad0[0x1E0];
    int unk1E0;
};

void func_80245A68(int arg0) {
    void *record = D_800E2830;
    int idx = ((func_80245A68_S1 *)(record))->unk1E0;
    func_802A125C((char *)record + ((idx * 0x28) + 0x118), arg0);
    record = D_800E2830;
    ((func_80245A68_S1 *)(record))->unk1E0 = ((func_80245A68_S1 *)(record))->unk1E0 + 1;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800DE38C_64[] = {0x00, 0x41, 0xD1, 0xA4, 0x00, 0x00, 0x0E, 0x07, 0x00, 0x00, 0x00, 0x10, 0x00, 0x41, 0xDC, 0x3C, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x00, 0x10, 0x00, 0x41, 0xDE, 0x64, 0x00, 0x00, 0x0E, 0x0A, 0x00, 0x00, 0x00, 0x10, 0x00, 0x41, 0xDD, 0x30, 0x00, 0x00, 0x0E, 0x06, 0x00, 0x00, 0x00, 0x10, 0x00, 0x41, 0xCE, 0xB0, 0x00, 0x00, 0x0E, 0x03, 0x00, 0x00, 0x00, 0x10, 0x00, 0x41, 0xDC, 0x0C, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x10, 0x00, 0x41, 0xDE, 0xCC, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x10, 0x00, 0x41, 0xDF, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800E3368_28[] = {0x00, 0x41, 0xA5, 0xB0, 0x00, 0x00, 0x0E, 0x08, 0x00, 0x00, 0x75, 0x30, 0x00, 0x41, 0xA0, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0x0B, 0xE8, 0x00, 0x00, 0x0E, 0x0A, 0x00, 0x00, 0x00, 0x07};
#elif defined(VERSION_EU)
const float unbake_rodata_800EDB08_4 = 0.0174532942f;
const float unbake_rodata_800EDB0C_4 = 0.0174532942f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800E8BA0_4 = 1.0f;
const float unbake_rodata_800E8BA4_4 = 2.14748365e+09f;
const float unbake_rodata_800E8BA8_4 = 2.14748365e+09f;
const float unbake_rodata_800E8BAC_4 = 2.14748365e+09f;
const float unbake_rodata_800E8BB0_4 = 2.14748365e+09f;
const float unbake_rodata_800E8BB4_4 = 2.14748365e+09f;
const float unbake_rodata_800E8BB8_4 = 2.14748365e+09f;
const float unbake_rodata_800E8BBC_4 = 2.14748365e+09f;
const float unbake_rodata_800E8BC0_4 = 2.14748365e+09f;
const float unbake_rodata_800E8BC4_4 = 2.14748365e+09f;
const float unbake_rodata_800E8BC8_4 = 2.14748365e+09f;
const float unbake_rodata_800E8BCC_4 = 2.14748365e+09f;
const float unbake_rodata_800E8BD0_4 = 2.14748365e+09f;
const float unbake_rodata_800E8BD4_4 = 2.14748365e+09f;
const float unbake_rodata_800E8BD8_4 = 2.14748365e+09f;
const float unbake_rodata_800E8BDC_4 = 2.14748365e+09f;
const float unbake_rodata_800E8BE0_4 = 2.14748365e+09f;
const float unbake_rodata_800E8BE4_4 = 2.14748365e+09f;
const float unbake_rodata_800E8BE8_4 = 2.14748365e+09f;
const float unbake_rodata_800E8BEC_4 = 2.14748365e+09f;
const float unbake_rodata_800E8BF0_4 = 2.14748365e+09f;
const float unbake_rodata_800E8BF4_4 = 2.14748365e+09f;
const float unbake_rodata_800E8BF8_4 = 2.14748365e+09f;
const float unbake_rodata_800E8BFC_4 = 2.14748365e+09f;
const float unbake_rodata_800E8C00_4 = 2.14748365e+09f;
const float unbake_rodata_800E8C04_4 = 2.14748365e+09f;
const float unbake_rodata_800E8C08_4 = 2.14748365e+09f;
const float unbake_rodata_800E8C0C_4 = 2.14748365e+09f;
const float unbake_rodata_800E8C10_4 = 2.14748365e+09f;
const float unbake_rodata_800E8C14_4 = 2.14748365e+09f;
const float unbake_rodata_800E8C18_4 = 2.14748365e+09f;
const float unbake_rodata_800E8C1C_4 = 2.14748365e+09f;
const float unbake_rodata_800E8C20_4 = 2.14748365e+09f;
const float unbake_rodata_800E8C24_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800DDF40_4 = 0.00499999989f;
const float unbake_rodata_800DDF44_4 = 100.0f;
const float unbake_rodata_800DDF48_4 = 150.0f;
const float unbake_rodata_800DDF4C_4 = 2.14748365e+09f;
#endif
