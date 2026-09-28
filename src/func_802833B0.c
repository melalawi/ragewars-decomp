#include "basetypes.h"

extern u8 D_801462E3;

s32 func_802833B0(void *arg0) {
    s32 result;

    result = 0;
    if ((*(*(s32 **)((s8 *)(arg0) + 0x118))) & 0x02000000) {
        if ((*(s32 *)((s8 *)(arg0) + 0x5C)) & 2) {
            result = 2;
        } else if (D_801462E3 == 2) {
            result = 1;
        }
    }
    return result;
}
