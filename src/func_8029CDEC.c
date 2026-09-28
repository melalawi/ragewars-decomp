/* Returns the hyperbolic tangent of a double: 1 beyond 25.3, 1 - 2/(exp(2|x|) + 1) above atanh(0.5) with exp computed inline by a rational approximation scaled by func_8029BBA0 (ldexp), and the odd rational series x + x^3 P(x^2)/Q(x^2) for small arguments, with the sign of x restored. */
#include "basetypes.h"

extern f64 func_8029BBA0(f64 value, s32 exponent);

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

f64 func_8029CDEC(f64 x) {
    f64 z;
    f64 s;
    f64 result;

    z = x;
    if (x < 0.0) {
        z = -x;
    }
    if (z > 25.299999237060547) {
        result = 1.0;
    } else if (z > 0.5493061542510986) {
        result = exp_inline(z + z);
        result = 0.5 - 1.0 / (result + 1.0);
        result = result + result;
    } else if (z < 2.3000000515249751e-10) {
        result = z;
    } else {
        s = z * z;
        result = z + z * (((s * -0.9643748998641968 - 99.2259292602539) * s - 1613.411865234375) * s)
                / (((s + 112.74474334716795) * s + 2233.77197265625) * s + 4840.23583984375);
    }
    if (x < 0.0) {
        result = -result;
    }
    return result;
}
