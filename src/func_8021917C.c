#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
s32 func_8021917C(void *arg0, void *arg1) {
    if (((*(s32 *)((s8 *)((*(void **)((s8 *)(arg1) + (0x698)))) + (0xB0))) & 0x8000) && ((*(u8 *)((s8 *)((*(void **)((s8 *)(arg1) + (0x5D8)))) + (0x92))) != 0xFF)) {
        (*(s32 *)((s8 *)(arg0) + (0x6C))) = -1;
        return 1;
    }
    return 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C4CA8_4 = 128.0f;
const float unbake_rodata_800C4CAC_4 = 255.0f;
const float unbake_rodata_800C4CB0_4 = 128.0f;
const float unbake_rodata_800C4CB4_4 = 255.0f;
const float unbake_rodata_800C4CB8_4 = 1.0f;
const float unbake_rodata_800C4CBC_4 = 2.14748365e+09f;
const float unbake_rodata_800C4CC0_4 = 255.0f;
const float unbake_rodata_800C4CC4_4 = 2.14748365e+09f;
const float unbake_rodata_800C4CC8_4 = 255.0f;
const float unbake_rodata_800C4CCC_4 = 2.14748365e+09f;
const float unbake_rodata_800C4CD0_4 = 255.0f;
const float unbake_rodata_800C4CD4_4 = 2.14748365e+09f;
const float unbake_rodata_800C4CD8_4 = 255.0f;
const float unbake_rodata_800C4CDC_4 = 2.14748365e+09f;
const float unbake_rodata_800C4CE0_4 = 255.0f;
const float unbake_rodata_800C4CE4_4 = 2.14748365e+09f;
const unsigned int unbake_rodata_800C4CE8_18[] = {0x0027F490U, 0x0027F4BCU, 0x0027F4D4U, 0x0027F50CU, 0x0027F568U, 0x0027F5A8U};
const float unbake_rodata_800C4D00_4 = 255.0f;
const float unbake_rodata_800C4D04_4 = 1.0f;
const float unbake_rodata_800C4D08_4 = 1.0f;
const float unbake_rodata_800C4D0C_4 = (-9.99999975e-05f);
const float unbake_rodata_800C4D10_4 = 9.99999975e-05f;
const float unbake_rodata_800C4D14_4 = 10.0f;
const float unbake_rodata_800C4D18_4 = 1.0f;
const float unbake_rodata_800C4D1C_4 = 5.0f;
const float unbake_rodata_800C4D20_4 = 1.0f;
const float unbake_rodata_800C4D24_4 = 0.5f;
const float unbake_rodata_800C4D28_4 = 2.14748365e+09f;
const float unbake_rodata_800C4D2C_4 = 2.14748365e+09f;
const float unbake_rodata_800C4D30_4 = 2.14748365e+09f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C9E68_4 = 128.0f;
const float unbake_rodata_800C9E6C_4 = 255.0f;
const float unbake_rodata_800C9E70_4 = 128.0f;
const float unbake_rodata_800C9E74_4 = 255.0f;
const float unbake_rodata_800C9E78_4 = 1.0f;
const float unbake_rodata_800C9E7C_4 = 2.14748365e+09f;
const float unbake_rodata_800C9E80_4 = 255.0f;
const float unbake_rodata_800C9E84_4 = 2.14748365e+09f;
const float unbake_rodata_800C9E88_4 = 255.0f;
const float unbake_rodata_800C9E8C_4 = 2.14748365e+09f;
const float unbake_rodata_800C9E90_4 = 255.0f;
const float unbake_rodata_800C9E94_4 = 2.14748365e+09f;
const float unbake_rodata_800C9E98_4 = 255.0f;
const float unbake_rodata_800C9E9C_4 = 2.14748365e+09f;
const float unbake_rodata_800C9EA0_4 = 255.0f;
const float unbake_rodata_800C9EA4_4 = 2.14748365e+09f;
const unsigned int unbake_rodata_800C9EA8_18[] = {0x0027F510U, 0x0027F53CU, 0x0027F554U, 0x0027F58CU, 0x0027F5E8U, 0x0027F628U};
const float unbake_rodata_800C9EC0_4 = 255.0f;
const float unbake_rodata_800C9EC4_4 = 1.0f;
const float unbake_rodata_800C9EC8_4 = 1.0f;
const float unbake_rodata_800C9ECC_4 = (-9.99999975e-05f);
const float unbake_rodata_800C9ED0_4 = 9.99999975e-05f;
const float unbake_rodata_800C9ED4_4 = 10.0f;
const float unbake_rodata_800C9ED8_4 = 1.0f;
const float unbake_rodata_800C9EDC_4 = 5.0f;
const float unbake_rodata_800C9EE0_4 = 1.0f;
const float unbake_rodata_800C9EE4_4 = 0.5f;
const float unbake_rodata_800C9EE8_4 = 2.14748365e+09f;
const float unbake_rodata_800C9EEC_4 = 2.14748365e+09f;
const float unbake_rodata_800C9EF0_4 = 2.14748365e+09f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C4CF0_4 = 0.00999999978f;
const float unbake_rodata_800C4CF4_4 = 2.14748365e+09f;
const float unbake_rodata_800C4CF8_4 = 0.00999999978f;
const float unbake_rodata_800C4CFC_4 = 2.14748365e+09f;
const float unbake_rodata_800C4D00_4 = 0.00999999978f;
const float unbake_rodata_800C4D04_4 = 2.14748365e+09f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C4D00_4 = 0.0117647061f;
const float unbake_rodata_800C4D04_4 = 0.0117647061f;
const float unbake_rodata_800C4D08_4 = 0.0117647061f;
const float unbake_rodata_800C4D0C_4 = 2.14748365e+09f;
const float unbake_rodata_800C4D10_4 = 2.14748365e+09f;
const float unbake_rodata_800C4D14_4 = 2.14748365e+09f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C4BF8_4 = 0.25f;
const float unbake_rodata_800C4BFC_4 = 1.41421354f;
const float unbake_rodata_800C4C00_4 = 0.5f;
const float unbake_rodata_800C4C04_4 = 32.0f;
const float unbake_rodata_800C4C08_4 = 6.0f;
const float unbake_rodata_800C4C0C_4 = 32.0f;
const float unbake_rodata_800C4C10_4 = 0.0174532942f;
const float unbake_rodata_800C4C14_4 = 0.0666666701f;
const float unbake_rodata_800C4C18_4 = 10.2399998f;
const float unbake_rodata_800C4C1C_4 = 4096.0f;
const float unbake_rodata_800C4C20_4 = 400.0f;
const float unbake_rodata_800C4C24_4 = 4096.0f;
const float unbake_rodata_800C4C28_4 = 400.0f;
const float unbake_rodata_800C4C2C_4 = 10.2399998f;
const float unbake_rodata_800C4C30_4 = 0.5f;
const float unbake_rodata_800C4C34_4 = 0.00100000005f;
#endif
