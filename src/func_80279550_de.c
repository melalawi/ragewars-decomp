#include "common/types.h"
#include "span_1000/code_80278C80.h"
#include "span_1000/types.h"





int func_80279550_de(List802795C0 *arg0, Link_func_802596B4_de *arg1) {
    if (arg1->prev != 0) {
        arg1->prev->next = arg1->next;
    }
    if (arg1->next != 0) {
        arg1->next->prev = arg1->prev;
    }
    if (arg0->head == arg1) {
        arg0->head = arg1->prev;
    }
    if (arg0->tail == arg1) {
        arg0->tail = arg1->next;
    }
    arg0->count -= 1;
    return arg0->count;
}
