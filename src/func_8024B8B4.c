#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
void func_8024B8B4(void *arg0) {
    s32 temp_a1;
    temp_a1 = (*(s32 *)((s8 *)(arg0) + (0xB4)));
    (*(s32 *)((s8 *)(arg0) + (0xB4))) = 0;
    (*(s32 *)((s8 *)(arg0) + (0xBC))) = 0;
    (*(s32 *)((s8 *)(arg0) + (0xC0))) = 0;
    (*(s32 *)((s8 *)(arg0) + (0x100))) = (s32) ((*(s32 *)((s8 *)(arg0) + (0x100))) & ~0x200);
    (*(s32 *)((s8 *)(arg0) + (0xB8))) = temp_a1;
}
