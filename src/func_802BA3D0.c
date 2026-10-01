#include "basetypes.h"

extern const f64 D_800CC960;
extern const f64 D_800CC968;
extern const f64 D_800CC970;
extern const f64 D_800CC978;
extern const f64 D_800CC980;

f64 func_802BA3D0(f64 arg0, s32 *arg2) {
    f64 value;

    *arg2 = 0;
    if (arg0 == D_800CC960) {
        return arg0;
    }
    value = __builtin_fabs(arg0);
    if (D_800CC968 <= value) {
        do {
            value *= D_800CC970;
            *arg2 += 1;
        } while (D_800CC968 <= value);
    }
    if (value < D_800CC978) {
        do {
            value += value;
            *arg2 -= 1;
        } while (value < D_800CC978);
    }
    if (!(D_800CC980 < arg0)) {
        value = -value;
    }
    return value;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const double unbake_rodata_800C7630_8 = 0.0;
const double unbake_rodata_800C7638_8 = 1.0;
const double unbake_rodata_800C7640_8 = 0.5;
const double unbake_rodata_800C7648_8 = 0.5;
const double unbake_rodata_800C7650_8 = 0.0;
#elif defined(VERSION_US_REV1)
const double unbake_rodata_800CC960_8 = 0.0;
const double unbake_rodata_800CC968_8 = 1.0;
const double unbake_rodata_800CC970_8 = 0.5;
const double unbake_rodata_800CC978_8 = 0.5;
const double unbake_rodata_800CC980_8 = 0.0;
#elif defined(VERSION_EU)
const double unbake_rodata_800C8300_8 = 0.0;
const double unbake_rodata_800C8308_8 = 1.0;
const double unbake_rodata_800C8310_8 = 0.5;
const double unbake_rodata_800C8318_8 = 0.5;
const double unbake_rodata_800C8320_8 = 0.0;
#elif defined(VERSION_EU_X)
const double unbake_rodata_800C8CD0_8 = 0.0;
const double unbake_rodata_800C8CD8_8 = 1.0;
const double unbake_rodata_800C8CE0_8 = 0.5;
const double unbake_rodata_800C8CE8_8 = 0.5;
const double unbake_rodata_800C8CF0_8 = 0.0;
#elif defined(VERSION_DE)
const double unbake_rodata_800C7710_8 = 0.0;
const double unbake_rodata_800C7718_8 = 1.0;
const double unbake_rodata_800C7720_8 = 0.5;
const double unbake_rodata_800C7728_8 = 0.5;
const double unbake_rodata_800C7730_8 = 0.0;
#endif
