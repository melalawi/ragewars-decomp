#include "span_1000/code_8029D984.h"
#include "types.h"


extern const f64 D_800C5B48_de;
extern const f64 D_800C5B50_de;
extern const f64 D_800C5B58_de;

f64 func_8029DAA0_de(f64 arg0, f64 *arg2) {
    f64 temp;
    f64 integral;
    f64 limit;

    limit = D_800C5B48_de;
    if (limit <= arg0) {
        integral = arg0;
    } else {
        if (arg0 < D_800C5B50_de) {
            integral = -func_8029D9DC_de(-arg0);
        } else {
            temp = arg0;
            temp += limit;
            temp -= limit;
            if (arg0 < temp) {
                integral = temp - D_800C5B58_de;
            } else {
                integral = temp;
            }
        }
    }
    *arg2 = integral;
    return arg0 - integral;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const double unbake_rodata_800C5A78_8 = 4503599627370496.0;
const double unbake_rodata_800C5A80_8 = 0.0;
const double unbake_rodata_800C5A88_8 = 1.0;
#elif defined(VERSION_US_REV1)
const double unbake_rodata_800CACD8_8 = 4503599627370496.0;
const double unbake_rodata_800CACE0_8 = 0.0;
const double unbake_rodata_800CACE8_8 = 1.0;
#elif defined(VERSION_EU)
const double unbake_rodata_800C5DE8_8 = 4503599627370496.0;
const double unbake_rodata_800C5DF0_8 = 0.0;
const double unbake_rodata_800C5DF8_8 = 1.0;
#elif defined(VERSION_EU_X)
const double unbake_rodata_800C5E28_8 = 4503599627370496.0;
const double unbake_rodata_800C5E30_8 = 0.0;
const double unbake_rodata_800C5E38_8 = 1.0;
#elif defined(VERSION_DE)
const double unbake_rodata_800C5B48_8 = 4503599627370496.0;
const double unbake_rodata_800C5B50_8 = 0.0;
const double unbake_rodata_800C5B58_8 = 1.0;
#endif
