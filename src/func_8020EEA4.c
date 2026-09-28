#include "basetypes.h"

extern void *func_8020C994(void *, s32);
extern s32 func_8020F55C(s32 arg0);
extern s32 func_8020F57C(s32 arg0);
extern s32 D_8013B364;
extern f32 D_800C6FD4;

void func_8020EEA4(void) {
    s32 *base;
    void *node;
    void *result;
    f32 addVal;
    u16 field0E;

    base = &D_8013B364;
    node = *(void **)((char *)base + 0x24);
    if (node != 0) {
        addVal = D_800C6FD4;
        do {
            result = func_8020C994(base, *(s32 *)node);
            if (*(u16 *)((char *)result + 0xC) & 1) {
                field0E = *(u16 *)((char *)result + 0xE);
                if (func_8020F55C(field0E) != 0 || func_8020F57C(*(u16 *)((char *)result + 0xE)) != 0) {
                    *(f32 *)((char *)node + 0x18) = *(f32 *)((char *)node + 0x18) + addVal;
                }
            }
            node = *(void **)((char *)node + 0x10);
        } while (node != 0);
    }
}
