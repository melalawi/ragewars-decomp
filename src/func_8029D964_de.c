#include "span_1000/code_8029D984.h"
#include "types.h"


extern const f64 D_800C5B10_de;
extern const f64 D_800C5B18_de;
extern const f64 D_800C5B20_de;

f64 func_8029D964_de(f64 arg0) {
    f64 temp;
    f64 integral;
    f64 limit;

    limit = D_800C5B10_de;
    if (limit <= arg0) {
        return arg0;
    }
    if (arg0 < D_800C5B18_de) {
        return -func_8029D9DC_de(-arg0);
    }
    temp = arg0;
    temp += limit;
    temp -= limit;
    if (arg0 < temp) {
        integral = temp - D_800C5B20_de;
    } else {
        integral = temp;
    }
    return integral;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const double unbake_rodata_800C5A40_8 = 4503599627370496.0;
const double unbake_rodata_800C5A48_8 = 0.0;
const double unbake_rodata_800C5A50_8 = 1.0;
#elif defined(VERSION_US_REV1)
const double unbake_rodata_800CACA0_8 = 4503599627370496.0;
const double unbake_rodata_800CACA8_8 = 0.0;
const double unbake_rodata_800CACB0_8 = 1.0;
#elif defined(VERSION_EU)
const double unbake_rodata_800C5DB0_8 = 4503599627370496.0;
const double unbake_rodata_800C5DB8_8 = 0.0;
const double unbake_rodata_800C5DC0_8 = 1.0;
#elif defined(VERSION_EU_X)
const double unbake_rodata_800C5DF0_8 = 4503599627370496.0;
const double unbake_rodata_800C5DF8_8 = 0.0;
const double unbake_rodata_800C5E00_8 = 1.0;
#elif defined(VERSION_DE)
const double unbake_rodata_800C5B10_8 = 4503599627370496.0;
const double unbake_rodata_800C5B18_8 = 0.0;
const double unbake_rodata_800C5B20_8 = 1.0;
#endif
