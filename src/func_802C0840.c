#include "basetypes.h"

typedef struct ThreadNode ThreadNode;

struct ThreadNode {
    ThreadNode *next;
    s32 priority;
    ThreadNode **queue;
    s32 unk0C;
    u16 state;
};

extern s32 D_800D9298;
extern ThreadNode *D_800D92A0;

extern u32 func_802C2020(void);
extern void func_802C2040(u32 token);
extern void func_802C15F8(ThreadNode **queue, ThreadNode *node);
extern ThreadNode *func_802C1648(ThreadNode **queue);
extern void func_802C1660(void);
extern void func_802C145C(ThreadNode **queue, ThreadNode *node);

void func_802C0840(ThreadNode *arg0) {
    ThreadNode **sentinel;
    u32 token;

    token = func_802C2020();
    if (arg0->state == 1) {
        goto state_one;
    }
    if (arg0->state != 8) {
        goto state_done;
    }
    arg0->state = 2;
    func_802C15F8((ThreadNode **)&D_800D9298, arg0);
    goto state_done;

state_one:
    if (arg0->queue == 0) {
        goto insert_arg;
    }
    sentinel = (ThreadNode **)&D_800D9298;
    if (arg0->queue == sentinel) {
insert_arg:
        arg0->state = 2;
        func_802C15F8((ThreadNode **)&D_800D9298, arg0);
    } else {
        arg0->state = 8;
        func_802C15F8(arg0->queue, arg0);
        func_802C15F8(sentinel, func_802C1648(arg0->queue));
    }
state_done:
    if (D_800D92A0 == 0) {
        func_802C1660();
    } else if (D_800D92A0->priority < (*(ThreadNode **)&D_800D9298)->priority) {
        D_800D92A0->state = 2;
        func_802C145C((ThreadNode **)&D_800D9298, D_800D92A0);
    }
    func_802C2040(token);
}
