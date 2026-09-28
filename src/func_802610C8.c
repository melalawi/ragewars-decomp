#include "basetypes.h"

void func_802610C8(void *arg0, s32 arg1) {
    s32 count;
    s8 *ptr;
    s32 magic;

    count = 1;
    (*(s32 *)((s8 *)(arg0) + (0))) = arg1;
    (*(s32 *)((s8 *)(arg0) + (4))) = ((arg1 * 4) + 0xF) & ~7;
    if (arg1 > 0) {
        magic = 0xDEADBEEF;
        ptr = (s8 *)(arg0) + 4;
        do {
            (*(s32 *)(ptr + 4)) = magic;
            count += 1;
            ptr += 4;
        } while (arg1 >= count);
    }
}
