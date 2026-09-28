#include "basetypes.h"

s32 func_8023E168(void *, void *, f32, s32, f32, s32, s32 *, s32);
s32 func_8023EA34(void *, s32 *, void *, f32, s32);
void func_80240D10(s32 *, void *);
void func_80240DF0(s32 *, void *);

s32 func_80242A84(void *arg0, void *arg1, void *arg2, s32 *arg3) {
    f32 temp_f20;
    s32 var_s0;
    void *temp_s3;

    var_s0 = 0;
    temp_s3 = arg1 + 8;
    temp_f20 = *(f32 *)(*(void **)(arg1 + 0x18) + 0x1C) + *(f32 *)(arg0 + 0xC);
    if ((*(f32 *)(arg0 + 0x5C) != 0.0f) || (*(f32 *)(arg0 + 0x64) != 0.0f)) {
        *arg3 = 3;
        var_s0 = func_8023E168(arg0, temp_s3, temp_f20, *(s32 *)(arg2 + 4), *(f32 *)(arg2 + 0x34), 1, arg3, 1);
    }
    if (*(f32 *)(arg0 + 0x60) > 0.0f) {
        *arg3 = 2;
        func_80240DF0(arg3, arg2);
        var_s0 |= func_8023EA34(arg0, arg3, temp_s3, temp_f20, 1);
    }
    if (*(f32 *)(arg0 + 0x60) < 0.0f) {
        *arg3 = 9;
        func_80240D10(arg3, arg2);
        var_s0 |= func_8023EA34(arg0, arg3, temp_s3, temp_f20, 1);
    }
    return var_s0;
}
