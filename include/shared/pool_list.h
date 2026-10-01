#ifndef SHARED_POOL_LIST_H
#define SHARED_POOL_LIST_H

#include "basetypes.h"

typedef struct PoolLink {
    struct PoolLink *prev;
    struct PoolLink *next;
} PoolLink;

/* Shared form of the ListHeader recovered in func_80279520. */
typedef struct ListHeader {
    void *head;
    void *tail;
    s32 count;
} ListHeader;

#endif
