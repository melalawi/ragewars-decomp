#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
void func_8022B10C(void *arg0, s32 arg1) {
    u16 temp_v0;
    u16 var_v1;
    temp_v0 = (*(u16 *)((s8 *)(arg0) + (0x16D8))) + arg1;
    var_v1 = temp_v0;
    (*(u16 *)((s8 *)(arg0) + (0x16D8))) = temp_v0;
    if ((u32) (var_v1 & 0xFFFF) >= 0x65U) {
        var_v1 = 0x64;
    }
    (*(u16 *)((s8 *)(arg0) + (0x16D8))) = var_v1;
}
