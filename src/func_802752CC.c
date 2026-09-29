#include "basetypes.h"

typedef struct Node752 {
    int pad0;
    void *prev;
    void *cur;
    void *next;
} Node752;

typedef struct Vec752 {
    f32 x;
    f32 y;
    f32 z;
} Vec752;

extern f32 D_800C9AB8;
extern int D_800D2630;
extern int D_80115DF0;
extern void func_80272088(Vec752 *, Vec752 *, Vec752 *);

typedef struct func_802752CC_S1 func_802752CC_S1;
typedef struct func_802752CC_S2 func_802752CC_S2;
typedef struct func_802752CC_S3 func_802752CC_S3;
typedef struct func_802752CC_S4 func_802752CC_S4;
typedef struct func_802752CC_S5 func_802752CC_S5;
struct func_802752CC_S1 {
    f32 unk0;
    char pad0[0x8 - 0x0 - sizeof(f32)];
    f32 unk8;
    char pad8[0xC - 0x8 - sizeof(f32)];
    f32 unkC;
};
struct func_802752CC_S2 {
    f32 unk0;
    char pad0[0x8 - 0x0 - sizeof(f32)];
    f32 unk8;
    char pad8[0xC - 0x8 - sizeof(f32)];
    f32 unkC;
};
struct func_802752CC_S3 {
    char pad0[0xC];
    f32 unkC;
};
struct func_802752CC_S4 {
    char pad0[0xC];
    f32 unkC;
};
struct func_802752CC_S5 {
    char pad0[0xC];
    f32 unkC;
};

f32 func_802752CC(Node752 *node, f32 x, f32 z) {
    Vec752 normal;
    Vec752 point;
    Vec752 a;
    Vec752 b;
    char *p;
    char *q;

    if (node == 0) {
        return 0.0f;
    }
    if ((int)node != D_800D2630) {
        p = node->cur;
        q = node->prev;
        a.x = ((func_802752CC_S1 *)(p))->unk0 - ((func_802752CC_S2 *)(q))->unk0;
        p = node->cur;
        q = node->prev;
        a.y = ((func_802752CC_S1 *)(p))->unkC - ((func_802752CC_S2 *)(q))->unkC;
        p = node->cur;
        q = node->prev;
        a.z = ((func_802752CC_S1 *)(p))->unk8 - ((func_802752CC_S2 *)(q))->unk8;
        p = node->next;
        q = node->cur;
        b.x = ((func_802752CC_S1 *)(p))->unk0 - ((func_802752CC_S2 *)(q))->unk0;
        p = node->next;
        q = node->cur;
        b.y = ((func_802752CC_S1 *)(p))->unkC - ((func_802752CC_S2 *)(q))->unkC;
        p = node->next;
        q = node->cur;
        b.z = ((func_802752CC_S1 *)(p))->unk8 - ((func_802752CC_S2 *)(q))->unk8;
        func_80272088((Vec752 *)&D_80115DF0, &b, &a);
    }
    normal = *(Vec752 *)&D_80115DF0;
    D_800D2630 = (int)node;
    if (normal.y == 0.0f) {
        return (((func_802752CC_S3 *)(node->prev))->unkC +
                ((func_802752CC_S4 *)(node->cur))->unkC +
                ((func_802752CC_S5 *)(node->next))->unkC) * D_800C9AB8;
    }
    p = node->prev;
    point.x = ((func_802752CC_S1 *)(p))->unk0;
    p = node->prev;
    point.y = ((func_802752CC_S1 *)(p))->unkC;
    p = node->prev;
    point.z = ((func_802752CC_S1 *)(p))->unk8;
    return (((point.z - z) * normal.z) +
            ((point.x - x) * normal.x) + (point.y * normal.y)) /
           normal.y;
}
