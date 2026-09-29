typedef struct ListNode ListNode;

struct ListNode {
    char unknown000[0x1D0];
    unsigned int flags;
    int *reference_count;
    ListNode *previous;
    ListNode *next;
};

typedef struct func_80290930_S1 func_80290930_S1;
struct func_80290930_S1 {
    char pad0[0x3C00];
    ListNode* unk3C00;
    char pad3C00[0x3C04 - 0x3C00 - sizeof(ListNode*)];
    ListNode* unk3C04;
    char pad3C04[0x3C08 - 0x3C04 - sizeof(ListNode*)];
    ListNode* unk3C08;
};

/** Unlink an active node and return it to the container's free list. */
void func_80290930(void *container, ListNode *node) {
    ListNode *free_node;

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
