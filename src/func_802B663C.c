typedef struct Node802B663C Node802B663C;

struct Node802B663C {
    Node802B663C *next;
};

typedef struct {
    char pad[0x64];
    Node802B663C *head;
    Node802B663C *tail;
    Node802B663C *free;
} List802B663C;

void func_802B663C(List802B663C *arg0, void *arg1) {
    Node802B663C *node;
    Node802B663C *prev;

    prev = 0;
    node = arg0->head;
    while (node != 0) {
        if ((void *)((char *)node + 4) == arg1) {
            if (prev != 0) {
                prev->next = node->next;
            } else {
                arg0->head = node->next;
            }
            if (node == arg0->tail) {
                arg0->tail = prev;
            }
            node->next = arg0->free;
            arg0->free = node;
            return;
        }
        prev = node;
        node = node->next;
    }
}
