#include "span_1000/code_8027230C.h"
#include "types.h"

extern f32 D_800C48C0_de[2];
extern f32 D_800C48C8_de;

void func_80272828_de(f32 *arg0) {
    f32 *var_a0;
    f32 *var_v1;
    f32 temp_f0;
    s32 var_a1;
    s32 var_a2;
    f32 maxVal;
    f32 minVal;

    maxVal = D_800C48C0_de[1];
    minVal = D_800C48C8_de;
    var_a0 = arg0;
    var_a2 = 0;
    do {
        var_a1 = 0;
        var_v1 = var_a0;
        do {
            temp_f0 = *var_v1;
            if (maxVal < temp_f0) {
                *var_v1 = maxVal;
            } else if (temp_f0 < minVal) {
                *var_v1 = minVal;
            }
            var_a1 += 1;
            var_v1 += 1;
        } while (var_a1 < 4);
        var_a2 += 1;
        var_a0 += 4;
    } while (var_a2 < 4);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C47F4_4 = 32767.0f;
const float unbake_rodata_800C47F8_4 = (-32767.0f);
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C99B4_4 = 32767.0f;
const float unbake_rodata_800C99B8_4 = (-32767.0f);
#elif defined(VERSION_EU)
const float unbake_rodata_800C4B74_4 = 32767.0f;
const float unbake_rodata_800C4B78_4 = (-32767.0f);
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C4BB4_4 = 32767.0f;
const float unbake_rodata_800C4BB8_4 = (-32767.0f);
#elif defined(VERSION_DE)
const float unbake_rodata_800C48C4_4 = 32767.0f;
const float unbake_rodata_800C48C8_4 = (-32767.0f);
#endif
