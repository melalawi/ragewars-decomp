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

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const double unbake_rodata_800C5A98_8 = (-2.7105049465376212e-20);
const double unbake_rodata_800C5AA0_8 = 2.7105049465376212e-20;
const double unbake_rodata_800C5AA8_8 = 1.0;
const double unbake_rodata_800C5AB0_8 = 1.4426950216293335;
const double unbake_rodata_800C5AB8_8 = 0.5;
const double unbake_rodata_800C5AC0_8 = 0.693359375;
const double unbake_rodata_800C5AC8_8 = 0.00021219444170128557;
const double unbake_rodata_800C5AD0_8 = 1.652032915444579e-05;
const double unbake_rodata_800C5AD8_8 = 0.0069435997866094112;
const double unbake_rodata_800C5AE0_8 = 0.00049586285604164004;
const double unbake_rodata_800C5AE8_8 = 0.055553868412971497;
const double unbake_rodata_800C5AF0_8 = 0.25;
#elif defined(VERSION_US_REV1)
const double unbake_rodata_800CACF8_8 = (-2.7105049465376212e-20);
const double unbake_rodata_800CAD00_8 = 2.7105049465376212e-20;
const double unbake_rodata_800CAD08_8 = 1.0;
const double unbake_rodata_800CAD10_8 = 1.4426950216293335;
const double unbake_rodata_800CAD18_8 = 0.5;
const double unbake_rodata_800CAD20_8 = 0.693359375;
const double unbake_rodata_800CAD28_8 = 0.00021219444170128557;
const double unbake_rodata_800CAD30_8 = 1.652032915444579e-05;
const double unbake_rodata_800CAD38_8 = 0.0069435997866094112;
const double unbake_rodata_800CAD40_8 = 0.00049586285604164004;
const double unbake_rodata_800CAD48_8 = 0.055553868412971497;
const double unbake_rodata_800CAD50_8 = 0.25;
#elif defined(VERSION_EU)
const double unbake_rodata_800C5E08_8 = (-2.7105049465376212e-20);
const double unbake_rodata_800C5E10_8 = 2.7105049465376212e-20;
const double unbake_rodata_800C5E18_8 = 1.0;
const double unbake_rodata_800C5E20_8 = 1.4426950216293335;
const double unbake_rodata_800C5E28_8 = 0.5;
const double unbake_rodata_800C5E30_8 = 0.693359375;
const double unbake_rodata_800C5E38_8 = 0.00021219444170128557;
const double unbake_rodata_800C5E40_8 = 1.652032915444579e-05;
const double unbake_rodata_800C5E48_8 = 0.0069435997866094112;
const double unbake_rodata_800C5E50_8 = 0.00049586285604164004;
const double unbake_rodata_800C5E58_8 = 0.055553868412971497;
const double unbake_rodata_800C5E60_8 = 0.25;
#elif defined(VERSION_EU_X)
const double unbake_rodata_800C5E48_8 = (-2.7105049465376212e-20);
const double unbake_rodata_800C5E50_8 = 2.7105049465376212e-20;
const double unbake_rodata_800C5E58_8 = 1.0;
const double unbake_rodata_800C5E60_8 = 1.4426950216293335;
const double unbake_rodata_800C5E68_8 = 0.5;
const double unbake_rodata_800C5E70_8 = 0.693359375;
const double unbake_rodata_800C5E78_8 = 0.00021219444170128557;
const double unbake_rodata_800C5E80_8 = 1.652032915444579e-05;
const double unbake_rodata_800C5E88_8 = 0.0069435997866094112;
const double unbake_rodata_800C5E90_8 = 0.00049586285604164004;
const double unbake_rodata_800C5E98_8 = 0.055553868412971497;
const double unbake_rodata_800C5EA0_8 = 0.25;
#elif defined(VERSION_DE)
const double unbake_rodata_800C5B68_8 = (-2.7105049465376212e-20);
const double unbake_rodata_800C5B70_8 = 2.7105049465376212e-20;
const double unbake_rodata_800C5B78_8 = 1.0;
const double unbake_rodata_800C5B80_8 = 1.4426950216293335;
const double unbake_rodata_800C5B88_8 = 0.5;
const double unbake_rodata_800C5B90_8 = 0.693359375;
const double unbake_rodata_800C5B98_8 = 0.00021219444170128557;
const double unbake_rodata_800C5BA0_8 = 1.652032915444579e-05;
const double unbake_rodata_800C5BA8_8 = 0.0069435997866094112;
const double unbake_rodata_800C5BB0_8 = 0.00049586285604164004;
const double unbake_rodata_800C5BB8_8 = 0.055553868412971497;
const double unbake_rodata_800C5BC0_8 = 0.25;
#endif
