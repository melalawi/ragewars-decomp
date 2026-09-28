#include "basetypes.h"

extern f64 D_800CAE60;
extern f64 D_800CAE68;
extern f64 D_800CAE70;
extern f64 D_800CAE78;
extern f64 D_800CAE80;
extern f64 D_800CAE88;
extern f64 D_800CAE90;
extern f64 D_800CAE98;
extern f64 D_800CAEA0;
extern f64 D_800CAEA8;
extern f64 D_800CAEB0;
extern f64 D_800CAEB8;
extern f64 D_800CAEC0;
extern f64 D_800CAEC8;
extern f64 D_800CAED0;
extern f64 D_800CAED8;
extern f64 D_800CAEE0;

extern f64 func_8029BEA4(f64 arg0, f64 arg1);

f64 func_802A05E0(u8 *arg0) {
    f64 sign;
    f64 divisor;
    f64 value;
    f64 fraction;
    f64 exponentSign;
    f64 exponent;
    f64 scale;
    f64 threshold;

    sign = D_800CAE60;
    fraction = D_800CAE68;
    divisor = sign;
    if (*arg0 == 0x20) {
        do {
            arg0++;
        } while (*arg0 == 0x20);
    }
    if (*arg0 == 0x2D) {
        arg0++;
        sign = D_800CAE70;
    }
    if (*arg0 == 0x2B) {
        arg0++;
    }

    value = D_800CAE78;
    if ((u32)(*arg0 - 0x30) < 10) {
        do {
            value = value * D_800CAE80 + (f64)(*arg0 - 0x30);
            arg0++;
        } while ((u32)(*arg0 - 0x30) < 10);
    }

    if (*arg0 == 0x2E) {
        arg0++;
        fraction = D_800CAE88;
        if ((u32)(*arg0 - 0x30) < 10) {
            do {
                divisor *= D_800CAE90;
                fraction = fraction * D_800CAE90 + (f64)(*arg0 - 0x30);
                arg0++;
            } while ((u32)(*arg0 - 0x30) < 10);
        }
    }

    if (*arg0 == 0x65 || *arg0 == 0x45) {
        arg0++;
        exponentSign = D_800CAE98;
        if (*arg0 == 0x2D) {
            arg0++;
            exponentSign = D_800CAEA0;
        }
        if (*arg0 == 0x2B) {
            arg0++;
        }
        exponent = D_800CAEA8;
        if ((u32)(*arg0 - 0x30) < 10) {
            do {
                exponent = exponent * D_800CAEB0 + (f64)(*arg0 - 0x30);
                arg0++;
            } while ((u32)(*arg0 - 0x30) < 10);
        }
        if (exponent < D_800CAEB8) {
            threshold = D_800CAEC0;
            scale = D_800CAEC8;
            if (exponent == threshold) {
                goto compare_sign;
            } else {
                do {
                    scale *= D_800CAED0;
                    exponent -= D_800CAEC8;
                } while (exponent != threshold);
            }
            goto set_threshold;
        } else {
            scale = func_8029BEA4(D_800CAED8, exponent);
        }
set_threshold:
        threshold = D_800CAEE0;
compare_sign:
        if (exponentSign < threshold) {
            return sign * (value + fraction / divisor) / scale;
        }
        return sign * (value + fraction / divisor) * scale;
    }
    return sign * (value + fraction / divisor);
}
