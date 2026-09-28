#include "basetypes.h"

extern s32 func_80263174(void *arg0, s32 arg1);

s32 func_80297578(void *arg0) {
    s32 field;

    field = *(s32 *)((s8 *)(arg0) + (0x10));
    if (field != 2) {
        return field == 1;
    }
    return func_80263174(arg0, 1) != 0;
}
