#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
extern M2C_UNK D_800D9290;
void func_802BFD50(void *arg0, s32 arg1, s32 arg2) {
    (*(M2C_UNK **)((s8 *)(arg0) + (0))) = &D_800D9290;
    (*(M2C_UNK **)((s8 *)(arg0) + (4))) = &D_800D9290;
    (*(s32 *)((s8 *)(arg0) + (8))) = 0;
    (*(s32 *)((s8 *)(arg0) + (0xC))) = 0;
    (*(s32 *)((s8 *)(arg0) + (0x10))) = arg2;
    (*(s32 *)((s8 *)(arg0) + (0x14))) = arg1;
}
