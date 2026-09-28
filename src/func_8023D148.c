#include "basetypes.h"

typedef struct Vector3 {
    f32 x;
    f32 y;
    f32 z;
} Vector3;

extern f32 D_800C8720;
extern void func_80240C7C(void *arg0);
extern void func_80271FD8(Vector3 *, Vector3 *, Vector3 *);
extern f32 func_802BC380(f32);
extern void func_8027200C(void *, void *, f32);
extern void func_8023F42C(void *arg0);
extern void func_80240250(void *arg0);
extern void func_80242BE0(void *arg0);
extern void func_80243910(void *arg0);

s32 func_8023D148(char *object) {
    s32 *flags = *(s32 **)(object + 0x40);
    f32 magnitude;
    f32 var_f0;
    f32 var_f1;
    f32 var_f0_2;
    f32 var_f1_2;
    f32 var_f2;
    f32 var_f0_3;

    func_80240C7C(object + 0xB0);
    func_80271FD8((Vector3 *)(object + 0x5C),
                  (Vector3 *)(object + 0x50),
                  (Vector3 *)(object + 0x44));
    magnitude = func_802BC380(
        (*(f32 *)(object + 0x5C) * *(f32 *)(object + 0x5C)) +
        (*(f32 *)(object + 0x60) * *(f32 *)(object + 0x60)) +
        (*(f32 *)(object + 0x64) * *(f32 *)(object + 0x64)));
    *(f32 *)(object + 0x80) = magnitude;
    if ((magnitude == 0.0f) && (*(s32 *)(object + 4) == 0)) {
        return 0;
    }

    if (*(f32 *)(object + 0x80) != 0.0f) {
        func_8027200C((Vector3 *)(object + 0x68),
                      (Vector3 *)(object + 0x5C),
                      D_800C8720 / *(f32 *)(object + 0x80));
    } else {
        *(Vector3 *)(object + 0x68) = *(Vector3 *)(object + 0x5C);
    }

    var_f0 = *(f32 *)(object + 0x50);
    if (!(var_f0 <= *(f32 *)(object + 0x44))) {
        var_f0 = *(f32 *)(object + 0x44);
    }
    *(f32 *)(object + 0x84) = var_f0;
    var_f1 = *(f32 *)(object + 0x50);
    if (!(*(f32 *)(object + 0x44) <= var_f1)) {
        var_f1 = *(f32 *)(object + 0x44);
    }
    *(f32 *)(object + 0x90) = var_f1;

    var_f0_2 = *(f32 *)(object + 0x54);
    if (!(var_f0_2 <= *(f32 *)(object + 0x48))) {
        var_f0_2 = *(f32 *)(object + 0x48);
    }
    *(f32 *)(object + 0x88) = var_f0_2;
    var_f1_2 = *(f32 *)(object + 0x54);
    if (!(*(f32 *)(object + 0x48) <= var_f1_2)) {
        var_f1_2 = *(f32 *)(object + 0x48);
    }
    *(f32 *)(object + 0x94) = var_f1_2;

    var_f2 = *(f32 *)(object + 0x58);
    if (!(var_f2 <= *(f32 *)(object + 0x4C))) {
        var_f2 = *(f32 *)(object + 0x4C);
    }
    *(f32 *)(object + 0x8C) = var_f2;
    var_f0_3 = *(f32 *)(object + 0x58);
    if (!(*(f32 *)(object + 0x4C) <= var_f0_3)) {
        var_f0_3 = *(f32 *)(object + 0x4C);
    }
    *(f32 *)(object + 0x98) = var_f0_3;

    *(f32 *)(object + 0x9C) = *(f32 *)(object + 0x84);
    *(f32 *)(object + 0xA4) = *(f32 *)(object + 0x90);
    *(f32 *)(object + 0xA8) = *(f32 *)(object + 0x98);
    *(f32 *)(object + 0xA0) = *(f32 *)(object + 0x8C);

    if (*flags & 0x200000) {
        func_8023F42C(object);
    }
    if (*(f32 *)(object + 0x80) != 0.0f) {
        if (*flags & 0x10000) {
            func_80240250(object);
        }
        if (*flags & 0x4000) {
            func_80242BE0(object);
        }
        if (*flags & 0x80000) {
            func_80243910(object);
        }
    }
    return *(s32 *)(object + 0xB0) != 0;
}
