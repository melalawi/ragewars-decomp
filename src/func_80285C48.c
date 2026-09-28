#include "basetypes.h"

extern u32 func_802C2020(void);
extern void func_802C2040(u32);
extern s32 func_80264E10(void *);
extern void func_80255E78(void *, s32);
extern s32 func_80255CB4(void *, s32);

void func_80285C48(void *arg0) {
    void *node;
    void *next;
    s32 flag;
    u32 saved;
    s32 *inner;

    saved = func_802C2020();
    for (node = *(void **)((char *)arg0 + 0x14); node != 0; node = next) {
        next = *(void **)((char *)node + 4);
        flag = 0;
        if (func_80264E10((char *)node + 0x20) != 0 || func_80264E10((char *)node + 0x2C) != 0) {
            flag = 1;
        }
        if (flag == 0) {
            continue;
        }
        inner = *(s32 **)((char *)node + 0x38);
        if (inner != 0) {
            *inner = 0;
        }
        func_80255E78((char *)arg0 + 0x14, node);
        func_80255CB4(arg0, node);
    }
    func_802C2040(saved);
}
