#include "basetypes.h"

extern char *func_8028FD94(s32 *, s32);

s32 func_8028B370(void *arg0, s32 arg1) {
    s32 raw;
    s32 base;

    raw = func_8028FD94(*(void **)((s8 *)(arg0) + (0x6C)), 2);
    base = raw + 8;
    if (arg1 < 0 || arg1 >= *(s32 *)((s8 *)(raw) + 4)) {
        return 0;
    }
    return base + (arg1 << 5);
}
