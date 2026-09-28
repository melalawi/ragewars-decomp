#include "basetypes.h"

/* Returns the arccosine of a value clamped to [-1, 1] as pi/2 minus the arcsine, which is computed by the polynomial approximation pi/2 - sqrt(1 - x) * p(x) on the magnitude with the sign restored. Adapted from func_8029EE48 with the constants moved to D_800CADB4 through D_800CADD4 and the final subtraction from pi/2 added. */

extern f32 D_800CADB0;
extern f32 D_800CADB8;
extern f32 D_800CADBC;
extern f32 D_800CADC0;
extern f32 D_800CADC8;
extern f32 D_800CADD0;
extern f32 func_802BC380(f32 value);

f32 func_8029EF48(f32 x) {
    s32 negative;
    f32 poly;
    f32 root;
    f32 result;

    if (*(&D_800CADB0 + 1) < x) {
        x = *(&D_800CADB0 + 1);
    }
    do {
        if (x < D_800CADB8) {
            x = D_800CADB8;
        }
        negative = 0;
        if (x < 0.0f) {
            negative = 1;
            x = -x;
        }
        poly = (((((x * D_800CADBC + D_800CADC0) * x - *(&D_800CADC0 + 1)) * x + D_800CADC8) * x
                 - *(&D_800CADC8 + 1)) * x) + D_800CADD0;
        x = *(&D_800CADB0 + 1) - x;
        if (x <= 0.0f) {
            root = 0.0f;
        } else {
            root = func_802BC380(x);
        }
    } while (0);
    result = *(&D_800CADD0 + 1) - root * poly;
    if (negative) {
        result = -result;
    }
    return *(&D_800CADD0 + 1) - result;
}
