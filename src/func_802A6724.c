#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
M2C_UNK func_80279578(s32, s32);
M2C_UNK func_802795C0(void *, s32);
s32 func_802A6724(void *arg0, s32 arg1) {
    s32 temp_s0;
    temp_s0 = (*(s32 *)((s8 *)(arg0) + (0x6A90)));
    if (temp_s0 != 0) {
        func_802795C0(arg0 + 0x6A90, temp_s0);
        func_80279578(arg1 + 0x40, temp_s0);
    }
    return temp_s0;
}
