#include "basetypes.h"

/* Rounds a double up to the next integer by the 2^52 add-and-subtract trick, handling negative values through an inlined round-down that recurses back into this function. Adapted from func_8029E964 with the rounding direction reversed, the negative case routed through an inline copy of the round-down and the constants changed. */
extern f64 func_8029E9DC(f64 arg0);
extern const f64 D_800CACB8;
extern const f64 D_800CACC0;
extern const f64 D_800CACC8;
extern const f64 D_800CACD0;

static inline f64 round_down(f64 arg0) {
    f64 temp;
    f64 integral;
    f64 limit;

    limit = D_800CACB8;
    if (limit <= arg0) {
        return arg0;
    }
    if (arg0 < D_800CACC0) {
        return -func_8029E9DC(-arg0);
    }
    temp = arg0;
    temp += limit;
    temp -= limit;
    if (arg0 < temp) {
        integral = temp - D_800CACC8;
    } else {
        integral = temp;
    }
    return integral;
}

f64 func_8029E9DC(f64 arg0) {
    f64 temp;
    f64 integral;
    f64 limit;

    limit = D_800CACB8;
    if (limit <= arg0) {
        return arg0;
    }
    if (arg0 < D_800CACC0) {
        return -round_down(-arg0);
    }
    temp = arg0;
    temp += limit;
    temp -= limit;
    if (temp < arg0) {
        integral = temp + D_800CACD0;
    } else {
        integral = temp;
    }
    return integral;
}
