#include "basetypes.h"

extern char *func_8028FD94(s32 *, s32);
extern void func_80270B1C(void *arg0, s32 arg1, void *arg2, void *arg3);
extern f32 D_800C9258;

void func_80260570(void *arg0, s32 arg1, void *arg2) {
    char *o = (char *)arg0;
    s16 idx;
    char *rec;
    void *base;
    f32 scale;

    idx = *(s16 *)(*(char **)(o + 0x0) + arg1 * 4 + 2);
    if (idx == -1) {
        rec = *(char **)(o + 0x4) + arg1 * 0x14;
        scale = *(f32 *)((char *)&D_800C9258 + 4);
        *(f32 *)((char *)arg2 + 0x0) = (f32)(*(s16 *)(rec + 0xC)) * scale;
        *(f32 *)((char *)arg2 + 0x4) = (f32)(*(s16 *)(rec + 0xE)) * scale;
        *(f32 *)((char *)arg2 + 0x8) = (f32)(*(s16 *)(rec + 0x10)) * scale;
        *(f32 *)((char *)arg2 + 0xC) = (f32)(*(s16 *)(rec + 0x12)) * scale;
        return;
    }
    base = func_8028FD94(*(void **)(o + 0xC), (s32) idx);
    func_80270B1C(arg2, *(s32 *)(o + 0x20),
                  (char *)base + (*(s32 *)(o + 0x10)) * 4,
                  (char *)base + (*(s32 *)(o + 0x14)) * 4);
}
