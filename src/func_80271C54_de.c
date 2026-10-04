#include "span_1000/code_8026E5DC.h"
#include "span_C76B0/data.h"
#include "types.h"

















extern f32 D_800C48A8_de;

f32 func_80271C54_de(f32 arg0, f32 arg1) {
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f0_3;
    f32 var_f0_4;
    f32 var_f14;

    var_f14 = arg1;
    var_f0_3 = var_f14;
    if (var_f14 < *(&D_800C4848_de + 1)) {
        do {
            var_f0_3 += D_800C4850_de;
        } while (var_f0_3 < *(&D_800C4848_de + 1));
    }
    if (*(&D_800C4850_de + 1) < var_f0_3) {
        do {
            var_f0_3 -= D_800C4858_de;
        } while (*(&D_800C4850_de + 1) < var_f0_3);
    }
    var_f0_4 = arg0 - var_f0_3;
    if (var_f0_4 < *(&D_800C4858_de + 1)) {
        do {
            var_f0_4 += D_800C4860_de;
        } while (var_f0_4 < *(&D_800C4858_de + 1));
    }
    if (*(&D_800C4860_de + 1) < var_f0_4) {
        do {
            var_f0_4 -= D_800C4868_de;
        } while (*(&D_800C4860_de + 1) < var_f0_4);
    }
    if (-var_f0_4 < 0.0f) {
        if (var_f14 < D_800C486C_de) {
            do {
                var_f14 += D_800C4870_de;
            } while (var_f14 < D_800C486C_de);
        }
        if (D_800C4874_de < var_f14) {
            do {
                var_f14 -= D_800C4878_de;
            } while (D_800C4874_de < var_f14);
        }
        var_f0_2 = arg0 - var_f14;
        if (var_f0_2 < *(&D_800C4878_de + 1)) {
            do {
                var_f0_2 += D_800C4880_de;
            } while (var_f0_2 < *(&D_800C4878_de + 1));
        }
        if (*(&D_800C4880_de + 1) < var_f0_2) {
            do {
                var_f0_2 -= D_800C4888_de;
            } while (*(&D_800C4880_de + 1) < var_f0_2);
            return var_f0_2;
        }
        return var_f0_2;
    }
    if (var_f14 < D_800C488C_de) {
        do {
            var_f14 += D_800C4890_de;
        } while (var_f14 < D_800C488C_de);
    }
    if (D_800C4894_de < var_f14) {
        do {
            var_f14 -= D_800C4898_de;
        } while (D_800C4894_de < var_f14);
    }
    var_f0 = arg0 - var_f14;
    if (var_f0 < *(&D_800C4898_de + 1)) {
        do {
            var_f0 += D_800C48A0_de;
        } while (var_f0 < *(&D_800C4898_de + 1));
    }
    if (*(&D_800C48A0_de + 1) < var_f0) {
        do {
            var_f0 -= D_800C48A8_de;
        } while (*(&D_800C48A0_de + 1) < var_f0);
    }
    return -var_f0;
}
