#include "basetypes.h"

extern s32 func_8028FE1C(s32 arg0, s32 arg1, s32 arg2, s32 *arg3);
extern void * *func_802518DC(s32, s32, s32, s32, s32, s32, void *, void *, s32);

void **func_802543A8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, void *arg6) {
    s32 sp28;
    s32 temp_v0;

    temp_v0 = func_8028FE1C(arg1, arg3, arg2, &sp28);
    func_802518DC(0, temp_v0, temp_v0, sp28, 0x1B, arg4, arg5, arg6, 1);
}
