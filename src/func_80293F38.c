#include "basetypes.h"

extern f32 D_800CA5B0;
extern s32 D_800D29C8;
extern volatile s32 D_800D29CC;
extern u32 func_80265370(void);
extern s32 func_802938E8(s32 arg0, u32 arg1, s32 arg2, s32 arg3);

void func_80293F38(void *arg0) {
    s32 var_a2;
    s32 call_result;
    u32 result;

    result = func_80265370();
    var_a2 = 4;
    if ((result > 0x400000U) && (D_800D29C8 != 0)) {
        var_a2 = 3;
    }
    if (*(f32 *)((char *)arg0 + 0x26DB0) > D_800CA5B0) {
        D_800D29CC = 0;
    }
    if (D_800D29CC != 0) {
        call_result = func_802938E8((s32)arg0, 0x41400000U, var_a2, -1);
    } else {
        call_result = func_802938E8((s32)arg0, 0x41400000U, var_a2, var_a2);
    }
    if (call_result != 0) {
        D_800D29CC = 0;
    }
}
