#include "basetypes.h"

extern s32 D_2BA640;
extern s32 D_2BA800;
extern f32 D_800CC830;

void func_802BA4B0(void *arg0, void *a, void *b, s32 c);
s32 func_802B5410(s32 a, s32 b, s32 c, s32 d, s32 e);

void func_802B95DC(void *arg0, s32 arg1) {
    s32 result;
    f32 k;

    func_802BA4B0(arg0, &D_2BA640, &D_2BA800, 1);
    result = func_802B5410(0, 0, arg1, 1, 0x20);
    k = D_800CC830;
    *(s32 *)((char *)arg0 + 0x14) = result;
    *(s32 *)((char *)arg0 + 0x20) = 0;
    *(s32 *)((char *)arg0 + 0x24) = 1;
    *(s32 *)((char *)arg0 + 0x30) = 0;
    *(s32 *)((char *)arg0 + 0x1C) = 0;
    *(s32 *)((char *)arg0 + 0x28) = 0;
    *(s32 *)((char *)arg0 + 0x2C) = 0;
    *(f32 *)((char *)arg0 + 0x18) = k;
}
