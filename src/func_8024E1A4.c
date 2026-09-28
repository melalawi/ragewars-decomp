#include "basetypes.h"

s32 func_8024E1A4(void *arg0) {
    if (*(u8 *)arg0 != 1) {
        return 0;
    }
    if (!(*(s32 *)((char *)arg0 + 0x100) & 0x2000)) {
        return 0;
    }
    arg0 = *(void **)((char *)arg0 + 0x1A0);
    if (arg0 == 0) {
        goto ret1;
    }
    if (*(s32 *)((char *)arg0 + 0x1C) & 0x10000) {
        return 0;
    }
ret1:
    return 1;
}
