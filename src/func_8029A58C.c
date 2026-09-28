#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
extern s32 D_8014D080;
void func_8029A58C(s32 arg0) {
    if (arg0 != 0) {
        (*(s32 *)((s8 *)(D_8014D080) + (0x52C))) = (s32) ((*(s32 *)((s8 *)(D_8014D080) + (0x52C))) | 1);
        return;
    }
    (*(s32 *)((s8 *)(D_8014D080) + (0x52C))) = (s32) ((*(s32 *)((s8 *)(D_8014D080) + (0x52C))) & ~1);
}
