#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
void func_8022B520(s32 arg0) {
    s32 var_v0;
    void *var_a0;
    var_v0 = 4;
    var_a0 = arg0 + 0x60;
    do {
        (*(s32 *)((s8 *)(var_a0) + (0x124C))) = 0;
        var_v0 -= 1;
        var_a0 -= 0x18;
    } while (var_v0 >= 0);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C5EC0_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CB124_4 = 0.00100000005f;
const float unbake_rodata_800CB128_4 = 0.00999999978f;
const float unbake_rodata_800CB12C_4 = 0.100000001f;
const float unbake_rodata_800CB130_4 = 13.0f;
const float unbake_rodata_800CB134_4 = 13.0f;
const float unbake_rodata_800CB138_4 = 1.0f;
const float unbake_rodata_800CB13C_4 = 0.699999988f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C5DA4_4 = 1.0f;
const float unbake_rodata_800C5DA8_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C5D70_4 = 1.0f;
const float unbake_rodata_800C5D74_4 = 1.0f;
const float unbake_rodata_800C5D78_4 = 1.0f;
const float unbake_rodata_800C5D7C_4 = 1.0f;
const float unbake_rodata_800C5D80_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C5E64_4 = 255.0f;
const float unbake_rodata_800C5E68_4 = 255.0f;
const float unbake_rodata_800C5E6C_4 = 255.0f;
const float unbake_rodata_800C5E70_4 = 255.0f;
const float unbake_rodata_800C5E74_4 = 255.0f;
const float unbake_rodata_800C5E78_4 = 255.0f;
const float unbake_rodata_800C5E7C_4 = 255.0f;
const float unbake_rodata_800C5E80_4 = 255.0f;
const float unbake_rodata_800C5E84_4 = 255.0f;
#endif
