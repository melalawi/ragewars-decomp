#include "basetypes.h"

extern f32 D_800CCF38;
extern f32 D_800CCF3C;
extern f32 D_800CCF40;
extern f32 D_800CCF44;

s16 func_802C5134(f32 arg0) {
    f32 f0;
    f32 f12;

    if (arg0 >= 0.0f) {
        f12 = arg0 + D_800CCF38;
        f0 = D_800CCF3C;
        if (f0 < f12) {
            f12 = f0;
        }
    } else {
        f12 = arg0 - D_800CCF40;
        f0 = D_800CCF44;
        if (f12 < f0) {
            f12 = f0;
        }
    }
    return (s16)(s32)f12;
}
