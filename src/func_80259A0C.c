#include "basetypes.h"

typedef struct ListNode ListNode;

struct ListNode {
    ListNode *prev;
    ListNode *next;
    unsigned char pad08[0xB4];
    s32 valueBC;
};

typedef struct func_80259A0C_S1 func_80259A0C_S1;
typedef union func_80259A0C_S1_UD8 { ListNode v0; ListNode* v1; } func_80259A0C_S1_UD8;
struct func_80259A0C_S1 {
    char pad0[0x4];
    union { ListNode node; struct { void *first; ListNode *second; } links; } at4;
    char padC4[0xD8 - 0x4 - sizeof(ListNode)];
    func_80259A0C_S1_UD8 unkD8;
};

void func_80259A0C(void *arg0, s32 arg1) {
    ListNode *node;
    ListNode *next;
    ListNode *sentinel;
    ListNode *loop_sentinel;
    ListNode *append_sentinel;
    ListNode *tail;

    node = ((func_80259A0C_S1 *)(arg0))->at4.links.second;
    sentinel = &((func_80259A0C_S1 *)(arg0))->at4.node;
    append_sentinel = &((func_80259A0C_S1 *)(arg0))->unkD8.v0;
    if (node != sentinel) {
        loop_sentinel = sentinel;
        do {
            next = node->next;
            if (node->valueBC == arg1) {
                node->prev->next = next;
                node->next->prev = node->prev;
                tail = ((func_80259A0C_S1 *)(arg0))->unkD8.v1;
                node->next = append_sentinel;
                node->prev = tail;
                (((func_80259A0C_S1 *)(arg0))->unkD8.v1)->next = node;
                ((func_80259A0C_S1 *)(arg0))->unkD8.v1 = node;
            }
            node = next;
        } while (node != loop_sentinel);
    }
}
