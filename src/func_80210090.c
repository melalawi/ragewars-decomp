extern void func_8020FDB0(void *a, int b);

typedef struct func_80210090_S1 func_80210090_S1;
struct func_80210090_S1 {
    char pad0[0x18];
    int unk18;
};

int func_80210090(void *arg0) {
    func_8020FDB0(arg0, ((func_80210090_S1 *)(*(void **)arg0))->unk18 + 0xAC);
    return 1;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C3E9C_4 = 1.26999998f;
const float unbake_rodata_800C3EA0_4 = 2.14748365e+09f;
const float unbake_rodata_800C3EA4_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C8FCC_4 = 127.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C3E18_4 = 0.5f;
const float unbake_rodata_800C3E1C_4 = 0.300000012f;
const float unbake_rodata_800C3E20_4 = (-2.0f);
const float unbake_rodata_800C3E24_4 = (-1.0f);
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C3DD0_4 = 3.40282347e+38f;
const float unbake_rodata_800C3DD4_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C3ED8_4 = 0.5f;
#endif
