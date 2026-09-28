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
        a.x = *(f32 *)(p + 0) - *(f32 *)(q + 0);
        p = node->cur;
        q = node->prev;
        a.y = *(f32 *)(p + 12) - *(f32 *)(q + 12);
        p = node->cur;
        q = node->prev;
        a.z = *(f32 *)(p + 8) - *(f32 *)(q + 8);
        p = node->next;
        q = node->cur;
        b.x = *(f32 *)(p + 0) - *(f32 *)(q + 0);
        p = node->next;
        q = node->cur;
        b.y = *(f32 *)(p + 12) - *(f32 *)(q + 12);
        p = node->next;
        q = node->cur;
        b.z = *(f32 *)(p + 8) - *(f32 *)(q + 8);
        func_80272088((Vec752 *)&D_80115DF0, &b, &a);
    }
    normal = *(Vec752 *)&D_80115DF0;
    D_800D2630 = (int)node;
    if (normal.y == 0.0f) {
        return (*(f32 *)((char *)node->prev + 12) +
                *(f32 *)((char *)node->cur + 12) +
                *(f32 *)((char *)node->next + 12)) * D_800C9AB8;
    }
    p = node->prev;
    point.x = *(f32 *)(p + 0);
    p = node->prev;
    point.y = *(f32 *)(p + 12);
    p = node->prev;
    point.z = *(f32 *)(p + 8);
    return (((point.z - z) * normal.z) +
            ((point.x - x) * normal.x) + (point.y * normal.y)) /
           normal.y;
}
