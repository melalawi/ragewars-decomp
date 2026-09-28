#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
f32 func_8024E8A8(void *arg0) {
    f32 temp_f1;
    f32 var_f0;
    f32 var_f1;
    void *temp_a1;
    temp_a1 = (*(void **)((s8 *)(arg0) + (0x14)));
    var_f0 = (*(f32 *)((s8 *)((*(void **)((s8 *)(temp_a1) + (8)))) + (4)));
    temp_f1 = (*(f32 *)((s8 *)((*(void **)((s8 *)(temp_a1) + (4)))) + (4)));
    if (!(var_f0 <= temp_f1)) {
        var_f0 = temp_f1;
    }
    var_f1 = (*(f32 *)((s8 *)((*(void **)((s8 *)(temp_a1) + (0xC)))) + (4)));
    if (!(var_f1 <= var_f0)) {
        var_f1 = var_f0;
    }
    return (*(f32 *)((s8 *)(arg0) + (0xC))) - var_f1;
}
