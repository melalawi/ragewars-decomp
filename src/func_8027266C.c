#include "basetypes.h"

extern f32 D_800C99A0;
extern f32 D_800C99A8;
extern f32 func_802BC380(f32);
extern f32 func_80274640(f32 arg0);

f32 func_8027266C(f32 *arg0) {
    f32 y;
    f32 zero;
    f32 x;
    f32 z;
    f32 magnitude_squared;
    f32 ratio;

    y = arg0[1];
    zero = 0.0f;
    x = arg0[0];
    z = arg0[2];
    if (y == zero) {
        return zero;
    }
    magnitude_squared = (x * x) + (y * y) + (z * z);
    if (magnitude_squared == zero) {
        return zero;
    }
    ratio = y / func_802BC380(magnitude_squared);
    if (ratio < *(&D_800C99A0 + 1)) {
        return zero;
    }
    if (D_800C99A8 < ratio) {
        goto return_zero;
    }
    return func_80274640(ratio) - *(&D_800C99A8 + 1);

return_zero:
    return zero;
}
