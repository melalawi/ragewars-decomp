#include "basetypes.h"

extern s32 D_800D2BB4;

s32 func_802A21F4(s32 arg0, s32 arg1, s32 arg2) {
    s32 *p;

    if (arg2 == 0) {
        D_800D2BB4 = 0;
    }
    p = &D_800D2BB4;
    *p = *p + arg1;
    return 0;
}
