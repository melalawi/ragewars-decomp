#include "basetypes.h"

extern char *func_8028FD94(s32 *, s32);

u32 func_8028B32C(void *arg0, s32 arg1) {
    s32 offset;
    s32 result;

    if (arg1 == 0) {
        return -1;
    }
    offset = func_8028FD94(*(void **)((s8 *)(arg0) + (0x6C)), 2) + 8;
    result = arg1 - offset;
    return (u32)result >> 5;
}
