#include "basetypes.h"

typedef struct Queue {
    void **head;
    s32 unk04;
    s32 count;
    s32 index;
    s32 capacity;
    void **entries;
} Queue;

typedef struct Node80253E04 {
    s32 field0;
    s32 field4;
    s32 references;
    u32 flags;
} Node80253E04;

typedef struct NodePair80253E04 {
    Node80253E04 *first;
    Node80253E04 *second;
} NodePair80253E04;

extern s32 D_8010515C;
extern Queue D_80105140;

extern u32 func_802C2020(void);
extern void func_802C2040(u32);
extern void func_802C0390(s32, s32, s32);
extern s32 func_802C0510(Queue *, s32, s32);

void func_80253E04(s32 arg0, NodePair80253E04 *arg1, Node80253E04 *arg2) {
    s32 temp_v1;
    s32 temp_v1_2;
    u32 temp_a0;
    u32 temp_v0;
    NodePair80253E04 *temp_s0;
    Node80253E04 *temp_s1;
    Node80253E04 *node;

    temp_s0 = arg1;
    temp_s1 = arg2;
    temp_a0 = func_802C2020();
    temp_v1 = D_8010515C + 1;
    D_8010515C = temp_v1;
    if (temp_v1 != 1) {
        func_802C2040(temp_a0);
        func_802C0390((s32)&D_80105140, 0, 1);
    } else {
        func_802C2040(temp_a0);
    }

    node = temp_s0->first;
    if (node != 0) {
        node->references -= 1;
        if (node->references == 0) {
            node->flags &= ~0x100;
        }
    }
    node = temp_s0->second;
    if (node != 0) {
        node->references -= 1;
        if (node->references == 0) {
            node->flags &= ~0x100;
        }
    }
    temp_s0->first = temp_s1;

    temp_v0 = func_802C2020();
    temp_v1_2 = D_8010515C - 1;
    D_8010515C = temp_v1_2;
    if (temp_v1_2 != 0) {
        func_802C2040(temp_v0);
        func_802C0510(&D_80105140, 0, 1);
        return;
    }
    func_802C2040(temp_v0);
}
