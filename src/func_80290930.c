typedef struct ListNode ListNode;

struct ListNode {
    char unknown000[0x1D0];
    unsigned int flags;
    int *reference_count;
    ListNode *previous;
    ListNode *next;
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
        if (*(ListNode **)((char *)container + 0x3C04) == node) {
            *(ListNode **)((char *)container + 0x3C04) = node->next;
        }
        if (*(ListNode **)((char *)container + 0x3C08) == node) {
            *(ListNode **)((char *)container + 0x3C08) = node->previous;
        }
        free_node = *(ListNode **)((char *)container + 0x3C00);
        node->previous = 0;
        node->next = free_node;
        *(ListNode **)((char *)container + 0x3C00) = node;
    }
}
