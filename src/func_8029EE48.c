#include "basetypes.h"

/* Returns the arcsine of a value clamped to [-1, 1] using the polynomial approximation pi/2 - sqrt(1 - x) * p(x) on its magnitude and restoring the sign afterwards. */

extern f32 D_800CAD90;
extern f32 D_800CAD98;
extern f32 D_800CADA0;
extern f32 D_800CADA8;
extern f32 D_800CADB0;
extern f32 func_802BC380(f32 value);

f32 func_8029EE48(f32 x) {
    s32 negative;
    f32 poly;
    f32 root;
    f32 result;

    if (D_800CAD90 < x) {
        x = D_800CAD90;
    }
    do {
        if (x < *(&D_800CAD90 + 1)) {
            x = *(&D_800CAD90 + 1);
        }
        negative = 0;
        if (x < 0.0f) {
            negative = 1;
            x = -x;
        }
        poly = (((((x * D_800CAD98 + *(&D_800CAD98 + 1)) * x - D_800CADA0) * x + *(&D_800CADA0 + 1)) * x
                 - D_800CADA8) * x) + *(&D_800CADA8 + 1);
        x = D_800CAD90 - x;
        if (x <= 0.0f) {
            root = 0.0f;
        } else {
            root = func_802BC380(x);
        }
    } while (0);
    result = D_800CADB0 - root * poly;
    if (negative) {
        result = -result;
    }
    return result;
}
