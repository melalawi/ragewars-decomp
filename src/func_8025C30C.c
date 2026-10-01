#include "basetypes.h"

extern f32 D_800C9080[];
extern f32 D_800C9088;
extern f32 func_802745D4(f32 arg0);

f32 func_8025C30C(u8 arg0, u8 arg1) {
    f32 first;
    f32 second;

    first = arg0 * D_800C9080[1];
    second = arg1 * D_800C9080[1];
    if (first == D_800C9088) {
        return D_800C9088;
    }
    if (second == first) {
        return first;
    }
    return first + func_802745D4(second - first);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C3EC4_4 = 0.00999999978f;
const float unbake_rodata_800C3EC8_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C9084_4 = 0.00999999978f;
const float unbake_rodata_800C9088_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C4244_4 = 0.00999999978f;
const float unbake_rodata_800C4248_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C4284_4 = 0.00999999978f;
const float unbake_rodata_800C4288_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C3F94_4 = 0.00999999978f;
const float unbake_rodata_800C3F98_4 = 1.0f;
#endif
