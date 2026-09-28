#include "basetypes.h"

extern void func_80274090(f32 *arg0);
extern f32 D_800C7340;
extern f32 D_800C7344;
extern f32 D_800D2988;

f32 func_802184C0(f32 arg0, f32 arg1, s32 arg2, f32 arg3) {
    f32 f0;
    f32 f1;
    f32 f2;
    f32 f3;

    func_80274090(&arg0);
    func_80274090(&arg1);
    if (arg2 > 0) {
        if (arg1 < arg0) {
            arg1 += D_800C7340;
        }
    } else if (arg1 > arg0) {
        arg1 -= D_800C7344;
    }
    f3 = arg1 - arg0;
    f1 = f3 * arg3 * D_800D2988;
    f2 = f1;
    if (f1 < 0.0f) {
        f2 = -f1;
    }
    if (f3 < 0.0f) {
        if (-f3 < f2) {
            goto clamp;
        }
    } else if (f3 < f2) {
clamp:
        f1 = f3;
    }
    return f1;
}
