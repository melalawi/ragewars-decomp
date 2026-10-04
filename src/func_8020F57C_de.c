#include "span_1000/code_8020F2A8.h"
#include "types.h"

/** Return whether arg0 is within the range [0xBC4, 0xBCA). */
s32 func_8020F57C_de(s32 arg0) {
    if (arg0 < 0xBCA) {
        if (arg0 >= 0xBC4) {
            return 1;
        }
    }
    return 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C3CCC_4 = 0.5f;
const float unbake_rodata_800C3CD0_4 = 0.100000001f;
const float unbake_rodata_800C3CD4_4 = 0.5f;
const float unbake_rodata_800C3CD8_4 = 0.100000001f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C8D94_4 = 1.0f;
const float unbake_rodata_800C8D98_4 = 0.436332345f;
const float unbake_rodata_800C8D9C_4 = 0.163624629f;
const float unbake_rodata_800C8DA0_4 = 0.375f;
const float unbake_rodata_800C8DA4_4 = 0.436332345f;
const float unbake_rodata_800C8DA8_4 = 0.163624629f;
const float unbake_rodata_800C8DAC_4 = 0.375f;
const float unbake_rodata_800C8DB0_4 = 25.0f;
const float unbake_rodata_800C8DB4_4 = 18.75f;
const float unbake_rodata_800C8DB8_4 = 0.75f;
const float unbake_rodata_800C8DBC_4 = 0.5f;
const float unbake_rodata_800C8DC0_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C3AA0_4 = 0.00787401572f;
const float unbake_rodata_800C3AA4_4 = 3.0f;
const float unbake_rodata_800C3AA8_4 = 1.0f;
const float unbake_rodata_800C3AAC_4 = 0.00872664712f;
const float unbake_rodata_800C3AB0_4 = 6.28318548f;
const float unbake_rodata_800C3AB4_4 = 6.28318548f;
const float unbake_rodata_800C3AB8_4 = 0.0174532942f;
const float unbake_rodata_800C3ABC_4 = 0.0174532942f;
const float unbake_rodata_800C3AC0_4 = 1.0f;
const float unbake_rodata_800C3AC4_4 = 0.200000003f;
const float unbake_rodata_800C3AC8_4 = 10.2399998f;
const float unbake_rodata_800C3ACC_4 = 4.0f;
const float unbake_rodata_800C3AD0_4 = 0.200000003f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C3AA4_4 = 0.0666666701f;
const float unbake_rodata_800C3AA8_4 = 0.0666666701f;
const float unbake_rodata_800C3AAC_4 = (-0.5f);
#elif defined(VERSION_DE)
const float unbake_rodata_800C3C84_4 = 1.0f;
const float unbake_rodata_800C3C88_4 = 1.0f;
const float unbake_rodata_800C3C8C_4 = 1.0f;
const float unbake_rodata_800C3C90_4 = 0.75f;
const float unbake_rodata_800C3C94_4 = 0.5f;
#endif
