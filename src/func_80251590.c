#include "basetypes.h"

typedef struct Node80251590 {
    u32 start;
    u32 end;
    s32 unk8;
    volatile u32 flags;
    char pad10[0x14];
    struct Node80251590 *next;
} Node80251590;

typedef struct Queue80251590 {
    Node80251590 *head;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
} Queue80251590;

extern void func_80255C40(s32 *, s32, s32);
extern void func_80255ACC(void *, s32);
extern s32 func_802558C0(void *, s32);
extern void func_80265398(u32, u32, s32);
extern void func_80255E78(void *, s32);
extern s32 func_80255CB4(void *, s32);
extern void func_80255F10(void *);
extern void func_80255D10(void *, s32, s32);

extern Node80251590 *D_80104568[];
extern Node80251590 *D_80104584;
extern s32 D_801051A8;

void func_80251590(s32 unused, s32 arg1) {
    Queue80251590 queue;
    Node80251590 *node;
    Node80251590 *next;
    Node80251590 *scan;
    u32 split;
    s32 *arena_end;
    s32 *arena;
    Node80251590 * volatile *pool;

    func_80255C40(&queue, 0x20, 0x24);
    if (arg1 != 0 || D_80104568[0] == 0) {
        D_80104568[0] = D_80104568[7];
        if (D_80104568[7] == 0) {
            goto drain;
        }
    }

    pool = D_80104568;
    arena_end = &D_801051A8;
    arena = arena_end - 2;
    do {
        node = pool[0];
        pool[0] = node->next;
        if (!(node->flags & 0x701) && (u32)(*arena_end + 0x20) < node->start) {
            func_80255ACC(arena, node->start);
            split = func_802558C0(arena, node->end);
            if (split < node->start) {
                func_80265398(split, node->start, node->end);
                node->start = split;
                func_80255E78(&pool[7], (s32)node);
                func_80255CB4(&queue, (s32)node);
            }
            if (arg1 == 0) {
                break;
            }
        }
    } while (D_80104568[0] != 0);

drain:
    node = queue.head;
    while (node != 0) {
        next = node->next;
        func_80255F10(&queue);
        scan = D_80104584;
        while (scan != 0) {
            if (scan->start > node->start) {
                func_80255D10(&D_80104584, (s32)scan, (s32)node);
                break;
            }
            scan = scan->next;
        }
        if (scan == 0) {
            func_80255CB4(&D_80104584, (s32)node);
        }
        node->flags |= 0x1000;
        node = next;
    }
}
