#include "basetypes.h"

typedef struct Vec3 {
    f32 x;
    f32 y;
    f32 z;
} Vec3;


extern f32 D_800C7A50;
typedef struct { f32 first; f32 second; } D_800C7A50_Pair;
extern f32 D_800C7A58;
typedef struct { f32 first; f32 second; } D_800C7A58_Pair;
typedef struct { f32 unk0; } func_80224078_G3;
extern f32 D_800C7A60;
typedef struct { f32 unk0; } func_80224078_G4;
extern f32 D_800C7A64;
typedef struct { f32 unk0; } func_80224078_G5;
extern f32 D_800C7A68;
typedef struct { f32 unk0; } func_80224078_G6;
extern f32 D_800C7A6C;
typedef struct { f32 unk0; } func_80224078_G7;
extern f32 D_800C7A70;
typedef struct { f32 unk0; } func_80224078_G8;
extern f32 D_800C7A74;
typedef struct { f32 unk0; } func_80224078_G9;
extern f32 D_800C7A78;
typedef struct { f32 unk0; } func_80224078_G10;
extern f32 D_800C7A7C;
typedef struct { f32 unk0; } func_80224078_G11;
extern f32 D_800C7A80;
typedef struct { f32 unk0; } func_80224078_G12;
extern f32 D_800C7A84;
typedef struct { f32 unk0; } func_80224078_G13;
extern f32 D_800C7A88;
typedef struct { f32 unk0; } func_80224078_G14;
extern f32 D_800C7A8C;
typedef struct { f32 unk0; } func_80224078_G15;
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

typedef struct {
    char pad0[0x5DC];
    void *unk5DC;
    char pad5E0[0x650 - 0x5E0];
    s16 unk650;
    char pad652[0x698 - 0x652];
    void *unk698;
    char pad69C[0x6A4 - 0x69C];
    f32 unk6A4;
    f32 unk6A8;
    s32 unk6AC;
    s32 unk6B0;
    char pad6B4[0x6C0 - 0x6B4];
    f32 unk6C0;
    f32 unk6C4;
    char pad6C8[0x6E8 - 0x6C8];
    Vec3 unk6E8;
    char pad6F4[0x724 - 0x6F4];
    f32 unk724;
    s32 unk728;
    s32 unk72C;
} func_80224078_Arg0;

typedef struct {
    char pad0[8];
    char unk8;
    char pad9[0x14 - 9];
    s32 unk14;
    char pad18[0x20 - 0x18];
    f32 unk20;
    char pad24[0x6C - 0x24];
    f32 unk6C;
} func_80224078_Arg1;

typedef struct {
    char pad0[0xC6];
    s8 unkC6;
    s8 unkC7;
} func_80224078_Data;

void func_80224078(void *arg0, void *arg1) {
    Vec3 direction;
    f32 held;
    f32 value;
    s32 flags;
    s32 result;
    void *data;

    if (((func_80224078_Arg0 *)arg0)->unk650 == 0 &&
        !(((func_80224078_Arg0 *)arg0)->unk6AC & 0xE000)) {
        ((func_80224078_Arg0 *)arg0)->unk650 = 1;
    }
    ((func_80224078_Arg0 *)arg0)->unk72C = 0;

    held = (&D_800C7A50)[1];
    func_802748E0(&((func_80224078_Arg1 *)(arg1))->unk6C,
                  ((func_80224078_Arg1 *)arg1)->unk6C +
                      (f32)((func_80224078_Data *)((func_80224078_Arg0 *)arg0)->unk698)->unkC6 * D_800C7A50,
                  held);
    func_802748E0(&((func_80224078_Arg0 *)(arg0))->unk724,
                  ((func_80224078_Arg0 *)arg0)->unk724 +
                      (f32)-((func_80224078_Data *)((func_80224078_Arg0 *)arg0)->unk698)->unkC7 * D_800C7A58,
                  held);

    value = ((func_80224078_Arg0 *)arg0)->unk6A8;
    if (value != 0.0f) {
        f32 step;
        f32 limit;
        step = value * (&D_800C7A58)[1];
        if (value < 0.0f) {
            limit = -value * D_800C7A60;
        } else {
            limit = value * D_800C7A64;
        }
        ((func_80224078_Arg0 *)arg0)->unk6C0 =
            func_80274710(((func_80224078_Arg0 *)arg0)->unk6C0, step, limit);
    } else {
        ((func_80224078_Arg0 *)arg0)->unk6C0 =
            func_80274810(((func_80224078_Arg0 *)arg0)->unk6C0, D_800C7A68);
    }

    value = ((func_80224078_Arg0 *)arg0)->unk6A4;
    if (value != 0.0f) {
        f32 step;
        f32 limit;
        step = value * D_800C7A6C;
        if (value < 0.0f) {
            limit = -value * D_800C7A70;
        } else {
            limit = value * D_800C7A74;
        }
        ((func_80224078_Arg0 *)arg0)->unk6C4 =
            func_80274710(((func_80224078_Arg0 *)arg0)->unk6C4, step, limit);
    } else {
        ((func_80224078_Arg0 *)arg0)->unk6C4 =
            func_80274810(((func_80224078_Arg0 *)arg0)->unk6C4, D_800C7A78);
    }

    flags = ((func_80224078_Arg0 *)arg0)->unk6AC;
    if (flags & 0x10) {
        ((func_80224078_Arg1 *)arg1)->unk20 =
            func_80274710(((func_80224078_Arg1 *)arg1)->unk20, D_800C7A7C, 71.68f);
    } else if (flags & 0x2020) {
        ((func_80224078_Arg1 *)arg1)->unk20 =
            func_80274710(((func_80224078_Arg1 *)arg1)->unk20, D_800C7A80, 71.68f);
    } else {
        ((func_80224078_Arg1 *)arg1)->unk20 =
            func_80274810(((func_80224078_Arg1 *)arg1)->unk20, D_800C7A84);
    }

    {
        f32 angle;
        angle = ((func_80224078_Arg1 *)arg1)->unk6C;
        angle += (held = D_800C7A88);
        direction.x = ((func_80224078_Arg0 *)arg0)->unk6C0 * func_802BC200(angle);
    }
    direction.y = ((func_80224078_Arg1 *)arg1)->unk20;
    direction.z = ((func_80224078_Arg0 *)arg0)->unk6C0 *
                  func_802BB630(((func_80224078_Arg1 *)arg1)->unk6C + held);
    held = D_800C7A8C;
    direction.x += ((func_80224078_Arg0 *)arg0)->unk6C4 *
                   func_802BC200(((func_80224078_Arg1 *)arg1)->unk6C - held);
    direction.z += ((func_80224078_Arg0 *)arg0)->unk6C4 *
                   func_802BB630(((func_80224078_Arg1 *)arg1)->unk6C - held);

    func_8027200C(&direction, &direction, D_800D2988);
    func_80271FA4(&((func_80224078_Arg0 *)(arg0))->unk6E8,
                  &((func_80224078_Arg0 *)(arg0))->unk6E8, &direction);
    result = func_802866F8(&D_8011FE88, &((func_80224078_Arg1 *)arg1)->unk8);
    if (result != 0) {
        ((func_80224078_Arg1 *)arg1)->unk14 = result;
    }

    if (((func_80224078_Arg0 *)arg0)->unk650 == 1 &&
        (((func_80224078_Arg0 *)arg0)->unk6AC & 0xE000) == 0xE000 &&
        (((func_80224078_Arg0 *)arg0)->unk6B0 & 0xE000)) {
        func_802227D0(arg0, arg1, 2);
        data = ((func_80224078_Arg0 *)arg0)->unk5DC;
        if (data != 0) {
            func_80237E70(&D_80145088, data, &D_800C7A40);
        }
    }
}
