#include "span_1000/code_802A0AC4.h"
#include "types.h"
typedef s32 M2C_UNK;

s32 func_80414CCC_de(M2C_UNK *, s32, M2C_UNK);


extern M2C_UNK D_80146E50;

s32 func_802A0B8C_de(s32 arg0, M2C_UNK arg1, s32 arg2, ...) {
    char *args;

    args = __builtin_next_arg(arg2);
    D_800CD918 = func_80414CCC_de(&D_80146E50, arg2, (s32) args);
    ((M2C_UNK (*)(M2C_UNK *, s32, M2C_UNK)) D_800CD920_de)(&D_80146E50, arg0, arg1);
    return D_800CD918;
}
