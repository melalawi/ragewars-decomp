#include "basetypes.h"

typedef struct Vec3 {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

#define FIELD(type, base, offset) (*(type *)((u8 *)(base) + (offset)))

extern f32 D_800C7A50;
extern f32 D_800C7A58;
extern f32 D_800C7A60;
extern f32 D_800C7A64;
extern f32 D_800C7A68;
extern f32 D_800C7A6C;
extern f32 D_800C7A70;
extern f32 D_800C7A74;
extern f32 D_800C7A78;
extern f32 D_800C7A7C;
extern f32 D_800C7A80;
extern f32 D_800C7A84;
extern f32 D_800C7A88;
extern f32 D_800C7A8C;
extern f32 D_800D2988;
extern char D_8011FE88;
extern char D_80145088;
extern char D_800C7A40;

extern void func_802748E0(f32 *, f32, f32);
extern f32 func_80274710(f32, f32, f32);
extern f32 func_80274810(f32, f32);
extern f32 func_802BC200(f32);
extern f32 func_802BB630(f32);
extern void func_8027200C(Vec3 *, Vec3 *, f32);
extern void func_80271FA4(Vec3 *, Vec3 *, Vec3 *);
extern s32 func_802866F8(void *, void *);
extern void func_802227D0(void *, void *, s32);
extern void func_80237E70(void *, void *, void *);

void func_80224078(void *arg0, void *arg1) {
    Vec3 direction;
    f32 held;
    f32 value;
    s32 flags;
    s32 result;
    void *data;

    if (FIELD(s16, arg0, 0x650) == 0 &&
        !(FIELD(s32, arg0, 0x6AC) & 0xE000)) {
        FIELD(s16, arg0, 0x650) = 1;
    }
    FIELD(s32, arg0, 0x72C) = 0;

    held = *(&D_800C7A50 + 1);
    func_802748E0((f32 *)((u8 *)arg1 + 0x6C),
                  FIELD(f32, arg1, 0x6C) +
                      (f32)FIELD(s8, FIELD(void *, arg0, 0x698), 0xC6) * D_800C7A50,
                  held);
    func_802748E0((f32 *)((u8 *)arg0 + 0x724),
                  FIELD(f32, arg0, 0x724) +
                      (f32)-FIELD(s8, FIELD(void *, arg0, 0x698), 0xC7) * D_800C7A58,
                  held);

    value = FIELD(f32, arg0, 0x6A8);
    if (value != 0.0f) {
        f32 step;
        f32 limit;
        step = value * *(&D_800C7A58 + 1);
        if (value < 0.0f) {
            limit = -value * D_800C7A60;
        } else {
            limit = value * D_800C7A64;
        }
        FIELD(f32, arg0, 0x6C0) =
            func_80274710(FIELD(f32, arg0, 0x6C0), step, limit);
    } else {
        FIELD(f32, arg0, 0x6C0) =
            func_80274810(FIELD(f32, arg0, 0x6C0), D_800C7A68);
    }

    value = FIELD(f32, arg0, 0x6A4);
    if (value != 0.0f) {
        f32 step;
        f32 limit;
        step = value * D_800C7A6C;
        if (value < 0.0f) {
            limit = -value * D_800C7A70;
        } else {
            limit = value * D_800C7A74;
        }
        FIELD(f32, arg0, 0x6C4) =
            func_80274710(FIELD(f32, arg0, 0x6C4), step, limit);
    } else {
        FIELD(f32, arg0, 0x6C4) =
            func_80274810(FIELD(f32, arg0, 0x6C4), D_800C7A78);
    }

    flags = FIELD(s32, arg0, 0x6AC);
    if (flags & 0x10) {
        FIELD(f32, arg1, 0x20) =
            func_80274710(FIELD(f32, arg1, 0x20), D_800C7A7C, 71.68f);
    } else if (flags & 0x2020) {
        FIELD(f32, arg1, 0x20) =
            func_80274710(FIELD(f32, arg1, 0x20), D_800C7A80, 71.68f);
    } else {
        FIELD(f32, arg1, 0x20) =
            func_80274810(FIELD(f32, arg1, 0x20), D_800C7A84);
    }

    {
        f32 angle;
        angle = FIELD(f32, arg1, 0x6C);
        angle += (held = D_800C7A88);
        direction.x = FIELD(f32, arg0, 0x6C0) * func_802BC200(angle);
    }
    direction.y = FIELD(f32, arg1, 0x20);
    direction.z = FIELD(f32, arg0, 0x6C0) *
                  func_802BB630(FIELD(f32, arg1, 0x6C) + held);
    held = D_800C7A8C;
    direction.x += FIELD(f32, arg0, 0x6C4) *
                   func_802BC200(FIELD(f32, arg1, 0x6C) - held);
    direction.z += FIELD(f32, arg0, 0x6C4) *
                   func_802BB630(FIELD(f32, arg1, 0x6C) - held);

    func_8027200C(&direction, &direction, D_800D2988);
    func_80271FA4((Vec3 *)((u8 *)arg0 + 0x6E8),
                  (Vec3 *)((u8 *)arg0 + 0x6E8), &direction);
    result = func_802866F8(&D_8011FE88, (u8 *)arg1 + 8);
    if (result != 0) {
        FIELD(s32, arg1, 0x14) = result;
    }

    if (FIELD(s16, arg0, 0x650) == 1 &&
        (FIELD(s32, arg0, 0x6AC) & 0xE000) == 0xE000 &&
        (FIELD(s32, arg0, 0x6B0) & 0xE000)) {
        func_802227D0(arg0, arg1, 2);
        data = FIELD(void *, arg0, 0x5DC);
        if (data != 0) {
            func_80237E70(&D_80145088, data, &D_800C7A40);
        }
    }
}
