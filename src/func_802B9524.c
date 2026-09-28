#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
extern M2C_UNK D_2BA4D0;
extern M2C_UNK D_2BA610;
void func_802B9524(void *arg0, s32 arg1, s32 arg2) {
    func_802BA4B0(arg0, (s32) &D_2BA4D0, (s32) &D_2BA610, 7);
    (*(s32 *)((s8 *)(arg0) + (0x14))) = 0;
    (*(s32 *)((s8 *)(arg0) + (0x18))) = arg2;
    (*(s32 *)((s8 *)(arg0) + (0x1C))) = arg1;
}
