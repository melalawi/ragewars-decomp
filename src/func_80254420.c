#include "basetypes.h"

typedef struct Node80254858 {
    s32 field0;
    s32 field4;
    s32 references;
    s32 flags;
} Node80254858;

typedef struct Queue {
    void **head;
    s32 unk04;
    s32 count;
    s32 index;
    s32 capacity;
    void **entries;
} Queue;

extern s32 D_8010515C;
extern Queue D_80105140;

extern u32 func_802C2020(void);
extern void func_802C2040(u32);
extern void func_802C0390(s32, s32, s32);
extern Node80254858 *func_80251448(s32, u32);
extern s32 func_80254B2C(s32, s32, s32, u32);
extern void func_80254C10(s32, Node80254858 *);
extern void func_80254A70(s32, Node80254858 *);
extern s32 func_802C0510(Queue *, s32, s32);

Node80254858 *func_80254420(s32 arg0, void *arg1, s32 arg2) {
    Node80254858 *node;
    s32 result;
    s32 counter;
    s32 counter2;
    u32 token;
    u32 token2;
    u32 flags;

    token = func_802C2020();
    counter = D_8010515C + 1;
    D_8010515C = counter;
    if (counter != 1) {
        func_802C2040(token);
        func_802C0390((s32)&D_80105140, 0, 1);
    } else {
        func_802C2040(token);
    }
    flags = *(u32 *)((char *)arg1 + 0x1C);
    node = func_80251448(0, flags);
    if (node != 0) {
        node->references++;
        node->flags |= 0x100;
        result = func_80254B2C(0, arg2, (flags >> 5) & 1, flags);
        node->field0 = result;
        if (result != 0) {
            node->field4 = arg2;
            node->flags |= flags;
            func_80254C10(0, node);
        } else {
            node->references--;
            if (node->references == 0) {
                node->flags &= ~0x100;
            }
            func_80254A70(0, node);
            node = 0;
        }
    }
    token2 = func_802C2020();
    counter2 = D_8010515C - 1;
    D_8010515C = counter2;
    if (counter2 != 0) {
        func_802C2040(token2);
        func_802C0510(&D_80105140, 0, 1);
    } else {
        func_802C2040(token2);
    }
    return node;
}
