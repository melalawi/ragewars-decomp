#include "basetypes.h"

typedef struct ListNode ListNode;

struct ListNode {
    ListNode *prev;
    ListNode *next;
    unsigned char pad08[0xB4];
    s32 valueBC;
};

void func_80259A0C(void *arg0, s32 arg1) {
    ListNode *node;
    ListNode *next;
    ListNode *sentinel;
    ListNode *loop_sentinel;
    ListNode *append_sentinel;
    ListNode *tail;

    node = *(ListNode **)((char *)arg0 + 8);
    sentinel = (ListNode *)((char *)arg0 + 4);
    append_sentinel = (ListNode *)((char *)arg0 + 0xD8);
    if (node != sentinel) {
        loop_sentinel = sentinel;
        do {
            next = node->next;
            if (node->valueBC == arg1) {
                node->prev->next = next;
                node->next->prev = node->prev;
                tail = *(ListNode **)((char *)arg0 + 0xD8);
                node->next = append_sentinel;
                node->prev = tail;
                (*(ListNode **)((char *)arg0 + 0xD8))->next = node;
                *(ListNode **)((char *)arg0 + 0xD8) = node;
            }
            node = next;
        } while (node != loop_sentinel);
    }
}
