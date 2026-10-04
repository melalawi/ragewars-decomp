#include "span_1000/code_8029AC80.h"
#include "span_C76B0/data.h"
#include "types.h"
/* Computes the sine and cosine of an angle by reducing it into one turn, folding it into a quadrant, and evaluating one odd polynomial for each output.
   Adapted from func_8029B9FC_de with the fmod result kept and copied back into the angle, a shared zero local for the wrap loops, the quadrant fold producing a sine and a cosine argument, and both polynomials computed before the two pointer stores changed. */











extern f64 func_8029B278_de(f64, f64);

void func_8029BBB0_de(f32 angle, f32 *sinOut, f32 *cosOut) {
    f32 r;
    f32 zero;
    f32 s;
    f32 c;
    f32 s2;
    f32 c2;
    f32 ps;
    f32 pc;

    r = angle;
    if ((D_800C58F8_de < angle) || (angle < (-25.13274383544922f))) {
        r = func_8029B278_de((f64)angle, D_800C5900_de);
    } else {
        if (D_800C5908_de < angle) {
            do {
                r -= D_800C5908_de;
            } while (D_800C5908_de < r);
        }
        zero = 0.0f;
        if (r < zero) {
            do {
                r += (6.283185958862305f);
            } while (r < zero);
        }
    }
    angle = r;
    zero = 0.0f;
    while (angle < zero) {
        angle += D_800C5910_de;
    }
    if ((6.2831854820251465f) <= angle) {
        do {
            angle -= (6.2831854820251465f);
        } while ((6.2831854820251465f) <= angle);
    }
    if (D_800C5918_de <= angle) {
        if (*(&D_800C5918_de + 1) <= angle) {
            angle -= *(&D_800C5918_de + 1);
            s = angle - D_800C5920_de;
            c = angle;
        } else {
            angle -= D_800C5918_de;
            s = -angle;
            c = angle - (1.5707964897155762f);
        }
    } else if (D_800C5928_de <= angle) {
        angle -= D_800C5928_de;
        s = D_800C5928_de - angle;
        c = -angle;
    } else {
        s = angle;
        c = D_800C5928_de - angle;
    }
    s2 = s * s;
    c2 = c * c;
    ps = ((((((((s2 * D_800C592C_de) - D_800C5930_de) * s2) + (0.008333333767950535f)) * s2) - D_800C5938_de) * s2) + (1.0f)) * s;
    pc = ((((((((c2 * D_800C592C_de) - D_800C5930_de) * c2) + (0.008333333767950535f)) * c2) - D_800C5938_de) * c2) + (1.0f)) * c;
    *sinOut = ps;
    *cosOut = pc;
}
