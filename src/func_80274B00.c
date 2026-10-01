#include "basetypes.h"

extern s32 D_80115DE4;
extern f32 D_800C9A88;
extern f32 D_800C9A8C;

f32 func_80274B00(f32 arg0, f32 arg1) {
    f32 temp_f1;
    u32 temp_a1;
    s32 rotated;

    temp_a1 = (D_80115DE4 * 0xA84A5B53) + 0x58348C2D;
    rotated = ((temp_a1 << 0x10) | (temp_a1 >> 0x10)) & 0x7FFFFFFF;
    rotated = rotated % 10000;
    temp_f1 = (f32)rotated * D_800C9A88;
    D_80115DE4 = temp_a1;
    return (temp_f1 * arg0) + ((D_800C9A8C - temp_f1) * arg1);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C48C8_4 = 0.000100010002f;
const float unbake_rodata_800C48CC_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C9A88_4 = 0.000100010002f;
const float unbake_rodata_800C9A8C_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C4C48_4 = 0.000100010002f;
const float unbake_rodata_800C4C4C_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C4C88_4 = 0.000100010002f;
const float unbake_rodata_800C4C8C_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C4998_4 = 0.000100010002f;
const float unbake_rodata_800C499C_4 = 1.0f;
#endif
