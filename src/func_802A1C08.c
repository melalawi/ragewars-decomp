#include "basetypes.h"

extern s32 D_800D2B88;
extern s32 func_80414D4C(void *arg0, s32 arg1, s32 arg2);

/** Pass the variadic tail address to the formatter and retain its result. */
s32 func_802A1C08(void *arg0, s32 arg1, ...) {
    s32 result;
    char *args;

    args = __builtin_next_arg(arg1);
    result = func_80414D4C(arg0, arg1, (s32)args);
    D_800D2B88 = result;
    return result;
}
