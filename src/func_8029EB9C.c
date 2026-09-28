#include "basetypes.h"

/* Returns e raised to a double: 1 for arguments of negligible magnitude, and otherwise splits the argument into k ln 2 plus a remainder r, evaluates the rational approximation 1/2 + p(r)/(q(r) - p(r)) and scales it by two to the power k + 1 through func_8029BBA0. */

extern f64 D_800CACF8;
extern f64 D_800CAD00;
extern f64 D_800CAD08;
extern f64 D_800CAD10;
extern f64 D_800CAD18;
extern f64 D_800CAD20;
extern f64 D_800CAD28;
extern f64 D_800CAD30;
extern f64 D_800CAD38;
extern f64 D_800CAD40;
extern f64 D_800CAD48;
extern f64 D_800CAD50;
extern f64 func_8029BBA0(f64 value, s32 exponent);

f64 func_8029EB9C(f64 x) {
    f64 r;
    f64 t;
    f64 p;
    f64 q;
    s32 k;

    if (D_800CACF8 < x) {
        f64 result = D_800CAD08;
        if (x < D_800CAD00) return result;
    }
    t = x * D_800CAD10;
    k = t;
    if (k < 0) {
        k--;
    }
    if (D_800CAD18 <= t - k) {
        k++;
    }
    r = x - k * D_800CAD20 + k * D_800CAD28;
    t = r * r;
    p = ((t * D_800CAD30 + D_800CAD38) * t + D_800CAD50) * r;
    q = (t * D_800CAD40 + D_800CAD48) * t + D_800CAD18;
    return func_8029BBA0(p / (q - p) + D_800CAD18, k + 1);
}
