typedef void (*FuncPtr)(void);

typedef struct func_802171FC_S1 func_802171FC_S1;
struct func_802171FC_S1 {
    char pad0[0x110];
    FuncPtr unk110;
};

void func_802171FC(void *arg0, void *arg1) {
    FuncPtr fn = ((func_802171FC_S1 *)(arg1))->unk110;
    if (fn != 0) {
        fn();
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C4970_4 = 0.00999999978f;
const float unbake_rodata_800C4974_4 = 2.14748365e+09f;
const float unbake_rodata_800C4978_4 = 0.00999999978f;
const float unbake_rodata_800C497C_4 = 2.14748365e+09f;
const float unbake_rodata_800C4980_4 = 0.00999999978f;
const float unbake_rodata_800C4984_4 = 2.14748365e+09f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C9B30_4 = 0.00999999978f;
const float unbake_rodata_800C9B34_4 = 2.14748365e+09f;
const float unbake_rodata_800C9B38_4 = 0.00999999978f;
const float unbake_rodata_800C9B3C_4 = 2.14748365e+09f;
const float unbake_rodata_800C9B40_4 = 0.00999999978f;
const float unbake_rodata_800C9B44_4 = 2.14748365e+09f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C4728_4 = 1.0f;
const float unbake_rodata_800C472C_4 = 2.5f;
const float unbake_rodata_800C4730_4 = 0.349999994f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C46B0_4 = 1.0f;
const float unbake_rodata_800C46B4_4 = 20.0f;
const float unbake_rodata_800C46B8_4 = 1.0f;
const float unbake_rodata_800C46BC_4 = 10.0f;
const float unbake_rodata_800C46C0_4 = 12.0f;
const float unbake_rodata_800C46C4_4 = 10.2399998f;
const float unbake_rodata_800C46C8_4 = 1.0f;
const float unbake_rodata_800C46CC_4 = 0.5f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C49CC_4 = 1.0f;
const float unbake_rodata_800C49D0_4 = 1.0f;
const float unbake_rodata_800C49D4_4 = 1.0f;
const float unbake_rodata_800C49D8_4 = 0.5f;
#endif
