#include "span_1000/code_80259014.h"
#include "types.h"









void func_802599EC_de(void *arg0, s32 arg1) {
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
