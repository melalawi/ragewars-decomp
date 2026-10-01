typedef struct func_80207FC4_S1 func_80207FC4_S1;
struct func_80207FC4_S1 {
    char pad0[0x100];
    unsigned int unk100;
};

/** Set the fixed flags on the supplied object and word. */
void func_80207FC4(char *object, unsigned int *flags) {
    *flags |= 0x20000;
    ((func_80207FC4_S1 *)(object))->unk100 |= 0x2100;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C3128_4 = 0.5f;
const float unbake_rodata_800C312C_4 = 0.5f;
#elif defined(VERSION_US_REV1)
const double unbake_rodata_800C81E8_8 = 4294967296.0;
const double unbake_rodata_800C81F0_8 = 4294967296.0;
const float unbake_rodata_800C81F8_4 = 120.0f;
const float unbake_rodata_800C81FC_4 = 2.14748365e+09f;
const float unbake_rodata_800C8200_4 = 2.14748365e+09f;
const float unbake_rodata_800C8204_4 = 2.14748365e+09f;
const double unbake_rodata_800C8208_8 = 4294967296.0;
const float unbake_rodata_800C8210_4 = 0.069813177f;
const float unbake_rodata_800C8214_4 = 64.0f;
const float unbake_rodata_800C8218_4 = 128.0f;
const float unbake_rodata_800C821C_4 = 2.14748365e+09f;
const double unbake_rodata_800C8220_8 = 4294967296.0;
const float unbake_rodata_800C8228_4 = 0.209439531f;
const float unbake_rodata_800C822C_4 = 64.0f;
const float unbake_rodata_800C8230_4 = 128.0f;
const float unbake_rodata_800C8234_4 = 2.14748365e+09f;
const double unbake_rodata_800C8238_8 = 4294967296.0;
const float unbake_rodata_800C8240_4 = 0.279252708f;
const float unbake_rodata_800C8244_4 = 64.0f;
const float unbake_rodata_800C8248_4 = 128.0f;
const float unbake_rodata_800C824C_4 = 2.14748365e+09f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C3248_4 = 1.0f;
const float unbake_rodata_800C324C_4 = 1.0f;
const float unbake_rodata_800C3250_4 = 1.0f;
const float unbake_rodata_800C3254_4 = 0.5f;
const float unbake_rodata_800C3258_4 = 2.0f;
const float unbake_rodata_800C325C_4 = 0.0500000007f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C3240_4 = 1.0f;
const float unbake_rodata_800C3244_4 = 1.0f;
const float unbake_rodata_800C3248_4 = 1.0f;
#elif defined(VERSION_DE)
const double unbake_rodata_800C30F8_8 = 4294967296.0;
const double unbake_rodata_800C3100_8 = 4294967296.0;
const float unbake_rodata_800C3108_4 = 120.0f;
const float unbake_rodata_800C310C_4 = 2.14748365e+09f;
const float unbake_rodata_800C3110_4 = 2.14748365e+09f;
const float unbake_rodata_800C3114_4 = 2.14748365e+09f;
const double unbake_rodata_800C3118_8 = 4294967296.0;
const float unbake_rodata_800C3120_4 = 0.069813177f;
const float unbake_rodata_800C3124_4 = 64.0f;
const float unbake_rodata_800C3128_4 = 128.0f;
const float unbake_rodata_800C312C_4 = 2.14748365e+09f;
const double unbake_rodata_800C3130_8 = 4294967296.0;
const float unbake_rodata_800C3138_4 = 0.209439531f;
const float unbake_rodata_800C313C_4 = 64.0f;
const float unbake_rodata_800C3140_4 = 128.0f;
const float unbake_rodata_800C3144_4 = 2.14748365e+09f;
const double unbake_rodata_800C3148_8 = 4294967296.0;
const float unbake_rodata_800C3150_4 = 0.279252708f;
const float unbake_rodata_800C3154_4 = 64.0f;
const float unbake_rodata_800C3158_4 = 128.0f;
const float unbake_rodata_800C315C_4 = 2.14748365e+09f;
#endif
