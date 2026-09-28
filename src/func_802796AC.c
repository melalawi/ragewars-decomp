typedef struct ListNode ListNode;

struct ListNode {
    ListNode *prev;
    ListNode *next;
};

typedef struct {
    ListNode *head;
    ListNode *tail;
    int count;
} List;

typedef struct {
    List active;
    List inactive;
} Lists;

ListNode *func_802796AC(Lists *arg0) {
    ListNode *node;
    ListNode *tail;
    List *inactive;

    node = arg0->active.head;
    if (node != 0) {
        if (node->next != 0) {
            node->next->prev = node->prev;
        }
        if (node->prev != 0) {
            node->prev->next = node->next;
        }
        if (arg0->active.head == node) {
            arg0->active.head = node->next;
        }
        if (arg0->active.tail == node) {
            arg0->active.tail = node->prev;
        }
        arg0->active.count -= 1;

        inactive = &arg0->inactive;
        if (inactive->count == 0) {
            inactive->head = node;
            inactive->tail = node;
            node->prev = 0;
            node->next = 0;
        } else {
            tail = inactive->tail;
            *(ListNode * volatile *)((char *)node + 4) = 0;
            node->prev = tail;
            inactive->tail->next = node;
            inactive->tail = node;
        }
        inactive->count += 1;
    }
    return node;
}
