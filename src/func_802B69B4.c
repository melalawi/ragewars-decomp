#include "basetypes.h"

extern void func_802B6B10(void *arg0, s32 arg1);
extern void func_802B6B90(void *arg0, void *arg1, s32 arg2);

void func_802B69B4(void *arg0, void *arg1) {
    s32 i;
    void *p;
    void *found;

    p = arg1;
    do {
        found = *(void **)((char *)p + 0xC);
        p = (char *)p + 4;
    } while (found == 0);
    i = 0;
    if (*(u8 *)((char *)arg0 + 0x34) != 0) {
        do {
            func_802B6B10(arg0, i);
            func_802B6B90(arg0, found, i);
            i += 1;
        } while (i < *(u8 *)((char *)arg0 + 0x34));
    }
    if (*(void **)((char *)arg1 + 8) != 0) {
        func_802B6B10(arg0, i);
        func_802B6B90(arg0, *(void **)((char *)arg1 + 8), 9);
    }
}
