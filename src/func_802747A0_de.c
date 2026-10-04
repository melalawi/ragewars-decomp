#include "span_1000/code_80273744.h"
#include "types.h"

extern f32 D_800CD738;

f32 func_802747A0_de(f32 arg0, f32 arg1) {
    f32 zero;

    zero = 0.0f;
    if (zero < arg0) {
        arg0 -= arg1 * D_800CD738;
        if (arg0 < zero) {
            arg0 = zero;
        }
    } else if (arg0 < zero) {
        arg0 += arg1 * D_800CD738;
        if (zero < arg0) {
            arg0 = zero;
        }
    }
    return arg0;
}
