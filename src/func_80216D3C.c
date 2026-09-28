#include "basetypes.h"

typedef struct Vec3i {
    s32 x;
    s32 y;
    s32 z;
} Vec3i;

typedef struct Input80216D3C {
    s32 unk0;
    s32 unk4;
    Vec3i vec;
} Input80216D3C;

typedef struct Output80216D3C {
    s32 type;
    s32 unk4;
    s32 unk8;
    Vec3i first;
    Vec3i second;
    s32 unk24;
    Vec3i third;
    Vec3i fourth;
    s32 unk40;
} Output80216D3C;

extern f32 D_800D2988;
extern void func_80214DD4(void *, void *, s32, void *);
extern void func_80215410(void *, void *, s32, void *);

void func_80216D3C(Input80216D3C *arg0, void *arg1, Output80216D3C *arg2, s32 arg3, s32 arg4) {
    Vec3i first;
    Vec3i second;
    f32 temp_f0;
    f32 temp_f1;

    temp_f1 = *(f32 *)((u8 *)arg1 + 0x7C);
    if (temp_f1 > 0.0f) {
        temp_f0 = temp_f1 - D_800D2988;
        *(f32 *)((u8 *)arg1 + 0x7C) = temp_f0;
        if (temp_f0 <= 0.0f) {
            *(s32 *)((u8 *)arg1 + 0x78) = 0;
            *(f32 *)((u8 *)arg1 + 0x7C) = 0.0f;
        }
    }
    if (arg3 != 0) {
        func_80214DD4(arg0, arg1, *(s32 *)((u8 *)arg1 + 0x88), (u8 *)arg2 + 0x44);
    } else {
        Output80216D3C *out = (Output80216D3C *)((u8 *)arg2 + 0x44);
        first = arg0->vec;
        second.x = 0;
        second.y = 0;
        second.z = 0;
        out->type = 3;
        out->unk4 = 0;
        out->unk8 = 0;
        out->first = first;
        out->second = second;
        out->unk24 = 0;
        second.y = 0;
        first.y = 0;
        out->third = first;
        out->fourth = second;
        out->unk40 = 0;
    }
    if (arg4 != 0) {
        func_80215410(arg0, arg1, *(s32 *)((u8 *)arg1 + 0x80), arg2);
        return;
    }
    first = arg0->vec;
    second.x = 0;
    second.y = 0;
    second.z = 0;
    arg2->type = 3;
    arg2->unk4 = 0;
    arg2->unk8 = 0;
    arg2->first = first;
    arg2->second = second;
    arg2->unk24 = 0;
    second.y = 0;
    first.y = 0;
    arg2->third = first;
    arg2->fourth = second;
    arg2->unk40 = 0;
}
