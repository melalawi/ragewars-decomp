#include "basetypes.h"

typedef struct {
    s32 words[10];
} NodeEvent;

typedef struct Node {
    s32 unk0;
    struct Node *next;
    u8 pad8[0xA];
    u16 flags;
} Node;

extern void func_8040DB84(Node *, NodeEvent);

/* Walks a sibling node list and dispatches the by-value event to every node whose flag bit 3 is set. */
void func_8040E87C(Node *node, NodeEvent event) {
    for (; node != 0; node = node->next) {
        if (node->flags & 8) {
            func_8040DB84(node, event);
        }
    }
}
