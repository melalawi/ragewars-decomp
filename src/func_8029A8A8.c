#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
M2C_UNK func_80299368(s32);
s32 func_8029A9A0(M2C_UNK);
extern s32 D_8014D080;
void func_8029A8A8(void) {
    if ((*(s32 *)((s8 *)(D_8014D080) + (4))) > 0) {
        func_80299368(func_8029A9A0(0));
    }
}
