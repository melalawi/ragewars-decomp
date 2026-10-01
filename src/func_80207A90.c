#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
void func_80207A90(void *arg0, s32 *arg1) {
    if (!((*(s32 *)((s8 *)((*(void **)((s8 *)(arg0) + (0x18)))) + (0x38))) & 0x40)) {
        *arg1 &= 0xFFFEFFFF;
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2C50_4 = 300.0f;
const float unbake_rodata_800C2C54_4 = 22.5f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C7D48_4 = 75.0f;
const float unbake_rodata_800C7D4C_4 = 15.0f;
const float unbake_rodata_800C7D50_4 = 75.0f;
const float unbake_rodata_800C7D54_4 = 7.5f;
const float unbake_rodata_800C7D58_4 = 2.14748365e+09f;
const float unbake_rodata_800C7D5C_4 = 0.0666666701f;
const float unbake_rodata_800C7D60_4 = 1.5f;
const float unbake_rodata_800C7D64_4 = 15.0f;
const float unbake_rodata_800C7D68_4 = 2.14748365e+09f;
const float unbake_rodata_800C7D6C_4 = 2.14748365e+09f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C2E10_4 = 0.5f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C2E14_4 = 100.0f;
const float unbake_rodata_800C2E18_4 = 80.0f;
const float unbake_rodata_800C2E1C_4 = 7.5f;
const float unbake_rodata_800C2E20_4 = 2.14748365e+09f;
const float unbake_rodata_800C2E24_4 = 512.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C2C58_4 = 75.0f;
const float unbake_rodata_800C2C5C_4 = 15.0f;
const float unbake_rodata_800C2C60_4 = 75.0f;
const float unbake_rodata_800C2C64_4 = 7.5f;
const float unbake_rodata_800C2C68_4 = 2.14748365e+09f;
const float unbake_rodata_800C2C6C_4 = 0.0666666701f;
const float unbake_rodata_800C2C70_4 = 1.5f;
const float unbake_rodata_800C2C74_4 = 15.0f;
const float unbake_rodata_800C2C78_4 = 2.14748365e+09f;
const float unbake_rodata_800C2C7C_4 = 2.14748365e+09f;
#endif
