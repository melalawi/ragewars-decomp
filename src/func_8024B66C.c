#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
void func_8024B66C(void *arg0) {
    (*(s8 *)((s8 *)(arg0) + (0x10F))) = 1;
    (*(s32 *)((s8 *)(arg0) + (0x104))) = 0;
    (*(s8 *)((s8 *)(arg0) + (0x10E))) = 0;
    (*(s32 *)((s8 *)(arg0) + (0x100))) = (s32) ((*(s32 *)((s8 *)(arg0) + (0x100))) & ~0x400);
}
