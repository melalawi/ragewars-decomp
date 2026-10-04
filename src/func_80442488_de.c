#include "common/types.h"
#include "span_16E000/code_8044239C.h"
#include "types.h"
/* Steps a menu value left or right with optional range wrapping. */

s32 func_80264388_de(s32);                             /* extern */
s32 func_802643A0_de(s32);                             /* extern */

s32 func_80442488_de(func_8022A404_S1 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 temp_s0;
    s32 var_s0;
    s32 var_v0;

    var_s0 = arg1;
    if (func_80264388_de(arg0->unk20) != 0) {
        var_s0 -= arg2;
        if (var_s0 < arg3) {
            var_s0 = arg3;
            if (arg5 != 0) {
                var_s0 = arg4;
            }
        }
    }
    var_v0 = var_s0;
    if (func_802643A0_de(arg0->unk20) != 0) {
        temp_s0 = var_s0 + arg2;
        var_v0 = temp_s0;
        if (arg4 < temp_s0) {
            var_s0 = arg4;
            if (arg5 != 0) {
                var_s0 = arg3;
            }
            var_v0 = var_s0;
        }
    }
    return var_v0;
}
