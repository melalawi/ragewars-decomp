#include "basetypes.h"

extern f32 D_800CAF18;
extern f32 D_800D2BDC[3];
extern f32 D_800D2BF4[3];
extern s32 D_8014D324;

s32 func_802A25E4(s32 arg0) {
    s32 amount;
    s32 result;

    amount = (arg0 + 7) & -8;
    D_800D2BF4[0] += (f32)amount;
    result = D_8014D324 - amount;
    D_8014D324 = result;
    if (D_800D2BF4[0] < D_800CAF18) {
        D_800D2BF4[0] = D_800CAF18;
    }
    if (D_800D2BF4[0] > *(&D_800CAF18 + 1)) {
        D_800D2BF4[0] = *(&D_800CAF18 + 1);
    }
    if (D_800D2BF4[0] < D_800D2BF4[1]) {
        D_800D2BF4[1] = D_800D2BF4[0];
    }
    if (D_800D2BF4[2] < D_800D2BF4[0]) {
        D_800D2BF4[2] = D_800D2BF4[0];
    }

    D_800D2BDC[0] += (f32)-amount;
    if (D_800D2BDC[0] < D_800CAF18) {
        D_800D2BDC[0] = D_800CAF18;
    }
    if (*(&D_800CAF18 + 1) < D_800D2BDC[0]) {
        D_800D2BDC[0] = *(&D_800CAF18 + 1);
    }
    if (D_800D2BDC[0] < D_800D2BDC[1]) {
        D_800D2BDC[1] = D_800D2BDC[0];
    }
    if (D_800D2BDC[2] < D_800D2BDC[0]) {
        D_800D2BDC[2] = D_800D2BDC[0];
    }
    return result;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C5CB8_4 = (-100000000.0f);
const float unbake_rodata_800C5CBC_4 = 100000000.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CAF18_4 = (-100000000.0f);
const float unbake_rodata_800CAF1C_4 = 100000000.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C6028_4 = (-100000000.0f);
const float unbake_rodata_800C602C_4 = 100000000.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C6068_4 = (-100000000.0f);
const float unbake_rodata_800C606C_4 = 100000000.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C5D88_4 = (-100000000.0f);
const float unbake_rodata_800C5D8C_4 = 100000000.0f;
#endif
