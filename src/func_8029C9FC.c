#include "basetypes.h"

extern f32 D_800CAA48;
extern f32 D_800CAA4C;
extern f64 D_800CAA50;
extern f32 D_800CAA58;
extern f32 D_800CAA5C;
extern f32 D_800CAA60;
extern f32 D_800CAA68;
extern f32 D_800CAA70;
extern f32 D_800CAA74;
extern f32 D_800CAA78;
extern f32 D_800CAA80;
extern f64 func_8029C278(f64, f64);

f32 func_8029C9FC(f32 arg0) {
    f32 temp_f2;
    f32 var_f0;
    f32 var_f1;
    f32 var_f20;
    s32 var_s0;

    var_f20 = arg0;
    var_s0 = 1;
    var_f1 = var_f20;
    if ((D_800CAA48 < var_f20) || (var_f20 < D_800CAA4C)) {
        func_8029C278((f64)var_f20, D_800CAA50);
    } else {
        if (D_800CAA58 < var_f20) {
            do {
                var_f1 -= D_800CAA58;
            } while (D_800CAA58 < var_f1);
        }
        var_f0 = 0.0f;
        if (var_f1 < var_f0) {
            do {
                var_f1 += D_800CAA5C;
            } while (var_f1 < var_f0);
        }
    }
    if (var_f20 < D_800CAA60) {
        do {
            var_f20 += *(&D_800CAA60 + 1);
        } while (var_f20 < D_800CAA60);
    }
    if (D_800CAA68 < var_f20) {
        do {
            var_f20 -= *(&D_800CAA68 + 1);
        } while (D_800CAA68 < var_f20);
    }
    if (D_800CAA70 < var_f20) {
        var_s0 = -1;
        var_f20 -= D_800CAA74;
    }
    temp_f2 = var_f20 * var_f20;
    var_f0 = (((((((temp_f2 * D_800CAA78) - *(&D_800CAA78 + 1)) * temp_f2) + D_800CAA80) * temp_f2) - *(&D_800CAA80 + 1)) * temp_f2 * var_f20) + var_f20;
    if (var_s0 < 0) {
        var_f0 = -var_f0;
    }
    return var_f0;
}
