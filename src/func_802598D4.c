#include "basetypes.h"

typedef struct Node {
    struct Node *prev;
    struct Node *next;
    s32 unused;
    s32 value;
} Node;

void func_802598D4(void *arg0, s32 arg1) {
    Node *node;
    Node *next;
    Node *end;
    Node *initial_end;
    Node *tail_end;

    node = *(Node **)((char *)arg0 + 8);
    tail_end = (Node *)((char *)arg0 + 0xD8);
    initial_end = (Node *)((char *)arg0 + 4);
    if (node != initial_end) {
        end = initial_end;
        do {
            next = node->next;
            if (node->value == arg1) {
                node->prev->next = next;
                node->next->prev = node->prev;
                node->prev = *(Node **)((char *)arg0 + 0xD8);
                node->next = tail_end;
                (*(Node **)((char *)arg0 + 0xD8))->next = node;
                *(Node **)((char *)arg0 + 0xD8) = node;
            }
            node = next;
        } while (node != end);
    }
}
