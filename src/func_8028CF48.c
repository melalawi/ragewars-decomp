#include "basetypes.h"

extern char *func_8028FD94(s32 *, s32);

void *func_8028CF48(void *arg0, s32 arg1) {
    void *result;

    if (arg1 == -1) {
        goto ret_null;
    }
    result = func_8028FD94(*(void **)((s8 *)(arg0) + (0x78)), arg1);
    goto end;
ret_null:
    result = 0;
end:
    return result;
}
