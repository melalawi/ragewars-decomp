#include "span_1000/code_80204A68.h"
#include "types.h"

extern s32 func_80214178_de(void *, void *, s32);
extern void func_80285DB0_de(void *, void *, s32);
extern s32 D_8011BDC8;

void func_80205694_de(void *arg0, void *arg1) {
    func_80214178_de(arg0, arg1, 1);
    func_80285DB0_de(&D_8011BDC8, arg0, 1);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2224_4 = 0.5f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C7388_4 = 2.0f;
const float unbake_rodata_800C738C_4 = 0.25f;
const float unbake_rodata_800C7390_4 = 1.0f;
const float unbake_rodata_800C7394_4 = 0.25f;
const float unbake_rodata_800C7398_4 = 0.52359885f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C24A0_4 = 255.0f;
const float unbake_rodata_800C24A4_4 = 0.5f;
const float unbake_rodata_800C24A8_4 = 2.14748365e+09f;
const float unbake_rodata_800C24AC_4 = 0.00312500005f;
const float unbake_rodata_800C24B0_4 = 0.00416666688f;
const float unbake_rodata_800C24B4_4 = 63.0f;
const float unbake_rodata_800C24B8_4 = 192.0f;
const float unbake_rodata_800C24BC_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C24B0_4 = 1.0f;
const float unbake_rodata_800C24B4_4 = (-1.0f);
#elif defined(VERSION_DE)
const float unbake_rodata_800C226C_4 = 255.0f;
const float unbake_rodata_800C2270_4 = 0.5f;
const float unbake_rodata_800C2274_4 = 2.14748365e+09f;
const float unbake_rodata_800C2278_4 = 0.00312500005f;
const float unbake_rodata_800C227C_4 = 0.00416666688f;
const float unbake_rodata_800C2280_4 = 63.0f;
const float unbake_rodata_800C2284_4 = 192.0f;
const float unbake_rodata_800C2288_4 = 1.0f;
const float unbake_rodata_800C228C_4 = 0.75f;
const float unbake_rodata_800C2290_4 = 0.600000024f;
const float unbake_rodata_800C2294_4 = 0.5f;
#endif
