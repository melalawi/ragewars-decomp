#include "basetypes.h"

typedef struct Node {
    struct Node *prev;
    struct Node *next;
    s32 unused;
    s32 value;
} Node;

typedef struct func_802598D4_S1 func_802598D4_S1;
typedef union func_802598D4_S1_UD8 { Node v0; Node* v1; } func_802598D4_S1_UD8;
struct func_802598D4_S1 {
    char pad0[0x4];
    union { Node node; struct { void *first; Node *second; } links; } at4;
    char pad14[0xD8 - 0x4 - sizeof(Node)];
    func_802598D4_S1_UD8 unkD8;
};

void func_802598D4(void *arg0, s32 arg1) {
    Node *node;
    Node *next;
    Node *end;
    Node *initial_end;
    Node *tail_end;

    node = ((func_802598D4_S1 *)(arg0))->at4.links.second;
    tail_end = &((func_802598D4_S1 *)(arg0))->unkD8.v0;
    initial_end = &((func_802598D4_S1 *)(arg0))->at4.node;
    if (node != initial_end) {
        end = initial_end;
        do {
            next = node->next;
            if (node->value == arg1) {
                node->prev->next = next;
                node->next->prev = node->prev;
                node->prev = ((func_802598D4_S1 *)(arg0))->unkD8.v1;
                node->next = tail_end;
                (((func_802598D4_S1 *)(arg0))->unkD8.v1)->next = node;
                ((func_802598D4_S1 *)(arg0))->unkD8.v1 = node;
            }
            node = next;
        } while (node != end);
    }
}
