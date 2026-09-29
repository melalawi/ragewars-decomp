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

typedef struct func_8024C91C_S1 func_8024C91C_S1;
typedef struct func_8024C91C_S2 func_8024C91C_S2;
typedef struct func_8024C91C_S3 func_8024C91C_S3;
typedef struct func_8024C91C_S4 func_8024C91C_S4;
struct func_8024C91C_S1 {
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
    f32 unk20;
};
struct func_8024C91C_S2 {
    f32 unk0;
    char pad0[0x4 - 0x0 - sizeof(f32)];
    f32 unk4;
    char pad4[0x8 - 0x4 - sizeof(f32)];
    f32 unk8;
};
struct func_8024C91C_S3 {
    f32 unk0;
    char pad0[0x4 - 0x0 - sizeof(f32)];
    f32 unk4;
    char pad4[0x8 - 0x4 - sizeof(f32)];
    f32 unk8;
};
struct func_8024C91C_S4 {
    f32 unk0;
    char pad0[0x4 - 0x0 - sizeof(f32)];
    f32 unk4;
    char pad4[0x8 - 0x4 - sizeof(f32)];
    f32 unk8;
};

void func_8024C91C(void *arg0, s32 arg1, void *arg2) {
    char *o = (char *) arg0;
    s16 idx;
    Rec *recs;
    void *base;
    char *a;
    f32 scale;

    idx = *(s16 *)(((func_8024C91C_S1 *)(o))->unk0 + arg1 * 4);
    if (idx == -1) {
        recs = ((func_8024C91C_S1 *)(o))->unk4;
        *(Vec3i *)arg2 = *(Vec3i *)&recs[arg1];
        return;
    }
    base = func_8028FD94(((func_8024C91C_S1 *)(o))->unk8, (s32) idx);
    a = (char *)base + (((func_8024C91C_S1 *)(o))->unk18) * 4;
    base = (char *)base + (((func_8024C91C_S1 *)(o))->unk1C) * 4;

    scale = ((func_8024C91C_S1 *)(o))->unk20;

    ((func_8024C91C_S2 *)(arg2))->unk0 = ((func_8024C91C_S3 *)(a))->unk0 + scale * (((func_8024C91C_S4 *)(base))->unk0 - ((func_8024C91C_S3 *)(a))->unk0);
    ((func_8024C91C_S2 *)(arg2))->unk4 = ((func_8024C91C_S3 *)(a))->unk4 + scale * (((func_8024C91C_S4 *)(base))->unk4 - ((func_8024C91C_S3 *)(a))->unk4);
    ((func_8024C91C_S2 *)(arg2))->unk8 = ((func_8024C91C_S3 *)(a))->unk8 + scale * (((func_8024C91C_S4 *)(base))->unk8 - ((func_8024C91C_S3 *)(a))->unk8);
}
