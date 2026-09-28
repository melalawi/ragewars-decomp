#include "basetypes.h"

extern f64 D_800CC560;
extern f64 D_800CC568;
extern f32 D_800CC570;

f32 func_802B388C(void **arg0, s32 arg1, s32 arg2) {
    f64 angle;
    f32 arg1f;
    f32 scaled;
    s32 temp_v0;
    f64 val;

    angle = (f64)arg2;
    arg1f = (f32)arg1;
    if (arg2 < 0) {
        angle += D_800CC560;
    }
    temp_v0 = *(s32 *)((char *)(*arg0) + 0x40);
    scaled = arg1f * (f32)angle;
    val = (f64)temp_v0;
    if (temp_v0 < 0) {
        val += D_800CC568;
    }
    return scaled / ((f32)val * D_800CC570);
}
