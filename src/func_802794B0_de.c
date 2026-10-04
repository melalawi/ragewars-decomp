#include "span_1000/code_80278C80.h"
#include "types.h"




/* Initializes an empty linked-list header by clearing its two links and count. */

void func_802794B0_de(ListHeader *list) {
    list->head = 0;
    list->tail = 0;
    list->count = 0;
}
