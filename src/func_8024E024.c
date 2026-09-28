#include "basetypes.h"

s32 func_8024E024(void *arg0) {
    void *temp_a1;
    s32 var_v1;

    temp_a1 = *(void **)((char *)arg0 + 0x18);
    if (*(s32 *)temp_a1 == 1) {
        var_v1 = 0;
        if (*(s32 *)((char *)arg0 + 0x174) <= 0 || (*(s32 *)((char *)temp_a1 + 0x4C) & 0x10)) {
            var_v1 = 1;
        }
        return var_v1;
    }
    return 0;
}
