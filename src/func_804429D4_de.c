#include "span_16E000/code_8044239C.h"




void func_804429D4_de(struct Owner_func_804429D4_de *owner) {
    struct Node_func_804429D4_de *node = owner->head;

    while (node != 0) {
        ((void (*)(struct Node_func_804429D4_de *, struct Owner_func_804429D4_de *))node->vtable[4])(node, owner);
        node = node->next;
    }
}
