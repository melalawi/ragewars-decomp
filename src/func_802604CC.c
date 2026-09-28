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

extern void *func_8028FD94(void *arg0, s32 arg1);
extern void func_80272038(void *arg0, s32 arg1, void *arg2, void *arg3);

void func_802604CC(void *arg0, s32 arg1, void *arg2) {
    char *o = (char *) arg0;
    s16 idx;
    Rec *recs;
    void *base;

    idx = *(s16 *)(*(char **)(o + 0x0) + arg1 * 4);
    if (idx == -1) {
        recs = *(Rec **)(o + 0x4);
        *(Vec3i *)arg2 = *(Vec3i *)&recs[arg1];
        return;
    }
    base = func_8028FD94(*(void **)(o + 0x8), (s32) idx);
    func_80272038(arg2, *(s32 *)(o + 0x20),
                  (char *)base + (*(s32 *)(o + 0x18)) * 4,
                  (char *)base + (*(s32 *)(o + 0x1C)) * 4);
}
