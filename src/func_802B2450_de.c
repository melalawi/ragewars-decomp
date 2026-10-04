#include "common/types.h"
#include "span_1000/code_802B7488.h"


void func_802B2450_de(Link_func_802596B4_de *arg0) {
    if (arg0->next != 0) {
        arg0->next->prev = arg0->prev;
    }
    if (arg0->prev != 0) {
        arg0->prev->next = arg0->next;
    }
}
