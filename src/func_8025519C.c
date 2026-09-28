#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
s32 func_8025519C(s32 arg0, void *arg1, s32 arg2) {
    (*(s32 *)((s8 *)(arg1) + (0x20))) = arg2;
    return ~func_802C0510(arg0 + 0x230, (s32) arg1, 0) != 0;
}
