#include "span_1000/code_8023940C.h"
#include "types.h"

extern f32 D_800C359C_de;
extern f32 D_800C35A0_de;
extern f32 D_800FF220[];

extern s32 func_80264B6C_de(void);

f32 func_8023A294_de(s32 arg0, f32 value, f32 target, f32 step) {
    if (func_80264B6C_de() != 0) {
        value = target;
    }
    if (value < target) {
        value += step;
        D_800FF220[1] = D_800C359C_de;
        if (target < value) {
            value = target;
        }
    } else if (target < value) {
        value -= step;
        D_800FF220[1] = D_800C35A0_de;
        if (value < target) {
            value = target;
        }
    }
    return value;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C34CC_4 = 30.0f;
const float unbake_rodata_800C34D0_4 = 30.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C868C_4 = 30.0f;
const float unbake_rodata_800C8690_4 = 30.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C384C_4 = 30.0f;
const float unbake_rodata_800C3850_4 = 30.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C388C_4 = 30.0f;
const float unbake_rodata_800C3890_4 = 30.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C359C_4 = 30.0f;
const float unbake_rodata_800C35A0_4 = 30.0f;
#endif
