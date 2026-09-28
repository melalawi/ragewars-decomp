#include "basetypes.h"

extern f32 D_800C9938;
extern f32 D_800C9940;
extern f32 D_800C9948;
extern f32 D_800C9950;
extern f32 D_800C9958;
extern f32 D_800C995C;
extern f32 D_800C9960;
extern f32 D_800C9964;
extern f32 D_800C9968;
extern f32 D_800C9970;
extern f32 D_800C9978;
extern f32 D_800C997C;
extern f32 D_800C9980;
extern f32 D_800C9984;
extern f32 D_800C9988;
extern f32 D_800C9990;
extern f32 D_800C9998;

f32 func_80271CC4(f32 arg0, f32 arg1) {
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f0_3;
    f32 var_f0_4;
    f32 var_f14;

    var_f14 = arg1;
    var_f0_3 = var_f14;
    if (var_f14 < *(&D_800C9938 + 1)) {
        do {
            var_f0_3 += D_800C9940;
        } while (var_f0_3 < *(&D_800C9938 + 1));
    }
    if (*(&D_800C9940 + 1) < var_f0_3) {
        do {
            var_f0_3 -= D_800C9948;
        } while (*(&D_800C9940 + 1) < var_f0_3);
    }
    var_f0_4 = arg0 - var_f0_3;
    if (var_f0_4 < *(&D_800C9948 + 1)) {
        do {
            var_f0_4 += D_800C9950;
        } while (var_f0_4 < *(&D_800C9948 + 1));
    }
    if (*(&D_800C9950 + 1) < var_f0_4) {
        do {
            var_f0_4 -= D_800C9958;
        } while (*(&D_800C9950 + 1) < var_f0_4);
    }
    if (-var_f0_4 < 0.0f) {
        if (var_f14 < D_800C995C) {
            do {
                var_f14 += D_800C9960;
            } while (var_f14 < D_800C995C);
        }
        if (D_800C9964 < var_f14) {
            do {
                var_f14 -= D_800C9968;
            } while (D_800C9964 < var_f14);
        }
        var_f0_2 = arg0 - var_f14;
        if (var_f0_2 < *(&D_800C9968 + 1)) {
            do {
                var_f0_2 += D_800C9970;
            } while (var_f0_2 < *(&D_800C9968 + 1));
        }
        if (*(&D_800C9970 + 1) < var_f0_2) {
            do {
                var_f0_2 -= D_800C9978;
            } while (*(&D_800C9970 + 1) < var_f0_2);
            return var_f0_2;
        }
        return var_f0_2;
    }
    if (var_f14 < D_800C997C) {
        do {
            var_f14 += D_800C9980;
        } while (var_f14 < D_800C997C);
    }
    if (D_800C9984 < var_f14) {
        do {
            var_f14 -= D_800C9988;
        } while (D_800C9984 < var_f14);
    }
    var_f0 = arg0 - var_f14;
    if (var_f0 < *(&D_800C9988 + 1)) {
        do {
            var_f0 += D_800C9990;
        } while (var_f0 < *(&D_800C9988 + 1));
    }
    if (*(&D_800C9990 + 1) < var_f0) {
        do {
            var_f0 -= D_800C9998;
        } while (*(&D_800C9990 + 1) < var_f0);
    }
    return -var_f0;
}
