#include "basetypes.h"

extern s32 D_80115DE4;
extern f64 D_800C9A30;
extern f32 D_800C9A38;

/** LCG PRNG step scaled into [0, arg0 * D_800C9A38) as a float. */
f32 func_802745D4(f32 arg0) {
    f64 var_f1;
    s32 temp_v0;
    u32 temp_v1;

    temp_v1 = (D_80115DE4 * 0xA84A5B53) + 0x58348C2D;
    temp_v0 = (s32)((temp_v1 >> 0x10) & 0x7FFF);
    var_f1 = (f64)temp_v0;
    D_80115DE4 = temp_v1;
    if (temp_v0 < 0) {
        var_f1 = var_f1 + D_800C9A30;
    }
    return (f32)var_f1 * arg0 * D_800C9A38;
}
