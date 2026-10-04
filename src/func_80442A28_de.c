#include "span_16E000/code_8044239C.h"


int func_80442A28_de(Node_func_80442A28_de **head) {
    Node_func_80442A28_de *node = *head;
    int count = 0;
    while (node != 0) {
        if (node->kind != 4) {
            count++;
        }
        node = node->next;
    }
    return count;
}
