extern void func_80214178(void *a, void *b, int c);

typedef struct func_80207E74_S1 func_80207E74_S1;
struct func_80207E74_S1 {
    char pad0[0x100];
    int unk100;
};

void func_80207E74(void *arg0, int *arg1) {
    ((func_80207E74_S1 *)(arg0))->unk100 |= 0x2100;
    *arg1 |= 0x20000;
    func_80214178(arg0, arg1, 3);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2FDC_4 = 2.14748365e+09f;
const float unbake_rodata_800C2FE0_4 = 2.14748365e+09f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C8040_4 = 1.0f;
const float unbake_rodata_800C8044_4 = 1.0f;
const float unbake_rodata_800C8048_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C2FC4_4 = 300.0f;
const float unbake_rodata_800C2FC8_4 = 22.5f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C2FD4_4 = 285.0f;
const float unbake_rodata_800C2FD8_4 = 0.0666666701f;
const float unbake_rodata_800C2FDC_4 = 1.0f;
const float unbake_rodata_800C2FE0_4 = 1.0f;
const float unbake_rodata_800C2FE4_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C2F50_4 = 1.0f;
const float unbake_rodata_800C2F54_4 = 1.0f;
const float unbake_rodata_800C2F58_4 = 1.0f;
#endif
