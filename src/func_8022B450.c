typedef struct func_8022B450_S1 func_8022B450_S1;
struct func_8022B450_S1 {
    char pad0[0x11FC];
    float unk11FC;
};

/** Report whether the floating field at offset 0x11FC is positive. */
int func_8022B450(char *object) {
    return ((func_8022B450_S1 *)(object))->unk11FC > 0.0f;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C5E00_4 = 255.0f;
const float unbake_rodata_800C5E04_4 = 0.100000001f;
const float unbake_rodata_800C5E08_4 = 0.25f;
const float unbake_rodata_800C5E0C_4 = 0.75f;
const float unbake_rodata_800C5E10_4 = 0.00156250002f;
const float unbake_rodata_800C5E14_4 = 0.5f;
const float unbake_rodata_800C5E18_4 = 0.00208333344f;
const float unbake_rodata_800C5E1C_4 = 2.14748365e+09f;
const float unbake_rodata_800C5E20_4 = 0.5f;
const float unbake_rodata_800C5E24_4 = 2.14748365e+09f;
const float unbake_rodata_800C5E28_4 = 0.00312500005f;
const float unbake_rodata_800C5E2C_4 = 0.00416666688f;
const float unbake_rodata_800C5E30_4 = 0.25f;
const float unbake_rodata_800C5E34_4 = (-0.75f);
const float unbake_rodata_800C5E38_4 = (-0.5f);
const float unbake_rodata_800C5E3C_4 = 0.00390625f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CB0B0_4 = 1.0f;
const float unbake_rodata_800CB0B4_4 = 0.75f;
const float unbake_rodata_800CB0B8_4 = 9.0f;
const float unbake_rodata_800CB0BC_4 = 15.0f;
const float unbake_rodata_800CB0C0_4 = 27.0f;
const float unbake_rodata_800CB0C4_4 = 1.5f;
const float unbake_rodata_800CB0C8_4 = 1.0f;
const float unbake_rodata_800CB0CC_4 = 0.400000006f;
const float unbake_rodata_800CB0D0_4 = 0.400000006f;
const float unbake_rodata_800CB0D4_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C5D30_4 = 1.0f;
const float unbake_rodata_800C5D34_4 = 1.0f;
const float unbake_rodata_800C5D38_4 = 1.0f;
const float unbake_rodata_800C5D3C_4 = 1.0f;
const float unbake_rodata_800C5D40_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C5CF0_4 = (-9.99999997e-07f);
const float unbake_rodata_800C5CF4_4 = 9.99999997e-07f;
const float unbake_rodata_800C5CF8_4 = (-9.99999997e-07f);
const float unbake_rodata_800C5CFC_4 = 9.99999997e-07f;
const float unbake_rodata_800C5D00_4 = 1.57079637f;
const float unbake_rodata_800C5D04_4 = (-1.57079637f);
const float unbake_rodata_800C5D08_4 = 3.14159274f;
const float unbake_rodata_800C5D0C_4 = 9.99999997e-07f;
const float unbake_rodata_800C5D10_4 = 1.0f;
const float unbake_rodata_800C5D14_4 = (-0.00405405788f);
const float unbake_rodata_800C5D18_4 = 0.0218612291f;
const float unbake_rodata_800C5D1C_4 = 0.055909887f;
const float unbake_rodata_800C5D20_4 = 0.0964200422f;
const float unbake_rodata_800C5D24_4 = 0.139085338f;
const float unbake_rodata_800C5D28_4 = 0.199465364f;
const float unbake_rodata_800C5D2C_4 = 0.333298564f;
const float unbake_rodata_800C5D30_4 = 0.999999344f;
const float unbake_rodata_800C5D34_4 = 0.785398185f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C5E08_4 = 3.125f;
#endif
