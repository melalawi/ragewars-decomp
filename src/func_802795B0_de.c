#include "common/types.h"
#include "span_1000/code_80278C80.h"
#include "types.h"







/* Reset a pool list header. */
static inline void clear_list(ListHeader *list) {
    list->head = 0;
    list->tail = 0;
    list->count = 0;
}

/* Append a free node and return the new list length. */
static inline s32 append(ListHeader *list, Link_func_802596B4_de *node) {
    s32 count;
    if (list->count == 0) {
        list->head = node;
        list->tail = node;
        node->next = 0;
        node->prev = 0;
    } else {
        node->next = list->tail;
        node->prev = 0;
        ((Link_func_802596B4_de *)list->tail)->prev = node;
        list->tail = node;
    }
    count = list->count + 1;
    list->count = count;
    return count;
}

/* Reset the free and active headers and link every fixed-size pool node. */
void func_802795B0_de(ListHeader *lists, void *pool, s32 stride, s32 count) {
    s32 remaining;
    clear_list(lists);
    clear_list(lists + 1);
    for (remaining = count - 1; remaining != -1; remaining--) {
        append(lists, (Link_func_802596B4_de *)pool);
        pool = (char *)pool + stride;
    }
}
