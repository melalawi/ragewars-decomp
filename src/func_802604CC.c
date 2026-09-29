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

typedef struct func_802604CC_S1 func_802604CC_S1;
struct func_802604CC_S1 {
    char* unk0;
    char pad0[0x4 - 0x0 - sizeof(char*)];
    Rec* unk4;
    char pad4[0x8 - 0x4 - sizeof(Rec*)];
    void* unk8;
    char pad8[0x18 - 0x8 - sizeof(void*)];
    s32 unk18;
    char pad18[0x1C - 0x18 - sizeof(s32)];
    s32 unk1C;
    char pad1C[0x20 - 0x1C - sizeof(s32)];
    s32 unk20;
};

void func_802604CC(void *arg0, s32 arg1, void *arg2) {
    char *o = (char *) arg0;
    s16 idx;
    Rec *recs;
    void *base;

    idx = *(s16 *)(((func_802604CC_S1 *)(o))->unk0 + arg1 * 4);
    if (idx == -1) {
        recs = ((func_802604CC_S1 *)(o))->unk4;
        *(Vec3i *)arg2 = *(Vec3i *)&recs[arg1];
        return;
    }
    base = func_8028FD94(((func_802604CC_S1 *)(o))->unk8, (s32) idx);
    func_80272038(arg2, ((func_802604CC_S1 *)(o))->unk20,
                  (char *)base + (((func_802604CC_S1 *)(o))->unk18) * 4,
                  (char *)base + (((func_802604CC_S1 *)(o))->unk1C) * 4);
}
