#include "basetypes.h"

extern s32 func_8024E61C(void *arg0);
extern void func_802227D0(void *, void *, s32);

s32 func_8022EBC4(void *arg0, void *arg1) {
    if (*(f32 *)((char *)arg1 + 0x20) <= 0.0f && func_8024E61C(arg1) != 0) {
        func_802227D0(arg0, arg1, 2);
        return 1;
    }
    return 0;
}
