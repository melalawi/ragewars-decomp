#include "basetypes.h"

s32 func_80209A94(void *arg0) {
    s32 val;

    val = *(s32 *)((char *)arg0 + 0x21C);
    if (val >= 8) {
        goto ge_8;
    }
    if (val >= 3) {
        goto ret1;
    }
    if (val == 1) {
        goto ret1;
    }
    goto ret0;
ge_8:
    if (val != 0xD) {
        goto ret0;
    }
ret1:
    return 1;
ret0:
    return 0;
}
