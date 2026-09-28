#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
s32 func_80414D4C(M2C_UNK *, s32, M2C_UNK);
extern s32 D_800D2B88;
extern M2C_UNK D_8014D0D0;
M2C_UNK *func_802A200C(s32 arg0, M2C_UNK arg1) {
    D_800D2B88 = func_80414D4C(&D_8014D0D0, arg0, arg1);
    return &D_8014D0D0;
}
