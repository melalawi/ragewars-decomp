#include "basetypes.h"

extern char *func_8028FD94(s32 *, s32);
extern f32 D_800C8C68;

void func_8024CA00(void *arg0, s32 arg1, void *arg2) {
    char *o = (char *)arg0;
    s16 idx;
    char *rec;
    void *base;
    char *a;

    idx = *(s16 *)(*(char **)(o + 0x0) + arg1 * 4 + 2);
    if (idx == -1) {
        f32 scale;
        rec = *(char **)(o + 0x4) + arg1 * 0x14;
        scale = D_800C8C68;
        *(f32 *)((char *)arg2 + 0x0) = (f32)(*(s16 *)(rec + 0xC)) * scale;
        *(f32 *)((char *)arg2 + 0x4) = (f32)(*(s16 *)(rec + 0xE)) * scale;
        *(f32 *)((char *)arg2 + 0x8) = (f32)(*(s16 *)(rec + 0x10)) * scale;
        *(f32 *)((char *)arg2 + 0xC) = (f32)(*(s16 *)(rec + 0x12)) * scale;
        return;
    }
    base = func_8028FD94(*(void **)(o + 0xC), (s32)idx);
    a = (char *)base + (*(s32 *)(o + 0x10)) * 4;
    base = (char *)base + (*(s32 *)(o + 0x14)) * 4;
    {
        f32 scale;
        scale = *(f32 *)(o + 0x20);
        *(f32 *)((char *)arg2 + 0x0) = *(f32 *)(a + 0x0) + scale * (*(f32 *)((char *)base + 0x0) - *(f32 *)(a + 0x0));
        *(f32 *)((char *)arg2 + 0x4) = *(f32 *)(a + 0x4) + scale * (*(f32 *)((char *)base + 0x4) - *(f32 *)(a + 0x4));
        *(f32 *)((char *)arg2 + 0x8) = *(f32 *)(a + 0x8) + scale * (*(f32 *)((char *)base + 0x8) - *(f32 *)(a + 0x8));
        *(f32 *)((char *)arg2 + 0xC) = *(f32 *)(a + 0xC) + scale * (*(f32 *)((char *)base + 0xC) - *(f32 *)(a + 0xC));
    }
}
