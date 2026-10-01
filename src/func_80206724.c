typedef void (*FuncPtr)(void);

typedef struct func_80206724_S1 func_80206724_S1;
typedef struct func_80206724_S2 func_80206724_S2;
struct func_80206724_S1 {
    char pad0[0x30];
    void* unk30;
};
struct func_80206724_S2 {
    char pad0[0x8];
    FuncPtr unk8;
};

void func_80206724(void *arg0, void *arg1) {
    void *obj = ((func_80206724_S1 *)(arg1))->unk30;
    if (obj != 0) {
        FuncPtr fn = ((func_80206724_S2 *)(obj))->unk8;
        if (fn != 0) {
            fn();
        }
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2810_4 = 0.5f;
const float unbake_rodata_800C2814_4 = 0.5f;
const float unbake_rodata_800C2818_4 = 0.75f;
const float unbake_rodata_800C281C_4 = 0.75f;
const float unbake_rodata_800C2820_4 = 0.5f;
const float unbake_rodata_800C2824_4 = 0.75f;
const float unbake_rodata_800C2828_4 = 0.75f;
const float unbake_rodata_800C282C_4 = 0.75f;
const float unbake_rodata_800C2830_4 = 4.0f;
const float unbake_rodata_800C2834_4 = 1.79999995f;
const float unbake_rodata_800C2838_4 = 16.0f;
const float unbake_rodata_800C283C_4 = 0.0174532942f;
const float unbake_rodata_800C2840_4 = 7.5f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C7894_4 = 40.9599991f;
const float unbake_rodata_800C7898_4 = 3.0f;
const float unbake_rodata_800C789C_4 = 0.069813177f;
const float unbake_rodata_800C78A0_4 = 0.069813177f;
const float unbake_rodata_800C78A4_4 = 4.09600019f;
const float unbake_rodata_800C78A8_4 = 4.09600019f;
const float unbake_rodata_800C78AC_4 = 81.9199982f;
const float unbake_rodata_800C78B0_4 = 3.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C283C_4 = 204.799988f;
const float unbake_rodata_800C2840_4 = 0.5f;
const float unbake_rodata_800C2844_4 = 1.0f;
const float unbake_rodata_800C2848_4 = 614.399963f;
const float unbake_rodata_800C284C_4 = 0.5f;
const float unbake_rodata_800C2850_4 = 1.0f;
const float unbake_rodata_800C2854_4 = 70.0f;
const float unbake_rodata_800C2858_4 = 20.0f;
const float unbake_rodata_800C285C_4 = 0.5f;
const float unbake_rodata_800C2860_4 = 1.0f;
#elif defined(VERSION_EU_X)
const unsigned int unbake_rodata_800C26D8_194[] = {0x0021E664U, 0x0021E674U, 0x0021E674U, 0x0021E674U, 0x0021E674U, 0x0021E674U, 0x0021E674U, 0x0021E674U, 0x0021E674U, 0x0021E674U, 0x0021E674U, 0x0021E674U, 0x0021E674U, 0x0021E674U, 0x0021E674U, 0x0021E674U, 0x0021E674U, 0x0021E674U, 0x0021E674U, 0x0021E674U, 0x0021E674U, 0x0021E674U, 0x0021E674U, 0x0021E674U, 0x0021E674U, 0x0021E674U, 0x0021E674U, 0x0021E674U, 0x0021E674U, 0x0021E674U, 0x0021E654U, 0x0021E674U, 0x0021E674U, 0x0021E674U, 0x0021E674U, 0x0021E674U, 0x0021E674U, 0x0021E674U, 0x0021E674U, 0x0021E674U, 0x0021E664U, 0x0021E674U, 0x0021E674U, 0x0021E674U, 0x0021E674U, 0x0021E674U, 0x0021E674U, 0x0021E674U, 0x0021E674U, 0x0021E674U, 0x0021E674U, 0x0021E654U, 0x0021E654U, 0x0021E664U, 0x0021E664U, 0x0021E674U, 0x0021E674U, 0x0021E674U, 0x0021E674U, 0x0021E674U, 0x0021E674U, 0x0021E674U, 0x0021E674U, 0x0021E674U, 0x0021E674U, 0x0021E674U, 0x0021E674U, 0x0021E674U, 0x0021E674U, 0x0021E674U, 0x0021E664U, 0x0021E674U, 0x0021E674U, 0x0021E674U, 0x0021E674U, 0x0021E674U, 0x0021E674U, 0x0021E674U, 0x0021E674U, 0x0021E674U, 0x0021E674U, 0x0021E674U, 0x0021E674U, 0x0021E674U, 0x0021E674U, 0x0021E674U, 0x0021E674U, 0x0021E674U, 0x0021E674U, 0x0021E674U, 0x0021E674U, 0x0021E674U, 0x0021E674U, 0x0021E674U, 0x0021E674U, 0x0021E674U, 0x0021E674U, 0x0021E674U, 0x0021E674U, 0x0021E674U, 0x0021E664U};
const float unbake_rodata_800C286C_4 = 8.0f;
const float unbake_rodata_800C2870_4 = 32.0f;
const float unbake_rodata_800C2874_4 = 16.0f;
const float unbake_rodata_800C2878_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C27D4_4 = 0.25f;
const float unbake_rodata_800C27D8_4 = 1.33333337f;
const float unbake_rodata_800C27DC_4 = 0.00100000005f;
const float unbake_rodata_800C27E0_4 = 1024.0f;
const float unbake_rodata_800C27E4_4 = 0.0009765625f;
const float unbake_rodata_800C27E8_4 = 1.0f;
const float unbake_rodata_800C27EC_4 = 0.0210000016f;
const float unbake_rodata_800C27F0_4 = 0.000100000005f;
const float unbake_rodata_800C27F4_4 = (-51.1999969f);
const float unbake_rodata_800C27F8_4 = 0.785398245f;
const float unbake_rodata_800C27FC_4 = 0.699999988f;
const float unbake_rodata_800C2800_4 = 0.00999999978f;
const float unbake_rodata_800C2804_4 = 40.9599991f;
const float unbake_rodata_800C2808_4 = 40.9599991f;
const float unbake_rodata_800C280C_4 = (-10.2399998f);
const float unbake_rodata_800C2810_4 = 10.2399998f;
const float unbake_rodata_800C2814_4 = 66.5599976f;
const float unbake_rodata_800C2818_4 = 0.042857144f;
const float unbake_rodata_800C281C_4 = 5120.0f;
const float unbake_rodata_800C2820_4 = 100.0f;
const float unbake_rodata_800C2824_4 = 0.400000006f;
const float unbake_rodata_800C2828_4 = 1.0f;
const float unbake_rodata_800C282C_4 = 75.0f;
const float unbake_rodata_800C2830_4 = 15.0f;
const float unbake_rodata_800C2834_4 = 30.0f;
const float unbake_rodata_800C2838_4 = 20.0f;
const float unbake_rodata_800C283C_4 = 75.0f;
const float unbake_rodata_800C2840_4 = 150.0f;
const float unbake_rodata_800C2844_4 = 600.0f;
#endif
