/* Steps a menu value left or right with optional range wrapping. */
#include "basetypes.h"
typedef struct {char p[32]; s32 unk20;} State;
s32 func_802643A8(s32);                             /* extern */
s32 func_802643C0(s32);                             /* extern */

s32 func_804425F8(State *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 temp_s0;
    s32 var_s0;
    s32 var_v0;

    var_s0 = arg1;
    if (func_802643A8(arg0->unk20) != 0) {
        var_s0 -= arg2;
        if (var_s0 < arg3) {
            var_s0 = arg3;
            if (arg5 != 0) {
                var_s0 = arg4;
            }
        }
    }
    var_v0 = var_s0;
    if (func_802643C0(arg0->unk20) != 0) {
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
