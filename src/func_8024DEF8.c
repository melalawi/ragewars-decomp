#include "basetypes.h"

s32 func_8024DEF8(void *arg0) {
    void *temp_a1 = *(void **)((char *)arg0 + 0x18);
    s32 temp_v1 = *(s32 *)temp_a1;

    if (temp_v1 != 1) {
        if (temp_v1 != 0xB) {
            goto ret0;
        }
        return 1;
    }
    {
        s32 var_v1 = 0;
        if (*(s32 *)((char *)arg0 + 0x174) <= 0 || (*(s32 *)((char *)temp_a1 + 0x4C) & 2)) {
            var_v1 = 1;
        }
        return var_v1;
    }
ret0:
    return 0;
}
