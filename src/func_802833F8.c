#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
extern M2C_UNK D_8011EE70;
void func_802833F8(void *arg0) {
    (*(M2C_UNK **)((s8 *)(arg0) + (0x18))) = &D_8011EE70;
    (*(s8 *)((s8 *)(arg0) + (0))) = 2;
    (*(s32 *)((s8 *)(arg0) + (0x5C))) = 0;
    (*(s32 *)((s8 *)(arg0) + (0x1DC))) = 0;
    (*(s32 *)((s8 *)(arg0) + (0x1E4))) = 0;
}
