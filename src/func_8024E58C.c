#include "basetypes.h"

typedef struct Triple {
    f32 a;
    s32 b;
    f32 c;
} Triple;

extern void func_8024E78C(void *arg0, Triple t, void *arg4, s32 *arg5, s32 arg6, s32 arg7);
extern f32 func_80275E44(s32, s32, s32);

typedef struct func_8024E58C_S1 func_8024E58C_S1;
typedef struct func_8024E58C_S2 func_8024E58C_S2;
struct func_8024E58C_S1 {
    f32 unk0;
    char pad0[0x8 - 0x0 - sizeof(f32)];
    f32 unk8;
};
struct func_8024E58C_S2 {
    char pad0[0x4];
    f32 unk4;
    char pad4[0x8 - 0x4 - sizeof(f32)];
    s32 unk8;
};

void func_8024E58C(void *arg0, void *arg1, void *arg2) {
    Triple t;
    s32 sp30;

    t.a = ((func_8024E58C_S1 *)(arg1))->unk0;
    t.b = 0;
    t.c = ((func_8024E58C_S1 *)(arg1))->unk8;
    func_8024E78C(arg0, t, arg2, &sp30, 0, 0);
    ((func_8024E58C_S2 *)(arg2))->unk4 = func_80275E44(sp30, *(s32 *)arg2, ((func_8024E58C_S2 *)(arg2))->unk8);
}
