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

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C5828_4 = 25.1327438f;
const float unbake_rodata_800C582C_4 = (-25.1327438f);
const double unbake_rodata_800C5830_8 = 6.2831859588623047;
const float unbake_rodata_800C5838_4 = 6.28318596f;
const float unbake_rodata_800C583C_4 = 6.28318596f;
const float unbake_rodata_800C5840_4 = 6.28318548f;
const float unbake_rodata_800C5844_4 = 6.28318548f;
const float unbake_rodata_800C5848_4 = 3.14159298f;
const float unbake_rodata_800C584C_4 = 4.71238947f;
const float unbake_rodata_800C5850_4 = 1.57079649f;
const float unbake_rodata_800C5854_4 = 1.57079649f;
const float unbake_rodata_800C5858_4 = 1.57079649f;
const float unbake_rodata_800C585C_4 = 2.75573188e-06f;
const float unbake_rodata_800C5860_4 = 0.000198412701f;
const float unbake_rodata_800C5864_4 = 0.00833333377f;
const float unbake_rodata_800C5868_4 = 0.166666672f;
const float unbake_rodata_800C586C_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CAA88_4 = 25.1327438f;
const float unbake_rodata_800CAA8C_4 = (-25.1327438f);
const double unbake_rodata_800CAA90_8 = 6.2831859588623047;
const float unbake_rodata_800CAA98_4 = 6.28318596f;
const float unbake_rodata_800CAA9C_4 = 6.28318596f;
const float unbake_rodata_800CAAA0_4 = 6.28318548f;
const float unbake_rodata_800CAAA4_4 = 6.28318548f;
const float unbake_rodata_800CAAA8_4 = 3.14159298f;
const float unbake_rodata_800CAAAC_4 = 4.71238947f;
const float unbake_rodata_800CAAB0_4 = 1.57079649f;
const float unbake_rodata_800CAAB4_4 = 1.57079649f;
const float unbake_rodata_800CAAB8_4 = 1.57079649f;
const float unbake_rodata_800CAABC_4 = 2.75573188e-06f;
const float unbake_rodata_800CAAC0_4 = 0.000198412701f;
const float unbake_rodata_800CAAC4_4 = 0.00833333377f;
const float unbake_rodata_800CAAC8_4 = 0.166666672f;
const float unbake_rodata_800CAACC_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C5B98_4 = 25.1327438f;
const float unbake_rodata_800C5B9C_4 = (-25.1327438f);
const double unbake_rodata_800C5BA0_8 = 6.2831859588623047;
const float unbake_rodata_800C5BA8_4 = 6.28318596f;
const float unbake_rodata_800C5BAC_4 = 6.28318596f;
const float unbake_rodata_800C5BB0_4 = 6.28318548f;
const float unbake_rodata_800C5BB4_4 = 6.28318548f;
const float unbake_rodata_800C5BB8_4 = 3.14159298f;
const float unbake_rodata_800C5BBC_4 = 4.71238947f;
const float unbake_rodata_800C5BC0_4 = 1.57079649f;
const float unbake_rodata_800C5BC4_4 = 1.57079649f;
const float unbake_rodata_800C5BC8_4 = 1.57079649f;
const float unbake_rodata_800C5BCC_4 = 2.75573188e-06f;
const float unbake_rodata_800C5BD0_4 = 0.000198412701f;
const float unbake_rodata_800C5BD4_4 = 0.00833333377f;
const float unbake_rodata_800C5BD8_4 = 0.166666672f;
const float unbake_rodata_800C5BDC_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C5BD8_4 = 25.1327438f;
const float unbake_rodata_800C5BDC_4 = (-25.1327438f);
const double unbake_rodata_800C5BE0_8 = 6.2831859588623047;
const float unbake_rodata_800C5BE8_4 = 6.28318596f;
const float unbake_rodata_800C5BEC_4 = 6.28318596f;
const float unbake_rodata_800C5BF0_4 = 6.28318548f;
const float unbake_rodata_800C5BF4_4 = 6.28318548f;
const float unbake_rodata_800C5BF8_4 = 3.14159298f;
const float unbake_rodata_800C5BFC_4 = 4.71238947f;
const float unbake_rodata_800C5C00_4 = 1.57079649f;
const float unbake_rodata_800C5C04_4 = 1.57079649f;
const float unbake_rodata_800C5C08_4 = 1.57079649f;
const float unbake_rodata_800C5C0C_4 = 2.75573188e-06f;
const float unbake_rodata_800C5C10_4 = 0.000198412701f;
const float unbake_rodata_800C5C14_4 = 0.00833333377f;
const float unbake_rodata_800C5C18_4 = 0.166666672f;
const float unbake_rodata_800C5C1C_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C58F8_4 = 25.1327438f;
const float unbake_rodata_800C58FC_4 = (-25.1327438f);
const double unbake_rodata_800C5900_8 = 6.2831859588623047;
const float unbake_rodata_800C5908_4 = 6.28318596f;
const float unbake_rodata_800C590C_4 = 6.28318596f;
const float unbake_rodata_800C5910_4 = 6.28318548f;
const float unbake_rodata_800C5914_4 = 6.28318548f;
const float unbake_rodata_800C5918_4 = 3.14159298f;
const float unbake_rodata_800C591C_4 = 4.71238947f;
const float unbake_rodata_800C5920_4 = 1.57079649f;
const float unbake_rodata_800C5924_4 = 1.57079649f;
const float unbake_rodata_800C5928_4 = 1.57079649f;
const float unbake_rodata_800C592C_4 = 2.75573188e-06f;
const float unbake_rodata_800C5930_4 = 0.000198412701f;
const float unbake_rodata_800C5934_4 = 0.00833333377f;
const float unbake_rodata_800C5938_4 = 0.166666672f;
const float unbake_rodata_800C593C_4 = 1.0f;
#endif
