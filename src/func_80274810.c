#include "basetypes.h"

extern f32 D_800D2988;

f32 func_80274810(f32 arg0, f32 arg1) {
    f32 zero;

    zero = 0.0f;
    if (zero < arg0) {
        arg0 -= arg1 * D_800D2988;
        if (arg0 < zero) {
            arg0 = zero;
        }
    } else if (arg0 < zero) {
        arg0 += arg1 * D_800D2988;
        if (zero < arg0) {
            arg0 = zero;
        }
    }
    return arg0;
}
