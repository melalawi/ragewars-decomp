#include "basetypes.h"

extern s32 (*D_800D2B9C)(s32, s32, s32);

s32 func_802A1ED4(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 lo;
    s32 result;

    lo = arg1 * arg2;
    if (lo == 0) {
        return 0;
    }
    result = D_800D2B9C(arg3, arg0, lo);
    return result / arg1;
}
