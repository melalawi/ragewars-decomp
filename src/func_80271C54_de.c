#include "span_1000/code_80271B18.h"
#include "types.h"
#include "common/types_8a8189af7b05.h"
#include "common/types_1dc8418c21db.h"

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

/** Component-wise multiply two 3-vectors. */
void func_80271F00_de(Vec3 *result, Vec3 *left, Vec3 *right) {
    result->x = left->x * right->x;
    result->y = left->y * right->y;
    result->z = left->z * right->z;
}

/** Add two three-component vectors. */
void func_80271F34_de(Vec3 *result, Vec3 *left, Vec3 *right) {
    result->x = left->x + right->x;
    result->y = left->y + right->y;
    result->z = left->z + right->z;
}

/** Subtract the right vector from the left vector. */
void func_80271F68_de(Vec3 *arg0, Vec3 *arg1, Vec3 *arg2) {
    arg0->x = arg1->x - arg2->x;
    arg0->y = arg1->y - arg2->y;
    arg0->z = arg1->z - arg2->z;
}

/** Scale a 3-vector (arg1) by a scalar (arg2), store into arg0. */
void func_80271F9C_de(void *arg0, void *arg1, f32 arg2) {
    ((func_8024C864_S1 *)(arg0))->unk0 = ((func_8024C864_S1 *)(arg1))->unk0 * arg2;
    ((func_8024C864_S1 *)(arg0))->unk4 = ((func_8024C864_S1 *)(arg1))->unk4 * arg2;
    ((func_8024C864_S1 *)(arg0))->unk8 = ((func_8024C864_S1 *)(arg1))->unk8 * arg2;
}

/** Lerp a 3-component vector: out = a + t * (b - a). */
void func_80271FC8_de(void *arg0, f32 t, void *a, void *b) {
    ((func_8024C864_S1 *)(arg0))->unk0 = ((func_8024C864_S1 *)(a))->unk0 + (t * (((func_8024C864_S1 *)(b))->unk0 - ((func_8024C864_S1 *)(a))->unk0));
    ((func_8024C864_S1 *)(arg0))->unk4 = ((func_8024C864_S1 *)(a))->unk4 + (t * (((func_8024C864_S1 *)(b))->unk4 - ((func_8024C864_S1 *)(a))->unk4));
    ((func_8024C864_S1 *)(arg0))->unk8 = ((func_8024C864_S1 *)(a))->unk8 + (t * (((func_8024C864_S1 *)(b))->unk8 - ((func_8024C864_S1 *)(a))->unk8));
}
