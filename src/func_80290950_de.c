#include "span_1000/code_8028FC98.h"







/** Unlink an active node and return it to the container's free list. */
void func_80290950_de(void *container, ListNode80290528 *node) {
    ListNode80290528 *free_node;

    if (node->flags & 1) {
        node->flags &= ~1;
        if (node->reference_count != 0) {
            (*node->reference_count)--;
        }
        if (node->previous != 0) {
            node->previous->next = node->next;
        }
        if (node->next != 0) {
            node->next->previous = node->previous;
        }
        if (((func_80290930_S1 *)(container))->unk3C04 == node) {
            ((func_80290930_S1 *)(container))->unk3C04 = node->next;
        }
        if (((func_80290930_S1 *)(container))->unk3C08 == node) {
            ((func_80290930_S1 *)(container))->unk3C08 = node->previous;
        }
        free_node = ((func_80290930_S1 *)(container))->unk3C00;
        node->previous = 0;
        node->next = free_node;
        ((func_80290930_S1 *)(container))->unk3C00 = node;
    }
}
