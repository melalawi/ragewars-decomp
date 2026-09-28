#include "basetypes.h"

extern char *func_8028FD94(s32 *, s32);

s32 func_8028BD88(void *arg0, s32 arg1) {
    void *temp_v0;
    u8 *result;

    temp_v0 = func_8028FD94((*(void **)((s8 *)(arg0) + (0x80))), 1);
    func_8028FD94(temp_v0, 0);
    result = (u8 *)func_8028FD94(temp_v0, 1) + arg1;
    return *result == 0;
}
