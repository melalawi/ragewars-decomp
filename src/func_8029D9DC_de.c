#include "span_1000/code_8029D984.h"
#include "types.h"

/* Rounds a double up to the next integer by the 2^52 add-and-subtract trick, handling negative values through an inlined round-down that recurses back into this function. Adapted from func_8029D964_de with the rounding direction reversed, the negative case routed through an inline copy of the round-down and the constants changed. */

extern const f64 D_800C5B28_de;
extern const f64 D_800C5B30_de;
extern const f64 D_800C5B38_de;
extern const f64 D_800C5B40_de;

static inline f64 round_down(f64 arg0) {
    f64 temp;
    f64 integral;
    f64 limit;

    limit = D_800C5B28_de;
    if (limit <= arg0) {
        return arg0;
    }
    if (arg0 < D_800C5B30_de) {
        return -func_8029D9DC_de(-arg0);
    }
    temp = arg0;
    temp += limit;
    temp -= limit;
    if (arg0 < temp) {
        integral = temp - D_800C5B38_de;
    } else {
        integral = temp;
    }
    return integral;
}

f64 func_8029D9DC_de(f64 arg0) {
    f64 temp;
    f64 integral;
    f64 limit;

    limit = D_800C5B28_de;
    if (limit <= arg0) {
        return arg0;
    }
    if (arg0 < D_800C5B30_de) {
        return -round_down(-arg0);
    }
    temp = arg0;
    temp += limit;
    temp -= limit;
    if (temp < arg0) {
        integral = temp + D_800C5B40_de;
    } else {
        integral = temp;
    }
    return integral;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const double unbake_rodata_800C5A58_8 = 4503599627370496.0;
const double unbake_rodata_800C5A60_8 = 0.0;
const double unbake_rodata_800C5A68_8 = 1.0;
const double unbake_rodata_800C5A70_8 = 1.0;
#elif defined(VERSION_US_REV1)
const double unbake_rodata_800CACB8_8 = 4503599627370496.0;
const double unbake_rodata_800CACC0_8 = 0.0;
const double unbake_rodata_800CACC8_8 = 1.0;
const double unbake_rodata_800CACD0_8 = 1.0;
#elif defined(VERSION_EU)
const double unbake_rodata_800C5DC8_8 = 4503599627370496.0;
const double unbake_rodata_800C5DD0_8 = 0.0;
const double unbake_rodata_800C5DD8_8 = 1.0;
const double unbake_rodata_800C5DE0_8 = 1.0;
#elif defined(VERSION_EU_X)
const double unbake_rodata_800C5E08_8 = 4503599627370496.0;
const double unbake_rodata_800C5E10_8 = 0.0;
const double unbake_rodata_800C5E18_8 = 1.0;
const double unbake_rodata_800C5E20_8 = 1.0;
#elif defined(VERSION_DE)
const double unbake_rodata_800C5B28_8 = 4503599627370496.0;
const double unbake_rodata_800C5B30_8 = 0.0;
const double unbake_rodata_800C5B38_8 = 1.0;
const double unbake_rodata_800C5B40_8 = 1.0;
#endif
