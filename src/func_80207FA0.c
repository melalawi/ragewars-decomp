#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
void func_80207FA0(void *arg0, void *arg1) {
    (*(s32 *)((s8 *)(arg1) + (0))) = (s32) ((*(s32 *)((s8 *)(arg1) + (0))) | 0x10000);
    (*(s32 *)((s8 *)(arg0) + (0x100))) = (s32) ((*(s32 *)((s8 *)(arg0) + (0x100))) | 0x2100);
    (*(s32 *)((s8 *)(arg1) + (0x16C))) = 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const double unbake_rodata_800C3108_8 = 4294967296.0;
const double unbake_rodata_800C3110_8 = 4294967296.0;
const double unbake_rodata_800C3118_8 = 4294967296.0;
const float unbake_rodata_800C3120_4 = 2.14748365e+09f;
const float unbake_rodata_800C3124_4 = 1024.0f;
#elif defined(VERSION_US_REV1)
const double unbake_rodata_800C81D8_8 = 4294967296.0;
const float unbake_rodata_800C81E0_4 = 0.0174532942f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C3200_4 = 1.0f;
const float unbake_rodata_800C3204_4 = 1.0f;
const float unbake_rodata_800C3208_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C3218_4 = 0.0136135686f;
const float unbake_rodata_800C321C_4 = 1.79049289f;
const float unbake_rodata_800C3220_4 = 1.0f;
const float unbake_rodata_800C3224_4 = 1.79049289f;
const float unbake_rodata_800C3228_4 = 1.0f;
const float unbake_rodata_800C322C_4 = 1.79049289f;
const float unbake_rodata_800C3230_4 = 1.79049289f;
const float unbake_rodata_800C3234_4 = 1.0f;
const float unbake_rodata_800C3238_4 = 1.0f;
const float unbake_rodata_800C323C_4 = 25.0f;
#elif defined(VERSION_DE)
const double unbake_rodata_800C30E8_8 = 4294967296.0;
const float unbake_rodata_800C30F0_4 = 0.0174532942f;
#endif
