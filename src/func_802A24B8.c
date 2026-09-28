#include "basetypes.h"

extern f32 D_800CAF10;
extern f32 D_800D2BDC[3];
extern f32 D_800D2BE8[3];
extern s32 D_8014D2E0[];
extern s32 D_8014D320;
extern s32 D_8014D328;

void func_802A24B8(void) {
    s32 index;
    s32 value;
    s32 amount;
    f32 fvalue;

    index = D_8014D320;
    value = D_8014D2E0[index];
    amount = value - D_8014D328;
    fvalue = D_800D2BE8[0] + (f32)-amount;
    D_8014D320 = index - 1;
    D_8014D328 = value;
    D_800D2BE8[0] = fvalue;
    if (fvalue < D_800CAF10) {
        D_800D2BE8[0] = D_800CAF10;
    }
    if (D_800D2BE8[0] > *(&D_800CAF10 + 1)) {
        D_800D2BE8[0] = *(&D_800CAF10 + 1);
    }
    if (D_800D2BE8[0] < D_800D2BE8[1]) {
        D_800D2BE8[1] = D_800D2BE8[0];
    }
    if (D_800D2BE8[2] < D_800D2BE8[0]) {
        D_800D2BE8[2] = D_800D2BE8[0];
    }

    D_800D2BDC[0] += (f32)amount;
    if (D_800D2BDC[0] < D_800CAF10) {
        D_800D2BDC[0] = D_800CAF10;
    }
    if (*(&D_800CAF10 + 1) < D_800D2BDC[0]) {
        D_800D2BDC[0] = *(&D_800CAF10 + 1);
    }
    if (D_800D2BDC[0] < D_800D2BDC[1]) {
        D_800D2BDC[1] = D_800D2BDC[0];
    }
    if (D_800D2BDC[2] < D_800D2BDC[0]) {
        D_800D2BDC[2] = D_800D2BDC[0];
    }
}
