#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
void func_8029AC80(void *arg0) {
    s32 temp_a0;
    temp_a0 = (*(s32 *)((s8 *)(arg0) + (0)));
    if (temp_a0 != 0) {
        func_80254784(temp_a0);
        (*(s32 *)((s8 *)(arg0) + (0))) = 0;
    }
    (*(s32 *)((s8 *)(arg0) + (0xC))) = 0;
    (*(s32 *)((s8 *)(arg0) + (8))) = 0;
    (*(s32 *)((s8 *)(arg0) + (4))) = 0;
}
