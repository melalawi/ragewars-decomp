#include "basetypes.h"

extern s32 D_8014D080;

s16 func_8029AA08(void) {
    void *ptr;

    ptr = *(void **)((s8 *)(((*(s32 *)((s8 *)(D_8014D080) + (4))) * 0x1C) + (*(s32 *)((s8 *)(D_8014D080) + (0xC)))) + (8));
    if (ptr != 0) {
        return *(s16 *)((s8 *)(ptr) + (0xC));
    }
    return -1;
}
