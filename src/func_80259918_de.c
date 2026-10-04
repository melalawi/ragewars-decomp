#include "span_1000/code_80259014.h"
#include "types.h"
/* Moves nodes whose key differs from arg1 (or every node when arg1 is -1) from the active list to the tail of the list rooted at offset 0xD8. Adapted from func_80259988_de, with the match test inverted, a -1 wildcard added, and the tail insertion written as a do-while(0) list macro. */


void func_80259918_de(Owner_func_80259918_de *arg0, s32 arg1) {
    Node_func_80259918_de *node;
    Node_func_80259918_de *next;
    node = arg0->activeNext;
    while (node != (Node_func_80259918_de *) &arg0->activePrev) {
        next = node->next;
        if (arg1 == -1 || node->key != arg1) {
            node->prev->next = next;
            node->next->prev = node->prev;
            do { Node_func_80259918_de *tail_ = (arg0)->otherPrev; (node)->next = (Node_func_80259918_de *) &(arg0)->otherPrev; (node)->prev = tail_; (arg0)->otherPrev->next = (node); (arg0)->otherPrev = (node); } while (0);
        }
        node = next;
    }
}
