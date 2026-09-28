#include "basetypes.h"

extern char *func_8028FD94(s32 *, s32);

void func_80296F7C(s32 **arg0, void *arg1) {
    s32 *temp_s0;
    s32 *tmp;

    temp_s0 = *arg0;
    if (*temp_s0 != 0) {
        *(void **)((char *)arg1 + 8) = func_8028FD94(temp_s0, 0);
        tmp = func_8028FD94(temp_s0, 1);
        *(s32 *)((char *)arg1 + 0) = *tmp;
        tmp = func_8028FD94(temp_s0, 2);
        *(s32 *)((char *)arg1 + 4) = *tmp;
        return;
    }
    *(void **)((char *)arg1 + 8) = 0;
    *(s32 *)((char *)arg1 + 0) = 0;
    *(s32 *)((char *)arg1 + 4) = 0;
}
