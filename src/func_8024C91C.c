#include "basetypes.h"

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} Vec3i;

typedef struct {
    s32 x;
    s32 y;
    s32 z;
    s32 pad0;
    s32 pad1;
} Rec;

extern char *func_8028FD94(s32 *, s32);

void func_8024C91C(void *arg0, s32 arg1, void *arg2) {
    char *o = (char *) arg0;
    s16 idx;
    Rec *recs;
    void *base;
    char *a;
    f32 scale;

    idx = *(s16 *)(*(char **)(o + 0x0) + arg1 * 4);
    if (idx == -1) {
        recs = *(Rec **)(o + 0x4);
        *(Vec3i *)arg2 = *(Vec3i *)&recs[arg1];
        return;
    }
    base = func_8028FD94(*(void **)(o + 0x8), (s32) idx);
    a = (char *)base + (*(s32 *)(o + 0x18)) * 4;
    base = (char *)base + (*(s32 *)(o + 0x1C)) * 4;

    scale = *(f32 *)(o + 0x20);

    *(f32 *)((char *)arg2 + 0x0) = *(f32 *)(a + 0x0) + scale * (*(f32 *)((char *)base + 0x0) - *(f32 *)(a + 0x0));
    *(f32 *)((char *)arg2 + 0x4) = *(f32 *)(a + 0x4) + scale * (*(f32 *)((char *)base + 0x4) - *(f32 *)(a + 0x4));
    *(f32 *)((char *)arg2 + 0x8) = *(f32 *)(a + 0x8) + scale * (*(f32 *)((char *)base + 0x8) - *(f32 *)(a + 0x8));
}
