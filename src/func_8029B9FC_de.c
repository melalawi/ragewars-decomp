#include "span_1000/code_8029AC80.h"
#include "span_C76B0/data.h"
#include "types.h"









extern f64 func_8029B278_de(f64, f64);

f32 func_8029B9FC_de(f32 arg0) {
    f32 temp_f2;
    f32 var_f0;
    f32 var_f1;
    f32 var_f20;
    s32 var_s0;

    var_f20 = arg0;
    var_s0 = 1;
    var_f1 = var_f20;
    if ((D_800C58B8_de < var_f20) || (var_f20 < (-25.13274383544922f))) {
        func_8029B278_de((f64)var_f20, D_800C58C0_de);
    } else {
        if (D_800C58C8_de < var_f20) {
            do {
                var_f1 -= D_800C58C8_de;
            } while (D_800C58C8_de < var_f1);
        }
        var_f0 = 0.0f;
        if (var_f1 < var_f0) {
            do {
                var_f1 += (6.283185958862305f);
            } while (var_f1 < var_f0);
        }
    }
    if (var_f20 < D_800C58D0_de) {
        do {
            var_f20 += *(&D_800C58D0_de + 1);
        } while (var_f20 < D_800C58D0_de);
    }
    if (D_800C58D8_de < var_f20) {
        do {
            var_f20 -= *(&D_800C58D8_de + 1);
        } while (D_800C58D8_de < var_f20);
    }
    if (D_800C58E0_de < var_f20) {
        var_s0 = -1;
        var_f20 -= (3.1415927410125732f);
    }
    temp_f2 = var_f20 * var_f20;
    var_f0 = (((((((temp_f2 * D_800C58E8_de) - *(&D_800C58E8_de + 1)) * temp_f2) + D_800C58F0_de) * temp_f2) - *(&D_800C58F0_de + 1)) * temp_f2 * var_f20) + var_f20;
    if (var_s0 < 0) {
        var_f0 = -var_f0;
    }
    return var_f0;
}
