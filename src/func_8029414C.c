#include "basetypes.h"

extern s32 D_800D7064;
extern s32 D_800E28D0;
extern f32 D_800CA5B4;
extern f32 D_800CA5B8;

extern void func_80291FE8(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, f32 arg6, f32 arg7);

void func_8029414C(void *arg0) {
    func_80291FE8(arg0, 1, D_800D7064, D_800E28D0 / 2, 5, 0xA, D_800CA5B4, D_800CA5B8);
}
