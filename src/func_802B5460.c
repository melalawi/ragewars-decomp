#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
void func_802B5460(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_v1;
    temp_v1 = 0x10 - (arg1 & 0xF);
    if (temp_v1 != 0x10) {
        (*(s32 *)((s8 *)(arg0) + (0))) = (s32) (arg1 + temp_v1);
    } else {
        (*(s32 *)((s8 *)(arg0) + (0))) = arg1;
    }
    (*(s32 *)((s8 *)(arg0) + (8))) = arg2;
    (*(s32 *)((s8 *)(arg0) + (0xC))) = 0;
    (*(s32 *)((s8 *)(arg0) + (4))) = (s32) (*(s32 *)((s8 *)(arg0) + (0)));
}
