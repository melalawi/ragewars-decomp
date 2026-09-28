typedef struct Node802B7520 {
    struct Node802B7520 *prev;
    struct Node802B7520 *next;
} Node802B7520;

void func_802B7520(Node802B7520 *arg0) {
    if (arg0->prev != 0) {
        arg0->prev->next = arg0->next;
    }
    if (arg0->next != 0) {
        arg0->next->prev = arg0->prev;
    }
}
