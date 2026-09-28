/* Returns the height of a path node's triangle plane at (x, z) from the cached edge cross product in D_80115E10, or the mean vertex height when the plane is vertical.
   Adapted from func_802752CC with the edge vectors computed through the func_80271FD8 subtract helper inside a static inline helper, the vertex read as a whole vector with y at offset 4, the null result a rodata constant, and the cache globals changed. */
#include "basetypes.h"

typedef struct Vec752 {
    f32 x;
    f32 y;
    f32 z;
} Vec752;

typedef struct Node752 {
    int pad0;
    Vec752 *prev;
    Vec752 *cur;
    Vec752 *next;
} Node752;

extern f32 D_800C9AEC;
extern f32 D_800C9AF0;
extern int D_800D2638;
extern int D_80115E10;
extern void func_80271FD8(Vec752 *, Vec752 *, Vec752 *);
extern void func_80272088(Vec752 *, Vec752 *, Vec752 *);

static inline void cross_edges(Node752 *node) {
    Vec752 a;
    Vec752 b;

    func_80271FD8(&a, node->cur, node->prev);
    func_80271FD8(&b, node->next, node->cur);
    func_80272088((Vec752 *)&D_80115E10, &a, &b);
}

f32 func_80275E44(Node752 *node, f32 x, f32 z) {
    Vec752 normal;
    Vec752 point;

    if (node == 0) {
        return D_800C9AEC;
    }
    if ((int)node != D_800D2638) {
        cross_edges(node);
    }
    normal = *(Vec752 *)&D_80115E10;
    D_800D2638 = (int)node;
    if (normal.y == 0.0f) {
        return (node->prev->y + node->cur->y + node->next->y) * D_800C9AF0;
    }
    point = *node->prev;
    return (((point.z - z) * normal.z) +
            ((point.x - x) * normal.x) + (point.y * normal.y)) /
           normal.y;
}
