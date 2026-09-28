struct Node {
    char pad0[0x14];
    void **vtable;
    char pad18[0x1B8];
    struct Node *next;
};

struct Owner {
    char pad[4];
    struct Node *head;
};

void func_80442B44(struct Owner *owner) {
    struct Node *node = owner->head;

    while (node != 0) {
        ((void (*)(struct Node *, struct Owner *))node->vtable[4])(node, owner);
        node = node->next;
    }
}
