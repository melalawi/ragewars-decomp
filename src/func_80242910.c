#include "basetypes.h"

extern s32 func_8023E8C4(void *, s32 *, s32);
extern void func_80240D10(s32 *, void *);
extern void func_80240DF0(s32 *, void *);
extern void func_80240ED0(s32 *, void *);
extern void func_80240FB0(s32 *, void *);
extern void func_80241090(s32 *, void *);
extern void func_80241170(s32 *, void *);

s32 func_80242910(void *arg0, void *arg1, void *arg2, s32 *arg3) {
    s32 result;

    result = 0;
    if (*(f32 *)(arg0 + 0x60) > 0.0f) {
        *arg3 = 2;
        func_80240DF0(arg3, arg2);
        result = func_8023E8C4(arg0, arg3, 1);
    }
    if ((*(f32 *)(arg0 + 0x5C) != 0.0f) || (*(f32 *)(arg0 + 0x64) != 0.0f)) {
        *arg3 = 3;
        func_80240ED0(arg3, arg2);
        result |= func_8023E8C4(arg0, arg3, 1);
        func_80240FB0(arg3, arg2);
        result |= func_8023E8C4(arg0, arg3, 1);
        func_80241090(arg3, arg2);
        result |= func_8023E8C4(arg0, arg3, 1);
        func_80241170(arg3, arg2);
        result |= func_8023E8C4(arg0, arg3, 1);
    }
    if (*(f32 *)(arg0 + 0x60) < 0.0f) {
        *arg3 = 9;
        func_80240D10(arg3, arg2);
        result |= func_8023E8C4(arg0, arg3, 1);
    }
    return result;
}
