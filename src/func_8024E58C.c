#include "basetypes.h"

typedef struct Triple {
    f32 a;
    s32 b;
    f32 c;
} Triple;

extern void func_8024E78C(void *arg0, Triple t, void *arg4, s32 *arg5, s32 arg6, s32 arg7);
extern f32 func_80275E44(s32, s32, s32);

void func_8024E58C(void *arg0, void *arg1, void *arg2) {
    Triple t;
    s32 sp30;

    t.a = *(f32 *)((char *)arg1 + 0);
    t.b = 0;
    t.c = *(f32 *)((char *)arg1 + 8);
    func_8024E78C(arg0, t, arg2, &sp30, 0, 0);
    *(f32 *)((char *)arg2 + 4) = func_80275E44(sp30, *(s32 *)arg2, *(s32 *)((char *)arg2 + 8));
}
