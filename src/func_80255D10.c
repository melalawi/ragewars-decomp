#include "basetypes.h"

void func_80255D10(void *arg0, s32 arg1, s32 arg2) {
    char *o = (char *) arg0;
    s32 next = *(s32 *) (arg1 + *(s32 *) (o + 8));
    s32 v0;

    if (next != 0) {
        s32 off8;
        *(s32 *) (next + *(s32 *) (o + 0xC)) = arg2;
        off8 = *(s32 *) (o + 8);
        *(s32 *) (arg2 + off8) = *(s32 *) (arg1 + off8);
        *(s32 *) (arg1 + *(s32 *) (o + 8)) = arg2;
        *(s32 *) (arg2 + *(s32 *) (o + 0xC)) = arg1;
        v0 = *(s32 *) (o + 0x10) + 1;
    } else {
        s32 tail = *(s32 *) (o + 0x0);
        if (tail != 0) {
            *(s32 *) (arg2 + *(s32 *) (o + 0xC)) = tail;
            *(s32 *) (*(s32 *) (o + 0x0) + *(s32 *) (o + 8)) = arg2;
        } else {
            *(s32 *) (arg2 + *(s32 *) (o + 0xC)) = 0;
            *(s32 *) (o + 4) = arg2;
        }
        *(s32 *) (arg2 + *(s32 *) (o + 8)) = 0;
        *(s32 *) (o + 0) = arg2;
        v0 = *(s32 *) (o + 0x10) + 1;
    }
    *(s32 *) (o + 0x10) = v0;
}
