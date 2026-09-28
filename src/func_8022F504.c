#include "basetypes.h"

extern void func_802656A8(u8 *, s32, s32);

void func_8022F504(s32 arg0, s32 arg1) {
    u8 *var_a0;
    s32 var_a1 = arg1;

    switch (var_a1) {
    case 16:
        var_a0 = (u8 *)(arg0 + 0x78);
        var_a1 = 0;
        break;
    case 17:
        var_a0 = (u8 *)(arg0 + 0x78);
        var_a1 = 1;
        break;
    default:
        var_a0 = (u8 *)(arg0 + 0x7B);
        break;
    }
    func_802656A8(var_a0, var_a1, 1);
}
