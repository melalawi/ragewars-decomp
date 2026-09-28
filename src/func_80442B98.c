typedef struct Node { char pad0[0x28]; short kind; char pad1[0x1A8]; struct Node *next; } Node;

int func_80442B98(Node **head) {
    Node *node = *head;
    int count = 0;
    while (node != 0) {
        if (node->kind != 4) {
            count++;
        }
        node = node->next;
    }
    return count;
}
