#include "basetypes.h"

extern void func_802227D0(void *, void *, s32);

s32 func_8022C6D4(void *arg0, void *arg1) {
    s16 state = *(s16 *)((char *)arg0 + 0x650);
    s32 blocked;

    if ((state == 0x15) || (state == 0x13) || (state == 0x14)) {
        blocked = 1;
    } else {
        blocked = 0;
    }
    if (blocked == 0) {
        if ((*(s32 *)((char *)arg1 + 0x38) & 0x20000) == 0) {
            return 0;
        }
        if (*(s16 *)((char *)arg0 + 0x650) == 0xD) {
            return 0;
        }
        if (*(s16 *)((char *)arg0 + 0x650) == 0xE) {
            return 0;
        }
        func_802227D0(arg0, arg1, 0xD);
        return 1;
    }
    return 0;
}
