#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
void func_802532BC(void *arg0) {
    s32 temp_v0;
    temp_v0 = (*(s32 *)((s8 *)(arg0) + (8))) - 1;
    (*(s32 *)((s8 *)(arg0) + (8))) = temp_v0;
    if (temp_v0 == 0) {
        (*(s32 *)((s8 *)(arg0) + (0xC))) = (s32) ((*(s32 *)((s8 *)(arg0) + (0xC))) & ~0x100);
    }
}
