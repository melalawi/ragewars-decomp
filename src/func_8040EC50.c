#include "basetypes.h"

/* Returns whether any node in a linked list has bit 8 set in its flag halfword at offset 0x12. */
struct Node {
    struct Node *next;
    char pad4[0x12 - 4];
    unsigned short flags;
};

s32 func_8040EC50(struct Node *node) {
    u32 flags = 0;

    while (node != 0) {
        flags |= node->flags;
        node = node->next;
    }
    return (flags >> 8) & 1;
}
