typedef struct ListNode80290528 ListNode80290528;

struct ListNode80290528 {
    char unknown000[0x1D0];
    unsigned int flags;
    int *reference_count;
    ListNode80290528 *previous;
    ListNode80290528 *next;
};

extern ListNode80290528 *D_80135200;
extern ListNode80290528 *D_80135204;
extern ListNode80290528 *D_80135208;

/** Unlink an active node and return it to the global free list. */
void func_80290528(ListNode80290528 *node) {
    ListNode80290528 *oldHead;

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
        if (D_80135204 == node) {
            D_80135204 = node->next;
        }
        if (D_80135208 == node) {
            D_80135208 = node->previous;
        }
        oldHead = D_80135200;
        node->previous = 0;
        *(ListNode80290528 *volatile *) &node->next = oldHead;
        D_80135200 = node;
    }
}
