#include "span_1000/code_802591C0.h"
#include "types.h"







void func_802598B4_de(void *arg0, s32 arg1) {
    Node_func_802598B4_de *node;
    Node_func_802598B4_de *next;
    Node_func_802598B4_de *end;
    Node_func_802598B4_de *initial_end;
    Node_func_802598B4_de *tail_end;

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
