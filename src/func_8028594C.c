#include "basetypes.h"

extern s32 func_80264E10(void *);

s32 func_8028594C(s32 arg0) {
    s32 result;

    result = 0;
    if (func_80264E10(arg0 + 0x20) != 0) {
        result = 1;
    } else if (func_80264E10(arg0 + 0x2C) != 0) {
        result = 1;
    }
    return result;
}
