#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
s32 func_80279A30(void *arg0, s32 arg1) {
    s32 var_a2;
    var_a2 = 0;
    if ((*(s32 *)((s8 *)(arg0) + (8))) >= arg1) {
        var_a2 = (*(s32 *)((s8 *)(arg0) + (0xC)));
        (*(s32 *)((s8 *)(arg0) + (0xC))) = (s32) (var_a2 + (arg1 << 6));
        (*(s32 *)((s8 *)(arg0) + (8))) = (s32) ((*(s32 *)((s8 *)(arg0) + (8))) - arg1);
    }
    return var_a2;
}
