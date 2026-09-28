#include "basetypes.h"

extern const f64 D_800CC960;
extern const f64 D_800CC968;
extern const f64 D_800CC970;
extern const f64 D_800CC978;
extern const f64 D_800CC980;

f64 func_802BA3D0(f64 arg0, s32 *arg2) {
    f64 value;

    *arg2 = 0;
    if (arg0 == D_800CC960) {
        return arg0;
    }
    value = __builtin_fabs(arg0);
    if (D_800CC968 <= value) {
        do {
            value *= D_800CC970;
            *arg2 += 1;
        } while (D_800CC968 <= value);
    }
    if (value < D_800CC978) {
        do {
            value += value;
            *arg2 -= 1;
        } while (value < D_800CC978);
    }
    if (!(D_800CC980 < arg0)) {
        value = -value;
    }
    return value;
}
