#include "shared/pool_list.h"

/* Reset a pool list header. */
static inline void clear_list(ListHeader *list) {
    list->head = 0;
    list->tail = 0;
    list->count = 0;
}

/* Append a free node and return the new list length. */
static inline s32 append(ListHeader *list, PoolLink *node) {
    s32 count;
    if (list->count == 0) {
        list->head = node;
        list->tail = node;
        node->prev = 0;
        node->next = 0;
    } else {
        node->prev = list->tail;
        node->next = 0;
        ((PoolLink *)list->tail)->next = node;
        list->tail = node;
    }
    count = list->count + 1;
    list->count = count;
    return count;
}

/* Reset the free and active headers and link every fixed-size pool node. */
void func_80279620(ListHeader *lists, void *pool, s32 stride, s32 count) {
    s32 remaining;
    clear_list(lists);
    clear_list(lists + 1);
    for (remaining = count - 1; remaining != -1; remaining--) {
        append(lists, (PoolLink *)pool);
        pool = (char *)pool + stride;
    }
}
