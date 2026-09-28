#include "basetypes.h"

extern s32 func_80214178(void *, void *, s32);

void func_80203E78(void *arg0, void *arg1, void *arg2) {
    s32 var_v1;

    var_v1 = *(s32 *) ((char *) arg1 + 4) - *(s32 *) ((char *) arg2 + 4);
    if (var_v1 < 0) {
        var_v1 = 0;
    }
    *(s32 *) ((char *) arg1 + 4) = var_v1;
    if (var_v1 == 0) {
        func_80214178(arg0, arg1, 0x40);
    }
}
