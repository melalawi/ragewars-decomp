#include "basetypes.h"

extern s32 func_802C2020(void);
extern void func_80255E78(void *, s32);
extern s32 func_80255CB4(void *, s32);
extern void func_802C2040(s32 arg0);

void func_80285D00(s32 *arg0) {
    void *node;
    void *next;
    s32 saved;

    saved = func_802C2020();
    node = *(void **)((char *)arg0 + 0x14);
    if (node != 0) {
        do {
            next = *(void **)((char *)node + 4);
            func_80255E78((char *)arg0 + 0x14, node);
            func_80255CB4(arg0, (s32)node);
            node = next;
        } while (node != 0);
    }
    *(s32 *)((char *)arg0 + 0x28) = 0;
    func_802C2040(saved);
}
