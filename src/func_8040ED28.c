#include "basetypes.h"

/* Searches the sibling list starting at node, descending depth first into each node's child list, for the first node whose next sibling carries the given id, and returns that predecessor or null. Adapted from func_8040ECB0 with the id test moved from the node to its next sibling and the id taken as an int narrowed to unsigned short at each use, the recursive call reading a copy of it taken after the result is cleared. */

struct Tree {
    char pad0[4];
    struct Tree *next;
    struct Tree *child;
    short id;
};

struct Tree *func_8040ED28(struct Tree *node, s32 id) {
    s32 childId;
    struct Tree *found = 0;

    childId = id;
    while (node != 0 && found == 0) {
        if (node->next != 0 && node->next->id == (u16)id) {
            found = node;
        }
        if (found == 0 && node->child != 0) {
            found = func_8040ED28(node->child, (u16)childId);
        }
        node = node->next;
    }
    return found;
}
