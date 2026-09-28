#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
s32 func_8028DFFC(void *arg0, void *arg1) {
    s32 var_v0;
    var_v0 = 1;
    if ((*(f32 *)((s8 *)(arg0) + (4))) < (*(f32 *)((s8 *)(arg1) + (4)))) {
        var_v0 = -1;
    }
    return var_v0;
}
