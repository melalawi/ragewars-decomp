#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
f32 func_80284890(void *arg0) {
    f32 var_f0;
    var_f0 = 0.0f;
    if ((*(s32 *)((s8 *)((*(void **)((s8 *)(arg0) + (0x118)))) + (0x14))) == 0) {
        var_f0 = (*(f32 *)((s8 *)(arg0) + (0x184)));
    }
    return var_f0;
}
