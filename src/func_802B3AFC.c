#include "basetypes.h"

extern s32 func_802B35D0(s32, s32);

s32 func_802B3AFC(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_s0;

    var_s0 = (u8) func_802B35D0(arg0, arg1);
    if (var_s0 & 0x80) {
        var_s0 &= 0x7F;
        do {
            temp_v0 = (u8) func_802B35D0(arg0, arg1);
            var_s0 = (var_s0 << 7) + (temp_v0 & 0x7F);
        } while (temp_v0 & 0x80);
    }
    return var_s0;
}
