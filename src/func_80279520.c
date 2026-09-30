/* Initializes an empty linked-list header by clearing its two links and count. */
#include "basetypes.h"

typedef struct ListHeader {
    void *head;
    void *tail;
    s32 count;
} ListHeader;

void func_80279520(ListHeader *list) {
    list->head = 0;
    list->tail = 0;
    list->count = 0;
}
