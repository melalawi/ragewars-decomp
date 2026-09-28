#include "basetypes.h"

extern s32 D_800E28C8;
extern s32 D_80146D70;
extern f32 D_800CA5AC;
extern s32 D_800D29C4;
extern s32 D_80146D60;
extern s32 D_800E28CC;
extern s32 D_8014AD94;

extern void func_8040C4A8(s32 arg0);
extern void func_80299368(s32 arg0);

void func_80293DE4(void *arg0) {
    D_800E28C8 = -1;
    D_80146D70 = 0;
    func_8040C4A8(0);
    D_800D29C4 = 1;
    D_80146D60 = 1;
    D_800E28CC = 1;
    D_8014AD94 = 0;
    *(f32 *)((char *)arg0 + 0x26DC4) = D_800CA5AC;
    func_80299368(0x1D);
}
