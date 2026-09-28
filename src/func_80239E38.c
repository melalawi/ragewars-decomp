#include "basetypes.h"

extern u32 func_802337C0(s32);

s32 func_80239E38(s32 arg0) {
    s32 var_v1;
    u32 temp_s0;
    u32 temp_s1;
    u32 temp_v0;

    temp_s1 = func_802337C0(arg0 + 0x18);
    temp_s0 = func_802337C0(arg0 + 0x2C);
    temp_v0 = func_802337C0(arg0 + 0x40);
    var_v1 = 0;
    if ((temp_s1 != 0) && (temp_s0 != 0)) {
        var_v1 = temp_v0 > 0U;
    }
    return var_v1;
}
