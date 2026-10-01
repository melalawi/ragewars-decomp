/* Initializes an empty linked-list header by clearing its two links and count. */
#include "shared/pool_list.h"

void func_80279520(ListHeader *list) {
    list->head = 0;
    list->tail = 0;
    list->count = 0;
}
