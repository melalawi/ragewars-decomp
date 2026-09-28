#include "basetypes.h"

extern f32 D_800CAF08;
extern f32 D_800D2BDC[3];
extern f32 D_800D2BE8[3];
extern s32 D_8014D328;

s32 func_802A23A4(s32 arg0) {
    s32 amount;
    s32 result;
    f32 value;

    amount = (arg0 + 7) & -8;
    value = D_800D2BE8[0] + (f32)amount;
    result = D_8014D328;
    D_8014D328 = result + amount;
    D_800D2BE8[0] = value;
    if (value < D_800CAF08) {
        D_800D2BE8[0] = D_800CAF08;
    }
    if (D_800D2BE8[0] > *(&D_800CAF08 + 1)) {
        D_800D2BE8[0] = *(&D_800CAF08 + 1);
    }
    if (D_800D2BE8[0] < D_800D2BE8[1]) {
        D_800D2BE8[1] = D_800D2BE8[0];
    }
    if (D_800D2BE8[2] < D_800D2BE8[0]) {
        D_800D2BE8[2] = D_800D2BE8[0];
    }

    D_800D2BDC[0] += (f32)-amount;
    value = D_800D2BDC[0];
    if (value < D_800CAF08) {
        D_800D2BDC[0] = D_800CAF08;
    }
    if (*(&D_800CAF08 + 1) < D_800D2BDC[0]) {
        D_800D2BDC[0] = *(&D_800CAF08 + 1);
    }
    if (D_800D2BDC[0] < D_800D2BDC[1]) {
        D_800D2BDC[1] = D_800D2BDC[0];
    }
    if (D_800D2BDC[2] < D_800D2BDC[0]) {
        D_800D2BDC[2] = D_800D2BDC[0];
    }
    return result;
}
