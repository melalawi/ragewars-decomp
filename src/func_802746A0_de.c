#include "span_1000/code_8027451C.h"
#include "types.h"

extern f32 D_800C4960_de;
extern f32 D_800CD738;

f32 func_802746A0_de(f32 arg0, f32 arg1, f32 arg2) {
    if (arg1 < 0.0f) {
        if (arg0 <= -arg2) {
            return arg0;
        }
    }
    if (0.0f < arg1) {
        if (arg2 <= arg0) {
            return arg0;
        }
    }
    if ((arg0 < 0.0f && 0.0f < arg1) ||
        (0.0f < arg0 && arg1 < 0.0f)) {
        arg1 *= D_800C4960_de;
    }
    arg0 += arg1 * D_800CD738;
    if (arg1 < 0.0f) {
        if (arg0 < -arg2) {
            arg0 = -arg2;
        }
    } else if (arg2 < arg0) {
        arg0 = arg2;
    }
    return arg0;
}
