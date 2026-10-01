/** Read the word at offset 0x38 from the globally selected record. */
extern void *D_800E2830;

typedef struct func_80245774_S1 func_80245774_S1;
struct func_80245774_S1 {
    char pad0[0x38];
    int unk38;
};

int func_80245774(void) {
    void *record = D_800E2830;
    return ((func_80245774_S1 *)(record))->unk38;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned int unbake_rodata_800DD378_24[] = {0x0044316CU, 0x00443194U, 0x00443194U, 0x00443174U, 0x00443184U, 0x00443194U, 0x004431A4U, 0x004431E4U, 0x00443224U};
const float unbake_rodata_800DD39C_4 = 2.14748365e+09f;
const float unbake_rodata_800DD3A0_4 = 2.14748365e+09f;
const float unbake_rodata_800DD3A4_4 = 2.14748365e+09f;
#elif defined(VERSION_US_REV1)
const double unbake_rodata_800E24F0_8 = 4294967296.0;
const float unbake_rodata_800E24F8_4 = 0.0174532942f;
const float unbake_rodata_800E24FC_4 = 1.0f;
const float unbake_rodata_800E2500_4 = 50.0f;
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800ED404_E[] = {0x25, 0x33, 0x64, 0x2E, 0x25, 0x30, 0x32, 0x64, 0x2E, 0x25, 0x30, 0x32, 0x64, 0x00};
#elif defined(VERSION_EU_X)
const float unbake_rodata_800E84B8_4 = 10.0f;
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800DDB30_3[] = {0x25, 0x64, 0x00};
#endif
