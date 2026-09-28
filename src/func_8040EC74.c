#include "basetypes.h"

/* Sums the halfword positions at offsets 0x14 and 0x16 along a linked list starting at a node and
   reports the totals through the two pointers. */
struct Node {
    struct Node *next;
    char pad4[0x14 - 4];
    s16 x;
    s16 y;
};

void func_8040EC74(struct Node *node, s32 *x, s32 *y) {
    s32 sumX = node->x;
    s32 sumY = node->y;

    while (node->next != 0) {
        node = node->next;
        sumX += node->x;
        sumY += node->y;
    }
    *x = sumX;
    *y = sumY;
}
