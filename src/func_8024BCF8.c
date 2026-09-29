#include "basetypes.h"

typedef struct Vec3 {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

typedef struct Node75 {
    s32 pad0;
    Vec3 *prev;
    Vec3 *cur;
    Vec3 *next;
} Node75;

extern f32 func_802BC200(f32 angle);
extern f32 func_802BB630(f32 angle);
extern Vec3 *func_80275C38(Vec3 *out, Node75 *node);

typedef struct func_8024BCF8_S1 func_8024BCF8_S1;
struct func_8024BCF8_S1 {
    char pad0[0xC];
    f32 unkC;
    char padC[0x14 - 0xC - sizeof(f32)];
    Node75* unk14;
    char pad14[0x6C - 0x14 - sizeof(Node75*)];
    f32 unk6C;
};

s32 func_8024BCF8(void *arg0) {
    Vec3 direction;
    Node75 *node;
    f32 upper;
    f32 upperNext;
    f32 lower;
    f32 lowerNext;
    f32 sine;
    f32 cosine;

    node = ((func_8024BCF8_S1 *)(arg0))->unk14;
    if (node != 0) {
        upper = node->cur->y;
        if (node->prev->y <= upper) {
        } else {
            upper = node->prev->y;
        }
        upperNext = node->next->y;
        if (upper <= upperNext) {
        } else {
            upperNext = upper;
        }
        lower = node->cur->y;
        if (lower <= node->prev->y) {
        } else {
            lower = node->prev->y;
        }
        lowerNext = node->next->y;
        if (lowerNext <= lower) {
        } else {
            lowerNext = lower;
        }
        if (upperNext < ((func_8024BCF8_S1 *)(arg0))->unkC) {
            return 0;
        }
        if (((func_8024BCF8_S1 *)(arg0))->unkC < lowerNext) {
            return 0;
        }
        sine = func_802BC200(((func_8024BCF8_S1 *)(arg0))->unk6C);
        cosine = func_802BB630(((func_8024BCF8_S1 *)(arg0))->unk6C);
        func_80275C38(&direction, node);
        if (direction.x * -sine + direction.z * -cosine < 0.0f) {
            return 1;
        }
    }
    return 0;
}
