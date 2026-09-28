#include "basetypes.h"

extern s32 D_8014D080;

s32 func_8029A9A0(s32 arg0) {
    s32 idx;
    s32 countMinus1;

    countMinus1 = (*(s32 *)((s8 *)(D_8014D080) + (4))) - 1;
    idx = countMinus1 - arg0;
    if (idx >= 0) {
        return (*(s32 *)((s8 *)((idx * 0x1C) + (*(s32 *)((s8 *)(D_8014D080) + (0xC)))) + (4)));
    }
    return -1;
}
