#include "basetypes.h"

void func_80255DC4(void *arg0, s32 arg1, s32 arg2) {
    char *o = (char *) arg0;
    s32 next = *(s32 *) (arg1 + *(s32 *) (o + 0xC));
    s32 v0;

    if (next != 0) {
        s32 offC;
        *(s32 *) (next + *(s32 *) (o + 8)) = arg2;
        offC = *(s32 *) (o + 0xC);
        *(s32 *) (arg2 + offC) = *(s32 *) (arg1 + offC);
        *(s32 *) (arg1 + *(s32 *) (o + 0xC)) = arg2;
        *(s32 *) (arg2 + *(s32 *) (o + 8)) = arg1;
        v0 = *(s32 *) (o + 0x10) + 1;
    } else {
        s32 head = *(s32 *) (o + 0x4);
        if (head != 0) {
            *(s32 *) (arg2 + *(s32 *) (o + 8)) = head;
            *(s32 *) (*(s32 *) (o + 0x4) + *(s32 *) (o + 0xC)) = arg2;
        } else {
            *(s32 *) (arg2 + *(s32 *) (o + 8)) = 0;
            *(s32 *) (o + 0) = arg2;
        }
        *(s32 *) (arg2 + *(s32 *) (o + 0xC)) = 0;
        *(s32 *) (o + 4) = arg2;
        v0 = *(s32 *) (o + 0x10) + 1;
    }
    *(s32 *) (o + 0x10) = v0;
}
