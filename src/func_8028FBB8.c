#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
void func_8028FBB8(void *arg0) {
    void *temp_a0;
    temp_a0 = (*(void **)((s8 *)(arg0) + (0x2F4)));
    if ((*(s32 *)((s8 *)(temp_a0) + (0x10))) == 1) {
        (*(s32 *)((s8 *)(temp_a0) + (4))) = (s32) ((*(s32 *)((s8 *)(temp_a0) + (4))) | 0x10);
        func_802BF210();
    }
}
