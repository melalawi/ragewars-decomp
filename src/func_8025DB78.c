#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
M2C_UNK func_802B5060(s32);
void func_8025DB78(s32 a) {
    (*(s32 *)((s8 *)(a) + (0x28))) = -1;
    func_802B5060((*(s32 *)((s8 *)(a) + (0x14))));
}
