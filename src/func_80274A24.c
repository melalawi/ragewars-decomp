#include "basetypes.h"

extern f32 D_800C9A68;
extern f32 D_800C9A70;
extern f32 D_800C9A78;
extern f32 D_800C9A80;

f32 func_80274A24(f32 arg0, f32 arg1) {
    f32 var_f0;
    f32 var_f14;

    var_f14 = arg1;
    if (var_f14 < D_800C9A68) {
        do {
            var_f14 += *(&D_800C9A68 + 1);
        } while (var_f14 < D_800C9A68);
    }
    if (D_800C9A70 < var_f14) {
        do {
            var_f14 -= *(&D_800C9A70 + 1);
        } while (D_800C9A70 < var_f14);
    }
    var_f0 = arg0 - var_f14;
    if (var_f0 < D_800C9A78) {
        do {
            var_f0 += *(&D_800C9A78 + 1);
        } while (var_f0 < D_800C9A78);
    }
    if (D_800C9A80 < var_f0) {
        do {
            var_f0 -= *(&D_800C9A80 + 1);
        } while (D_800C9A80 < var_f0);
    }
    return -var_f0;
}
