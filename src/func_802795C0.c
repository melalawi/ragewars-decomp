typedef struct ListNode802795C0 ListNode802795C0;
struct ListNode802795C0 {
    ListNode802795C0 *prev;
    ListNode802795C0 *next;
};

typedef struct {
    ListNode802795C0 *head;
    ListNode802795C0 *tail;
    int count;
} List802795C0;

int func_802795C0(List802795C0 *arg0, ListNode802795C0 *arg1) {
    if (arg1->next != 0) {
        arg1->next->prev = arg1->prev;
    }
    if (arg1->prev != 0) {
        arg1->prev->next = arg1->next;
    }
    if (arg0->head == arg1) {
        arg0->head = arg1->next;
    }
    if (arg0->tail == arg1) {
        arg0->tail = arg1->prev;
    }
    arg0->count -= 1;
    return arg0->count;
}
