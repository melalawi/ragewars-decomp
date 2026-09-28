#include "basetypes.h"
typedef s32 M2C_UNK;

s32 func_80414D4C(M2C_UNK *, s32, M2C_UNK);
extern s32 D_800D2B88;
extern s32 D_800D2B8C;
extern M2C_UNK D_8014D0D0;

s32 func_802A1B20(s32 arg0, ...) {
    char *args;

    args = __builtin_next_arg(arg0);
    D_800D2B88 = func_80414D4C(&D_8014D0D0, arg0, (s32) args);
    if (D_800D2B8C != 0) {
        ((M2C_UNK (*)(M2C_UNK *)) D_800D2B8C)(&D_8014D0D0);
    }
    return D_800D2B88;
}
