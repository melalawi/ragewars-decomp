#include "span_1000/code_802591C0.h"
#include "types.h"

/* Move nodes with the requested key from the active list to the other list. */
void func_80259988_de(void *arg0, s32 arg1)
{
    Owner_func_80259918_de *owner = arg0;
    Node_func_80259918_de *node = owner->activeNext;
    Node_func_80259918_de *head = (Node_func_80259918_de *)&owner->activePrev;
    Node_func_80259918_de *other = (Node_func_80259918_de *)&owner->otherPrev;

    if (node != head) {
        Node_func_80259918_de *sentinel = head;
        do {
            Node_func_80259918_de *next = node->next;
            if (node->key == arg1) {
                Node_func_80259918_de *tail;
                node->prev->next = next;
                node->next->prev = node->prev;
                tail = owner->otherPrev;
                node->next = other;
                node->prev = tail;
                owner->otherPrev->next = node;
                owner->otherPrev = node;
            }
            node = next;
        } while (node != sentinel);
    }
}
