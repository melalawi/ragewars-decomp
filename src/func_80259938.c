/* Moves nodes whose key differs from arg1 (or every node when arg1 is -1) from the active list to the tail of the list rooted at offset 0xD8. Adapted from func_802599A8, with the match test inverted, a -1 wildcard added, and the tail insertion written as a do-while(0) list macro. */
#include "basetypes.h"

typedef struct Node {
    struct Node *prev;
    struct Node *next;
    char pad08[0xB0 - 0x8];
    s32 key;
} Node;

typedef struct Owner {
    s32 unk00;
    Node *activePrev;
    Node *activeNext;
    char pad0C[0xD8 - 0xC];
    Node *otherPrev;
} Owner;

#define LIST_INSERT_TAIL(sentinel, tailField, node)  \
    do {                                             \
        Node *tail_ = (sentinel)->tailField;         \
        (node)->next = (Node *) &(sentinel)->tailField; \
        (node)->prev = tail_;                        \
        (sentinel)->tailField->next = (node);        \
        (sentinel)->tailField = (node);              \
    } while (0)

void func_80259938(Owner *arg0, s32 arg1) {
    Node *node;
    Node *next;

    node = arg0->activeNext;
    while (node != (Node *) &arg0->activePrev) {
        next = node->next;
        if (arg1 == -1 || node->key != arg1) {
            node->prev->next = next;
            node->next->prev = node->prev;
            LIST_INSERT_TAIL(arg0, otherPrev, node);
        }
        node = next;
    }
}
