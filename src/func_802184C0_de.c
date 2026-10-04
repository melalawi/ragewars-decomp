#include "span_1000/code_8021762C.h"
#include "span_C76B0/data.h"
#include "types.h"

extern void func_80274020_de(f32 *arg0);


extern f32 D_800CD738;

f32 func_802184C0_de(f32 arg0, f32 arg1, s32 arg2, f32 arg3) {
    f32 f0;
    f32 f1;
    f32 f2;
    f32 f3;

    func_80274020_de(&arg0);
    func_80274020_de(&arg1);
    if (arg2 > 0) {
        if (arg1 < arg0) {
            arg1 += D_800C2250_de;
        }
    } else if (arg1 > arg0) {
        arg1 -= D_800C2254_de;
    }
    f3 = arg1 - arg0;
    f1 = f3 * arg3 * D_800CD738;
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
