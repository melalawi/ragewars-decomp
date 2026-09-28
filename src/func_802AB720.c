#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
extern s32 D_800D318C;
s32 func_802AB720(void *arg0, s32 arg1, s32 arg2) {
    (*(s32 *)((s8 *)(arg0) + (0x40))) = arg1;
    (*(s32 *)((s8 *)(arg0) + (0x3C))) = arg2;
    (*(s32 *)((s8 *)(arg0) + (0x44))) = 0x64;
    func_802AB6FC(arg0, &D_800D318C);
}
