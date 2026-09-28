#include "basetypes.h"

extern s32 D_8014D098;
extern s32 D_8014D080;

s32 func_8029A958(void) {
    s32 result;
    s32 field4;

    result = D_8014D098;
    if (result < 0) {
        field4 = *(s32 *)((s8 *)(D_8014D080) + (4));
        if (field4 < 0) {
            return -1;
        }
        result = *(s32 *)((s8 *)((field4 * 0x1C) + (*(s32 *)((s8 *)(D_8014D080) + (0xC)))) + (4));
    }
    return result;
}
