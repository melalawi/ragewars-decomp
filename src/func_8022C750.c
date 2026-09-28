#include "basetypes.h"

/* Sets flag 0x100 on the second object and triggers event 0xF on the first when the first is not in states 0x13 to 0x15 or 0x26, is not flagged 0x8000, and the second object's descriptor bit 1 and flag 0x80 are set, returning whether it fired. Adapted from func_8022C6D4 with the flag tests, the excluded state and the event number changed. */
extern void func_802227D0(void *, void *, s32);

s32 func_8022C750(void *arg0, void *arg1) {
    s16 state = *(s16 *)((char *)arg0 + 0x650);
    s32 blocked;
    s32 flags;

    if ((state == 0x15) || (state == 0x13) || (state == 0x14)) {
        blocked = 1;
    } else {
        blocked = 0;
    }
    if (blocked == 0) {
        if (*(s32 *)(*(char **)((char *)arg1 + 0x18) + 0x14) & 1) {
            if (*(s16 *)((char *)arg0 + 0x650) == 0x26) {
                return 0;
            }
            if (*(s32 *)((char *)arg0 + 0x664) & 0x8000) {
                return 0;
            }
            flags = *(s32 *)((char *)arg1 + 0x38);
            if (flags & 0x80) {
                goto fire;
            }
        }
        return 0;
    }
    return 0;
fire:
    *(s32 *)((char *)arg1 + 0x38) = flags | 0x100;
    func_802227D0(arg0, arg1, 0xF);
    return 1;
}
