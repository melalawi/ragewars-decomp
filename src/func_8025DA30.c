#include "basetypes.h"

extern f32 D_800C90F8;

extern s32 func_80265508(void *arg0, s32 arg1, s32 arg2);
extern char *func_8028FD94(s32 *, s32);
extern f32 func_802B2350(s32 arg0);

s32 func_8025DA30(void *arg0, s32 arg1) {
    void *root;
    s32 index;
    void *first;
    void *second;
    void *result;
    f32 value;

    root = *(void **)arg0;
    index = func_80265508(*(void **)((char *)root + 0x2B60),
                          *(s32 *)((char *)root + 0x2B64), arg1);
    if (index != -1) {
        index *= 2;
        first = func_8028FD94(*(void **)((char *)*(void **)arg0 + 0x2B50), index | 1);
        second = func_8028FD94(*(void **)((char *)*(void **)arg0 + 0x2B50), index);
        *(s32 *)((char *)arg0 + 0x24) = *(s32 *)second;
        value = func_802B2350(*(u16 *)((char *)second + 4));
        *(f32 *)((char *)arg0 + 0x30) = value;
        if (value <= 0.0f) {
            *(f32 *)((char *)arg0 + 0x30) = D_800C90F8;
        }
        result = first;
    } else {
        result = 0;
    }
    *(void **)((char *)arg0 + 0xC) = result;
    return result != 0;
}
