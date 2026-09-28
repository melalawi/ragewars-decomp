#include "basetypes.h"

typedef struct Node Node;

struct Node {
    Node *prev;
    Node *next;
    char pad8[0xA4];
    s32 flags;
};

typedef struct {
    char pad0[4];
    Node first;
    char padB4[0x24];
    Node second;
} Lists;

void func_80259A70(Lists *arg0, s32 arg1) {
    Node *var_a2;
    Node *temp_a3;
    Node *temp_v0;
    Node *temp_t0;
    Node *temp_t1;

    var_a2 = arg0->first.next;
    temp_v0 = &arg0->first;
    if (var_a2 != temp_v0) {
        temp_t1 = &arg0->second;
        temp_t0 = temp_v0;
        do {
            temp_a3 = var_a2->next;
            if ((var_a2->flags & arg1) != 0) {
                Node *temp_tail;

                var_a2->prev->next = temp_a3;
                var_a2->next->prev = var_a2->prev;
                temp_tail = arg0->second.prev;
                var_a2->next = temp_t1;
                var_a2->prev = temp_tail;
                arg0->second.prev->next = var_a2;
                arg0->second.prev = var_a2;
            }
            var_a2 = temp_a3;
        } while (var_a2 != temp_t0);
    }
}
