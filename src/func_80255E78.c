#include "basetypes.h"

void func_80255E78(void *arg0, s32 arg1) {
    s32 next;
    s32 prev;

    next = *(s32 *)(arg1 + *(s32 *)((char *)arg0 + 8));
    if (next != 0) {
        s32 off = *(s32 *)((char *)arg0 + 0xC);
        *(s32 *)(next + off) = *(s32 *)(arg1 + off);
    }
    prev = *(s32 *)(arg1 + *(s32 *)((char *)arg0 + 0xC));
    if (prev != 0) {
        s32 off = *(s32 *)((char *)arg0 + 8);
        *(s32 *)(prev + off) = *(s32 *)(arg1 + off);
    }
    if (*(s32 *)arg0 == arg1) {
        *(s32 *)arg0 = *(s32 *)(arg1 + *(s32 *)((char *)arg0 + 0xC));
    }
    if (*(s32 *)((char *)arg0 + 4) == arg1) {
        *(s32 *)((char *)arg0 + 4) = *(s32 *)(arg1 + *(s32 *)((char *)arg0 + 8));
    }
    *(s32 *)((char *)arg0 + 0x10) = *(s32 *)((char *)arg0 + 0x10) - 1;
}
