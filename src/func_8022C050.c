#include "basetypes.h"

extern void func_8022BEF4(s32 arg0, s32 arg1, s32 arg2, s32 arg3);

void func_8022C050(s32 arg0, s32 arg1) {
    func_8022BEF4(arg0, arg1, 5, 0x1B);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const double unbake_rodata_800C7258_8 = 4294967296.0;
const float unbake_rodata_800C7260_4 = 2.14748365e+09f;
#elif defined(VERSION_US_REV1)
const double unbake_rodata_800CC588_8 = 4294967296.0;
const float unbake_rodata_800CC590_4 = 2.14748365e+09f;
#elif defined(VERSION_EU)
const unsigned int unbake_rodata_800C6278_1C[] = {0x002A8C74U, 0x002A8DA0U, 0x002A8DD8U, 0x002A8E10U, 0x002A8E48U, 0x002A8E7CU, 0x002A8EB0U};
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C6228_4 = 1.52587891e-05f;
const float unbake_rodata_800C622C_4 = 0.25f;
const float unbake_rodata_800C6230_4 = (-90.0f);
#elif defined(VERSION_DE)
const double unbake_rodata_800C61C8_8 = 4294967296.0;
const float unbake_rodata_800C61D0_4 = 1.0f;
const float unbake_rodata_800C61D4_4 = 1.0f;
const float unbake_rodata_800C61D8_4 = 1.0f;
#endif
