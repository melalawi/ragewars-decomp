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

typedef struct func_80216D3C_S1 func_80216D3C_S1;
typedef struct func_80216D3C_S2 func_80216D3C_S2;
struct func_80216D3C_S1 {
    char pad0[0x78];
    s32 unk78;
    char pad78[0x7C - 0x78 - sizeof(s32)];
    f32 unk7C;
    char pad7C[0x80 - 0x7C - sizeof(f32)];
    s32 unk80;
    char pad80[0x88 - 0x80 - sizeof(s32)];
    s32 unk88;
};
struct func_80216D3C_S2 {
    char pad0[0x44];
    Output80216D3C unk44;
};

void func_80216D3C(Input80216D3C *arg0, void *arg1, Output80216D3C *arg2, s32 arg3, s32 arg4) {
    Vec3i first;
    Vec3i second;
    f32 temp_f0;
    f32 temp_f1;

    temp_f1 = ((func_80216D3C_S1 *)(arg1))->unk7C;
    if (temp_f1 > 0.0f) {
        temp_f0 = temp_f1 - D_800D2988;
        ((func_80216D3C_S1 *)(arg1))->unk7C = temp_f0;
        if (temp_f0 <= 0.0f) {
            ((func_80216D3C_S1 *)(arg1))->unk78 = 0;
            ((func_80216D3C_S1 *)(arg1))->unk7C = 0.0f;
        }
    }
    if (arg3 != 0) {
        func_80214DD4(arg0, arg1, ((func_80216D3C_S1 *)(arg1))->unk88, (u8 *)arg2 + 0x44);
    } else {
        Output80216D3C *out = &((func_80216D3C_S2 *)(arg2))->unk44;
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
        func_80215410(arg0, arg1, ((func_80216D3C_S1 *)(arg1))->unk80, arg2);
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
