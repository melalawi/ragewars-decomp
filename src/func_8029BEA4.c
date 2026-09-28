/* Raises x to the power y: 1 for a zero exponent, 0 or infinity for a zero base, exp(y log x) through func_8029BD38 (log) and an inline exponential scaled by func_8029BBA0 (ldexp) for a positive base, and for a negative base the same magnitude signed by the parity of an integer exponent, or negated when the exponent's reciprocal is odd, otherwise negative infinity. */
#include "basetypes.h"

extern f64 func_8029BBA0(f64 value, s32 exponent);
extern f64 func_8029BD38(f64 value);

static inline f64 exp_inline(f64 x) {
    f64 t;
    f64 r;
    f64 p;
    s32 k;

    if (-2.710504946537621e-20 < x && x < 2.710504946537621e-20) {
        return 1.0;
    }
    t = x * 1.4426950216293335;
    k = t;
    if (k < 0) {
        k--;
    }
    if (0.5 <= t - k) {
        k++;
    }
    r = x - k * 0.693359375 + k * 0.00021219444170128557;
    t = r * r;
    p = ((t * 1.652032915444579e-05 + 0.006943599786609411) * t + 0.25) * r;
    return func_8029BBA0(p / ((t * 0.00049586285604164 + 0.0555538684129715) * t + 0.5 - p) + 0.5, k + 1);
}

f64 func_8029BEA4(f64 x, f64 y) {
    s32 k;
    f64 t;

    if (y == 0.0) {
        return 1.0;
    }
    if (x == 0.0) {
        if (y < 0.0) {
            return 1.0 / 0.0;
        }
        return 0.0;
    }
    if (x < 0.0) {
        k = y;
        if (k == y) {
            t = func_8029BD38(-x) * y;
            if (k & 1) {
                return -exp_inline(t);
            }
            return exp_inline(t);
        }
        k = 1.0 / y;
        if (!(-2.710504946537621e-20 < y - k * y && y - k * y < 2.710504946537621e-20 && (k & 1))) {
            return -1.0 / 0.0;
        }
        return -exp_inline(func_8029BD38(-x) * y);
    }
    return exp_inline(func_8029BD38(x) * y);
}
