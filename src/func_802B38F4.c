/* Scales the float argument by the unsigned rate at offset 0x40 of the object behind arg0 times a constant, divides by the unsigned third argument, and returns the quotient converted to unsigned. Adapted from func_802B388C with the second argument changed to a float, the product and quotient reordered so the rate term multiplies and the third argument divides, and the result converted to u32 with the explicit 2^31 split. */
#include "basetypes.h"

extern f64 D_800CC578;
extern f32 D_800CC580;
extern f64 D_800CC588;
extern f32 D_800CC590;

typedef struct func_802B38F4_S1 func_802B38F4_S1;
struct func_802B38F4_S1 {
    char pad0[0x40];
    s32 unk40;
};

u32 func_802B38F4(void **arg0, f32 arg1, s32 arg2) {
    f64 val;
    f64 div;
    f32 arg1f;
    f32 scaled;
    f32 value;
    s32 temp_v0;
    s32 converted;

    temp_v0 = ((func_802B38F4_S1 *)((*arg0)))->unk40;
    arg1f = arg1;
    val = (f64)temp_v0;
    if (temp_v0 < 0) {
        val += D_800CC578;
    }
    scaled = arg1f * ((f32)val * D_800CC580);
    div = (f64)arg2;
    if (arg2 < 0) {
        div += D_800CC588;
    }
    value = scaled / (f32)div;
    if (!(D_800CC590 <= value)) {
        converted = (s32)value;
    } else {
        converted = (s32)(value - D_800CC590);
        converted |= 0x80000000;
    }
    return converted;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const double unbake_rodata_800C7248_8 = 4294967296.0;
const float unbake_rodata_800C7250_4 = 1000000.0f;
#elif defined(VERSION_US_REV1)
const double unbake_rodata_800CC578_8 = 4294967296.0;
const float unbake_rodata_800CC580_4 = 1000000.0f;
#elif defined(VERSION_EU)
const double unbake_rodata_800C7F18_8 = 4294967296.0;
const float unbake_rodata_800C7F20_4 = 1000000.0f;
#elif defined(VERSION_EU_X)
const double unbake_rodata_800C88E8_8 = 4294967296.0;
const float unbake_rodata_800C88F0_4 = 1000000.0f;
#elif defined(VERSION_DE)
const double unbake_rodata_800C7328_8 = 4294967296.0;
const float unbake_rodata_800C7330_4 = 1000000.0f;
#endif
