#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
void func_80283B74(void *arg0, s32 arg1) {
    if (((*(u16 *)((s8 *)(arg0) + (4))) == 0x56) && (arg1 == 2)) {
        (*(s32 *)((s8 *)(arg0) + (0x5C))) = (s32) ((*(s32 *)((s8 *)(arg0) + (0x5C))) | 0x04000000);
    }
}
