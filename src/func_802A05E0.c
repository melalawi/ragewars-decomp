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

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const double unbake_rodata_800C5C00_8 = 1.0;
const double unbake_rodata_800C5C08_8 = 0.0;
const double unbake_rodata_800C5C10_8 = (-1.0);
const double unbake_rodata_800C5C18_8 = 0.0;
const double unbake_rodata_800C5C20_8 = 10.0;
const double unbake_rodata_800C5C28_8 = 0.0;
const double unbake_rodata_800C5C30_8 = 10.0;
const double unbake_rodata_800C5C38_8 = 1.0;
const double unbake_rodata_800C5C40_8 = (-1.0);
const double unbake_rodata_800C5C48_8 = 0.0;
const double unbake_rodata_800C5C50_8 = 10.0;
const double unbake_rodata_800C5C58_8 = 30.0;
const double unbake_rodata_800C5C60_8 = 0.0;
const double unbake_rodata_800C5C68_8 = 1.0;
const double unbake_rodata_800C5C70_8 = 10.0;
const double unbake_rodata_800C5C78_8 = 10.0;
const double unbake_rodata_800C5C80_8 = 0.0;
#elif defined(VERSION_US_REV1)
const double unbake_rodata_800CAE60_8 = 1.0;
const double unbake_rodata_800CAE68_8 = 0.0;
const double unbake_rodata_800CAE70_8 = (-1.0);
const double unbake_rodata_800CAE78_8 = 0.0;
const double unbake_rodata_800CAE80_8 = 10.0;
const double unbake_rodata_800CAE88_8 = 0.0;
const double unbake_rodata_800CAE90_8 = 10.0;
const double unbake_rodata_800CAE98_8 = 1.0;
const double unbake_rodata_800CAEA0_8 = (-1.0);
const double unbake_rodata_800CAEA8_8 = 0.0;
const double unbake_rodata_800CAEB0_8 = 10.0;
const double unbake_rodata_800CAEB8_8 = 30.0;
const double unbake_rodata_800CAEC0_8 = 0.0;
const double unbake_rodata_800CAEC8_8 = 1.0;
const double unbake_rodata_800CAED0_8 = 10.0;
const double unbake_rodata_800CAED8_8 = 10.0;
const double unbake_rodata_800CAEE0_8 = 0.0;
#elif defined(VERSION_EU)
const double unbake_rodata_800C5F70_8 = 1.0;
const double unbake_rodata_800C5F78_8 = 0.0;
const double unbake_rodata_800C5F80_8 = (-1.0);
const double unbake_rodata_800C5F88_8 = 0.0;
const double unbake_rodata_800C5F90_8 = 10.0;
const double unbake_rodata_800C5F98_8 = 0.0;
const double unbake_rodata_800C5FA0_8 = 10.0;
const double unbake_rodata_800C5FA8_8 = 1.0;
const double unbake_rodata_800C5FB0_8 = (-1.0);
const double unbake_rodata_800C5FB8_8 = 0.0;
const double unbake_rodata_800C5FC0_8 = 10.0;
const double unbake_rodata_800C5FC8_8 = 30.0;
const double unbake_rodata_800C5FD0_8 = 0.0;
const double unbake_rodata_800C5FD8_8 = 1.0;
const double unbake_rodata_800C5FE0_8 = 10.0;
const double unbake_rodata_800C5FE8_8 = 10.0;
const double unbake_rodata_800C5FF0_8 = 0.0;
#elif defined(VERSION_EU_X)
const double unbake_rodata_800C5FB0_8 = 1.0;
const double unbake_rodata_800C5FB8_8 = 0.0;
const double unbake_rodata_800C5FC0_8 = (-1.0);
const double unbake_rodata_800C5FC8_8 = 0.0;
const double unbake_rodata_800C5FD0_8 = 10.0;
const double unbake_rodata_800C5FD8_8 = 0.0;
const double unbake_rodata_800C5FE0_8 = 10.0;
const double unbake_rodata_800C5FE8_8 = 1.0;
const double unbake_rodata_800C5FF0_8 = (-1.0);
const double unbake_rodata_800C5FF8_8 = 0.0;
const double unbake_rodata_800C6000_8 = 10.0;
const double unbake_rodata_800C6008_8 = 30.0;
const double unbake_rodata_800C6010_8 = 0.0;
const double unbake_rodata_800C6018_8 = 1.0;
const double unbake_rodata_800C6020_8 = 10.0;
const double unbake_rodata_800C6028_8 = 10.0;
const double unbake_rodata_800C6030_8 = 0.0;
#elif defined(VERSION_DE)
const double unbake_rodata_800C5CD0_8 = 1.0;
const double unbake_rodata_800C5CD8_8 = 0.0;
const double unbake_rodata_800C5CE0_8 = (-1.0);
const double unbake_rodata_800C5CE8_8 = 0.0;
const double unbake_rodata_800C5CF0_8 = 10.0;
const double unbake_rodata_800C5CF8_8 = 0.0;
const double unbake_rodata_800C5D00_8 = 10.0;
const double unbake_rodata_800C5D08_8 = 1.0;
const double unbake_rodata_800C5D10_8 = (-1.0);
const double unbake_rodata_800C5D18_8 = 0.0;
const double unbake_rodata_800C5D20_8 = 10.0;
const double unbake_rodata_800C5D28_8 = 30.0;
const double unbake_rodata_800C5D30_8 = 0.0;
const double unbake_rodata_800C5D38_8 = 1.0;
const double unbake_rodata_800C5D40_8 = 10.0;
const double unbake_rodata_800C5D48_8 = 10.0;
const double unbake_rodata_800C5D50_8 = 0.0;
#endif
