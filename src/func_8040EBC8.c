#include "basetypes.h"

/* Returns the union of the flag halfwords at offset 0x12 of every node in a linked list. */
struct Node {
    struct Node *next;
    char pad4[0x12 - 4];
    unsigned short flags;
};

s32 func_8040EBC8(struct Node *node) {
    s32 flags = 0;

    while (node != 0) {
        flags |= node->flags;
        node = node->next;
    }
    return flags;
}
