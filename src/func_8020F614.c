#include "basetypes.h"

extern void *func_8020C994(void *, s32);
extern void func_8020D220(void *, s32);
extern s32 D_8013B364;

s32 func_8020F614(void) {
    s32 *base;
    void *node;
    void *result;
    s32 count;

    base = &D_8013B364;
    node = *(void **)((char *)base + 0x24);
    count = 0;
    if (node != 0) {
        do {
            result = func_8020C994(base, *(s32 *)node);
            if ((*(u16 *)((char *)result + 0xC) & 1) &&
                *(u16 *)((char *)result + 0xE) == 0x64E &&
                *(s8 *)((char *)(*(void **)((char *)node + 0x34)) + 0x1A4) == 0) {
                func_8020D220(base, *(s32 *)node);
                count += 1;
            }
            node = *(void **)((char *)node + 0x10);
        } while (node != 0);
    }
    return count;
}
