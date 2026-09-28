#include "basetypes.h"

extern void func_80255D10(void *, s32, s32);
extern s32 func_80255C58(void *, s32);
extern s32 func_80255CB4(void *, s32);

void func_8028472C(void *arg0, void *arg1)
{
    void *current;
    s32 key;

    current = *(void **)((char *)arg0 + 0xFC14);
    if (current != 0) {
        key = *(s32 *)((char *)arg1 + 0x118);
loop:
        if (*(s32 *)((char *)current + 0x118) != key) {
            current = *(void **)((char *)current + 0x1F4);
            if (current != 0) {
                goto loop;
            }
        }
    }

    if (current != 0) {
        func_80255D10((char *)arg0 + 0xFC14, current, arg1);
    } else if (**(s32 **)((char *)arg1 + 0x118) & 0x2000) {
        func_80255C58((char *)arg0 + 0xFC14, arg1);
    } else {
        func_80255CB4((char *)arg0 + 0xFC14, arg1);
    }

    *(s32 *)((char *)arg1 + 0x5C) |= 0x01000000;
}
