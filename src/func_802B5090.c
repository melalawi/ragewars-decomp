#include "basetypes.h"

extern void func_802B7550(void *, void * *);

void func_802B5090(void *arg0, void *arg1, s32 arg2) {
    s32 i;
    char *p;

    i = 0;
    *(s32 *)((char *)arg0 + 0x10) = 0;
    *(s32 *)((char *)arg0 + 8) = 0;
    *(s32 *)((char *)arg0 + 0xC) = 0;
    *(s32 *)((char *)arg0 + 0) = 0;
    *(s32 *)((char *)arg0 + 4) = 0;
    if (arg2 > 0) {
        p = (char *)arg1;
        do {
            func_802B7550(p, arg0);
            i += 1;
            p += 0x1C;
        } while (i < arg2);
    }
}
