#include "basetypes.h"

extern f32 D_800C70C8;
extern f32 D_800C70CC;
extern f32 D_800C70D0;
extern f32 D_800C70D4;
extern f32 D_800C70D8;
extern f32 D_800C70DC;
extern f32 D_800C70E0;

s32 func_80210EFC(f32 arg0) {
    f32 var_f0;

    arg0 += D_800C70C8;
    if (D_800C70CC <= arg0) {
        do {
            arg0 -= D_800C70CC;
        } while (D_800C70CC <= arg0);
    }
    var_f0 = 0.0f;
    if (arg0 < var_f0) {
        do {
            arg0 += D_800C70D0;
        } while (arg0 < var_f0);
    }
    if (D_800C70D4 < arg0) {
        arg0 = D_800C70D4;
    }
    if (arg0 < D_800C70D8) {
        arg0 = D_800C70D8;
    }
    arg0 *= D_800C70DC;
    arg0 *= D_800C70E0;
    var_f0 = 0.0f;
    if (arg0 < var_f0) {
        arg0 = var_f0;
    }
    if (D_800C70E0 <= arg0) {
        arg0 = *(&D_800C70E0 + 1);
    }
    return (s32)arg0;
}
