#include "basetypes.h"

void func_8028CC80(void *arg0, s32 arg1) {
    s32 count;
    s32 i;
    void **arr;
    void *entry;

    i = 0;
    count = *(s32 *)((s8 *)(arg0) + 0xE50);
    arr = (void **)((s8 *)(arg0) + 0xC50);
    if (count > 0) {
        do {
            entry = *arr;
            if (*(s32 *)((s8 *)(entry) + 0x1D8) == arg1) {
                *(s32 *)((s8 *)(entry) + 0x1D8) = 0;
            }
            i += 1;
            arr += 1;
        } while (i < count);
    }
}
