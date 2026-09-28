#include "basetypes.h"

void func_80256044(void *arg0, s32 arg1) {
    char *o = (char *)arg0;
    s32 next;
    s32 prev;
    s32 tail;

    next = *(s32 *)(arg1 + *(s32 *)(o + 8));
    if (next != 0) {
        s32 off = *(s32 *)(o + 0xC);
        *(s32 *)(next + off) = *(s32 *)(arg1 + off);
    }
    prev = *(s32 *)(arg1 + *(s32 *)(o + 0xC));
    if (prev != 0) {
        s32 off = *(s32 *)(o + 8);
        *(s32 *)(prev + off) = *(s32 *)(arg1 + off);
    }
    if (*(s32 *)o == arg1) {
        *(s32 *)o = *(s32 *)(arg1 + *(s32 *)(o + 0xC));
    }
    if (*(s32 *)(o + 4) == arg1) {
        *(s32 *)(o + 4) = *(s32 *)(arg1 + *(s32 *)(o + 8));
    }
    *(s32 *)(o + 0x10) = *(s32 *)(o + 0x10) - 1;

    tail = *(s32 *)(o + 4);
    if (tail != 0) {
        *(s32 *)(arg1 + *(s32 *)(o + 8)) = tail;
        *(s32 *)(*(s32 *)(o + 4) + *(s32 *)(o + 0xC)) = arg1;
    } else {
        *(s32 *)(arg1 + *(s32 *)(o + 8)) = 0;
        *(s32 *)o = arg1;
    }
    *(s32 *)(arg1 + *(s32 *)(o + 0xC)) = 0;
    *(s32 *)(o + 4) = arg1;
    *(s32 *)(o + 0x10) = *(s32 *)(o + 0x10) + 1;
}
