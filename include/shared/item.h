#ifndef SHARED_SHARED_ITEM_H
#define SHARED_SHARED_ITEM_H

#include "basetypes.h"

typedef struct Shared_Item Shared_Item;
struct Shared_Item {
    char pad0[0x8];
    struct Shared_Label * label; /* +0x8: src/func_80433F14.c */
};
typedef char Shared_Item_size_check[(sizeof(Shared_Item) == 0xC) ? 1 : -1];

#endif
