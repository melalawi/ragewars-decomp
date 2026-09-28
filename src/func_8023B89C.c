#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
M2C_UNK func_80255CB4(void *, s32);
s32 func_8023B89C(void *arg0) {
    s32 temp_s0;
    temp_s0 = (*(s32 *)((s8 *)(arg0) + (0x8A0)));
    if (temp_s0 != 0) {
        func_80255E78(arg0 + 0x8A0, temp_s0);
        func_80255CB4(arg0 + 0x8B4, temp_s0);
    }
    return temp_s0;
}
