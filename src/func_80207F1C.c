#include "basetypes.h"

extern void func_80285D80(void *, void *, s32);
extern s32 D_8011FE88;

typedef struct func_80207F1C_S1 func_80207F1C_S1;
struct func_80207F1C_S1 {
    char pad0[0x100];
    s32 unk100;
};

void func_80207F1C(void *arg0) {
    func_80285D80(&D_8011FE88, arg0, 0);
    ((func_80207F1C_S1 *)(arg0))->unk100 &= ~0x100;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const double unbake_rodata_800C3028_8 = 4294967296.0;
const double unbake_rodata_800C3030_8 = 4294967296.0;
const float unbake_rodata_800C3038_4 = 120.0f;
const float unbake_rodata_800C303C_4 = 2.14748365e+09f;
const float unbake_rodata_800C3040_4 = 2.14748365e+09f;
const float unbake_rodata_800C3044_4 = 2.14748365e+09f;
const double unbake_rodata_800C3048_8 = 4294967296.0;
const float unbake_rodata_800C3050_4 = 0.069813177f;
const float unbake_rodata_800C3054_4 = 64.0f;
const float unbake_rodata_800C3058_4 = 128.0f;
const float unbake_rodata_800C305C_4 = 2.14748365e+09f;
const double unbake_rodata_800C3060_8 = 4294967296.0;
const float unbake_rodata_800C3068_4 = 0.209439531f;
const float unbake_rodata_800C306C_4 = 64.0f;
const float unbake_rodata_800C3070_4 = 128.0f;
const float unbake_rodata_800C3074_4 = 2.14748365e+09f;
const double unbake_rodata_800C3078_8 = 4294967296.0;
const float unbake_rodata_800C3080_4 = 0.279252708f;
const float unbake_rodata_800C3084_4 = 64.0f;
const float unbake_rodata_800C3088_4 = 128.0f;
const float unbake_rodata_800C308C_4 = 2.14748365e+09f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C8190_4 = 1.0f;
const float unbake_rodata_800C8194_4 = 1024.0f;
const float unbake_rodata_800C8198_4 = 47.5f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C3198_4 = 1.0f;
const float unbake_rodata_800C319C_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C31D0_4 = 0.100000001f;
const float unbake_rodata_800C31D4_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C30A0_4 = 1.0f;
const float unbake_rodata_800C30A4_4 = 1024.0f;
const float unbake_rodata_800C30A8_4 = 47.5f;
#endif
