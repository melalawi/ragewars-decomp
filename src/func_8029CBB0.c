/* Computes the sine and cosine of an angle by reducing it into one turn, folding it into a quadrant, and evaluating one odd polynomial for each output.
   Adapted from func_8029C9FC with the fmod result kept and copied back into the angle, a shared zero local for the wrap loops, the quadrant fold producing a sine and a cosine argument, and both polynomials computed before the two pointer stores changed. */
#include "basetypes.h"

extern f32 D_800CAA88;
extern f32 D_800CAA8C;
extern f64 D_800CAA90;
extern f32 D_800CAA98;
extern f32 D_800CAA9C;
extern f32 D_800CAAA0;
extern f32 D_800CAAA4;
extern f32 D_800CAAA8;
extern f32 D_800CAAB0;
extern f32 D_800CAAB4;
extern f32 D_800CAAB8;
extern f32 D_800CAABC;
extern f32 D_800CAAC0;
extern f32 D_800CAAC4;
extern f32 D_800CAAC8;
extern f32 D_800CAACC;
extern f64 func_8029C278(f64, f64);

void func_8029CBB0(f32 angle, f32 *sinOut, f32 *cosOut) {
    f32 r;
    f32 zero;
    f32 s;
    f32 c;
    f32 s2;
    f32 c2;
    f32 ps;
    f32 pc;

    r = angle;
    if ((D_800CAA88 < angle) || (angle < D_800CAA8C)) {
        r = func_8029C278((f64)angle, D_800CAA90);
    } else {
        if (D_800CAA98 < angle) {
            do {
                r -= D_800CAA98;
            } while (D_800CAA98 < r);
        }
        zero = 0.0f;
        if (r < zero) {
            do {
                r += D_800CAA9C;
            } while (r < zero);
        }
    }
    angle = r;
    zero = 0.0f;
    while (angle < zero) {
        angle += D_800CAAA0;
    }
    if (D_800CAAA4 <= angle) {
        do {
            angle -= D_800CAAA4;
        } while (D_800CAAA4 <= angle);
    }
    if (D_800CAAA8 <= angle) {
        if (*(&D_800CAAA8 + 1) <= angle) {
            angle -= *(&D_800CAAA8 + 1);
            s = angle - D_800CAAB0;
            c = angle;
        } else {
            angle -= D_800CAAA8;
            s = -angle;
            c = angle - D_800CAAB4;
        }
    } else if (D_800CAAB8 <= angle) {
        angle -= D_800CAAB8;
        s = D_800CAAB8 - angle;
        c = -angle;
    } else {
        s = angle;
        c = D_800CAAB8 - angle;
    }
    s2 = s * s;
    c2 = c * c;
    ps = ((((((((s2 * D_800CAABC) - D_800CAAC0) * s2) + D_800CAAC4) * s2) - D_800CAAC8) * s2) + D_800CAACC) * s;
    pc = ((((((((c2 * D_800CAABC) - D_800CAAC0) * c2) + D_800CAAC4) * c2) - D_800CAAC8) * c2) + D_800CAACC) * c;
    *sinOut = ps;
    *cosOut = pc;
}
