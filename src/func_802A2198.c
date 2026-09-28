#include "basetypes.h"

extern s32 D_800D2BB0;

extern s32 func_802A1724(s32, s32, s32);

s32 func_802A2198(s32 arg0, s32 arg1, s32 arg2) {
    s32 *p;

    p = &D_800D2BB0;
    func_802A1724(arg1, p[0] + p[1], arg2);
    p[1] = p[1] + arg2;
    return 1;
}
