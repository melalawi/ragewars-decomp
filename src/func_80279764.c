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

void func_80279764(Lists *arg0, ListNode *arg1) {
    List *inactive;
    ListNode *tail;

    inactive = &arg0->inactive;
    if (arg1->next != 0) {
        arg1->next->prev = arg1->prev;
    }
    if (arg1->prev != 0) {
        arg1->prev->next = arg1->next;
    }
    if (inactive->head == arg1) {
        inactive->head = arg1->next;
    }
    if (inactive->tail == arg1) {
        inactive->tail = arg1->prev;
    }
    inactive->count -= 1;

    if (arg0->active.count == 0) {
        arg0->active.head = arg1;
        arg0->active.tail = arg1;
        arg1->prev = 0;
        arg1->next = 0;
    } else {
        tail = arg0->active.tail;
        *(ListNode * volatile *)((char *)arg1 + 4) = 0;
        arg1->prev = tail;
        arg0->active.tail->next = arg1;
        arg0->active.tail = arg1;
    }
    arg0->active.count += 1;
}
