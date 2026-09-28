#include "basetypes.h"

extern f32 func_802BC380(f32);
extern f32 func_80274640(f32 arg0);

f32 func_802417B4(f32 *arg0) {
    f32 magnitude;
    f32 result;
    f32 zero;

    magnitude = func_802BC380((arg0[18] * arg0[18]) + (arg0[20] * arg0[20]));
    zero = 0.0f;
    if (magnitude == zero) {
        return zero;
    }
    result = func_80274640(arg0[20] / magnitude);
    if (!(zero < arg0[18])) {
        result = -result;
    }
    return result;
}
