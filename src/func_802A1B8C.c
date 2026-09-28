#include "basetypes.h"
typedef s32 M2C_UNK;

s32 func_80414D4C(M2C_UNK *, s32, M2C_UNK);
extern s32 D_800D2B88;
extern s32 D_800D2B90;
extern M2C_UNK D_8014D0D0;

s32 func_802A1B8C(s32 arg0, M2C_UNK arg1, s32 arg2, ...) {
    char *args;

    args = __builtin_next_arg(arg2);
    D_800D2B88 = func_80414D4C(&D_8014D0D0, arg2, (s32) args);
    ((M2C_UNK (*)(M2C_UNK *, s32, M2C_UNK)) D_800D2B90)(&D_8014D0D0, arg0, arg1);
    return D_800D2B88;
}
