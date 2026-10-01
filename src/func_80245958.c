/* Returns the globally selected record's word at 0xA8 while its word at 0x38 is non-zero, and 0
   otherwise. */
extern void *D_800E2830;

typedef struct func_80245958_S1 func_80245958_S1;
struct func_80245958_S1 {
    char pad0[0x38];
    int unk38;
    char pad38[0xA8 - 0x38 - sizeof(int)];
    int unkA8;
};

int func_80245958(void) {
    void *record = D_800E2830;
    int cond = ((func_80245958_S1 *)(record))->unk38 != 0;
    if (cond) {
        if (record) {
            return ((func_80245958_S1 *)(record))->unkA8;
        } else {
            return ((func_80245958_S1 *)(record))->unkA8;
        }
    }
    return 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800DDFC8_28[] = {0x00, 0x41, 0xA5, 0xB0, 0x00, 0x00, 0x0E, 0x08, 0x00, 0x00, 0x75, 0x30, 0x00, 0x41, 0xA0, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x0B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1D, 0x47};
#elif defined(VERSION_US_REV1)
const unsigned int unbake_rodata_800E27A0_20[] = {0x00444284U, 0x004442B8U, 0x004442ECU, 0x00444320U, 0x0044434CU, 0x0044434CU, 0x0044434CU, 0x0044434CU};
#elif defined(VERSION_EU)
const float unbake_rodata_800ED9E0_4 = 1.0f;
const float unbake_rodata_800ED9E4_4 = 2.14748365e+09f;
const float unbake_rodata_800ED9E8_4 = 2.14748365e+09f;
const float unbake_rodata_800ED9EC_4 = 2.14748365e+09f;
const float unbake_rodata_800ED9F0_4 = 2.14748365e+09f;
const float unbake_rodata_800ED9F4_4 = 2.14748365e+09f;
const float unbake_rodata_800ED9F8_4 = 2.14748365e+09f;
const float unbake_rodata_800ED9FC_4 = 2.14748365e+09f;
const float unbake_rodata_800EDA00_4 = 2.14748365e+09f;
const float unbake_rodata_800EDA04_4 = 2.14748365e+09f;
const float unbake_rodata_800EDA08_4 = 2.14748365e+09f;
const float unbake_rodata_800EDA0C_4 = 2.14748365e+09f;
const float unbake_rodata_800EDA10_4 = 2.14748365e+09f;
const float unbake_rodata_800EDA14_4 = 2.14748365e+09f;
const float unbake_rodata_800EDA18_4 = 2.14748365e+09f;
const float unbake_rodata_800EDA1C_4 = 2.14748365e+09f;
const float unbake_rodata_800EDA20_4 = 2.14748365e+09f;
const float unbake_rodata_800EDA24_4 = 2.14748365e+09f;
const float unbake_rodata_800EDA28_4 = 2.14748365e+09f;
const float unbake_rodata_800EDA2C_4 = 2.14748365e+09f;
const float unbake_rodata_800EDA30_4 = 2.14748365e+09f;
const float unbake_rodata_800EDA34_4 = 2.14748365e+09f;
const float unbake_rodata_800EDA38_4 = 2.14748365e+09f;
const float unbake_rodata_800EDA3C_4 = 2.14748365e+09f;
const float unbake_rodata_800EDA40_4 = 2.14748365e+09f;
const float unbake_rodata_800EDA44_4 = 2.14748365e+09f;
const float unbake_rodata_800EDA48_4 = 2.14748365e+09f;
const float unbake_rodata_800EDA4C_4 = 2.14748365e+09f;
const float unbake_rodata_800EDA50_4 = 2.14748365e+09f;
const float unbake_rodata_800EDA54_4 = 2.14748365e+09f;
const float unbake_rodata_800EDA58_4 = 2.14748365e+09f;
const float unbake_rodata_800EDA5C_4 = 2.14748365e+09f;
const float unbake_rodata_800EDA60_4 = 2.14748365e+09f;
const float unbake_rodata_800EDA64_4 = 1.0f;
#elif defined(VERSION_EU_X)
const unsigned int unbake_rodata_800E88A8_18[] = {0x0040BFA8U, 0x0040BFD8U, 0x0040BFD8U, 0x0040BFB8U, 0x0040BFC8U, 0x0043D414U};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800DDEB0_3[] = {0x25, 0x64, 0x00};
const unsigned char unbake_rodata_800DDEB4_9[] = {0x25, 0x64, 0x2E, 0x25, 0x73, 0x2E, 0x25, 0x73, 0x00};
const unsigned char unbake_rodata_800DDEC0_6[] = {0x25, 0x64, 0x2E, 0x25, 0x73, 0x00};
#endif
