#include "basetypes.h"

typedef struct Pair {
    s32 x;
    s32 y;
} Pair;

typedef struct Triple {
    s32 x;
    s32 y;
    s32 z;
} Triple;

typedef struct Vec3 {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

extern s32 D_8011FE88;
extern char D_80121990;
extern f32 D_800C9F48[];
extern f32 D_800C9F50;

extern void *func_802A101C(void *, s32, u32);
extern s32 func_8025DE74(s16, Vec3, s32, s32);
extern void func_8022B540(void *, f32, f32, void *, s32);
extern void func_8028CE70(void *, void *, s32, Triple, f32, f32);
extern s32 func_8028403C(void *);
extern void func_80265E30(void *, void *, s32, s32, Triple, Pair);
extern void func_80279BB0(void *, s32, s8, s32);
extern void func_80284544(void *, void *);
extern s32 func_80284408(void *);

void func_80282E6C(void *arg0, void *arg1) {
    Triple scratch;
    Pair pair;
    s32 temp_a1;
    s32 temp_v0;
    s32 var_a0;
    s32 temp_a2;
    s32 temp_s2;
    s32 temp_s3;
    void *temp_s1;
    void *temp_v0_2;
    void *temp_v1;

    func_802A101C(&scratch, 0, 0xC);
    if (*(u16 *)((char *)arg0 + 4) == 0x40F) {
        func_8025DE74(0xCDA, *(Vec3 *)((char *)arg1 + 8),
                      (s32)((char *)arg1 + 8), -1);
        func_8022B540(arg1, 30.0f, 3.0f,
                     *(void **)((char *)arg0 + 0x12C), 0);
        func_8028CE70(&D_8011FE88,
                      (char *)*(void **)((char *)arg1 + 0x698) + 0x140,
                      0x14, scratch, D_800C9F48[1], D_800C9F50);
        *(f32 *)((char *)arg1 + 0x11EC) = *(&D_800C9F50 + 1);
    }

    temp_s1 = *(void **)((char *)arg0 + 0x118);
    if (func_8028403C(arg0) != 0) {
        var_a0 = 0xC;
    } else {
        var_a0 = 0xA;
    }
    temp_a1 = var_a0 * 2;
    temp_v0 = *(s32 *)((char *)temp_s1 + 0x18);
    temp_v1 = (char *)temp_v0 + temp_a1;
    temp_s2 = *(u16 *)((char *)temp_v1 + 0x70);
    temp_a2 = *(u16 *)((char *)temp_v1 + 0x8C);
    temp_v0_2 = (char *)temp_v0 + (var_a0 * 8);
    pair = *(Pair *)temp_v0_2;
    temp_s3 = *(u16 *)((char *)*(s32 *)((char *)temp_s1 + 0x18) + temp_a1 + 0xA8);
    if (temp_a2 != 0xFFFF) {
        func_80265E30(arg0, arg0, temp_a2, -1,
                     *(Triple *)((char *)arg0 + 8), pair);
    }
    if (temp_s2 != 0xFFFF) {
        func_80279BB0(arg0, temp_s2, *(s8 *)((char *)arg0 + 0x1D0), 1);
    }
    if (temp_s3 != 0xFFFF) {
        func_8025DE74((s16)temp_s3, *(Vec3 *)((char *)arg0 + 8), 0, -1);
    }
    func_80284544(&D_80121990, arg0);
    func_80284408(arg0);
}
