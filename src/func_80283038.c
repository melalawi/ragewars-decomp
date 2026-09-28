#include "basetypes.h"

extern u8 D_801462E3;

void func_80283038(void *arg0, s32 *arg1) {
    s32 result;

    result = 0;
    if ((*(*(s32 **)((s8 *)(arg0) + 0x118))) & 0x02000000) {
        if ((*(s32 *)((s8 *)(arg0) + 0x5C)) & 2) {
            result = 2;
        } else if (D_801462E3 == 2) {
            result = 1;
        }
    }
    *arg1 |= result << 0x1E;
}
