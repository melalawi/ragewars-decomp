struct Tree {
    char pad0[4];
    struct Tree *next;
    struct Tree *child;
    short id;
};

struct Tree *func_8040ECB0(struct Tree *node, unsigned short id) {
    struct Tree *found = 0;

    while (node != 0 && found == 0) {
        if (node->id == id) {
            found = node;
        }
        if (found == 0 && node->child != 0) {
            found = func_8040ECB0(node->child, id);
        }
        node = node->next;
    }
    return found;
}
