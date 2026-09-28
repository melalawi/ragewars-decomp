#include "basetypes.h"

extern char *func_8028FD94(s32 *, s32);

void *func_8028B2D4(void *arg0, u16 *arg1) {
    s32 base;
    s32 idx;

    if (arg1 == 0) {
        return 0;
    }
    base = func_8028FD94(*(void **)((s8 *)(arg0) + (0x6C)), 0) + 8;
    idx = *arg1;
    return (void *)(base + idx * 0x64);
}
