#ifndef SHARED_SHARED_ITEM_H
#define SHARED_SHARED_ITEM_H

#include "basetypes.h"

typedef struct Shared_Item Shared_Item;
struct Shared_Item {
    char pad0[0x8];
    struct Shared_Label * label; /* +0x8: src/func_80433F14.c */
    char padC[0x6];
    u16 flags; /* +0x12: menu name editor */
    char pad14[0x24];
    struct Shared_Item *next; /* +0x38: next menu name character */
};
typedef char Shared_Item_size_check[(sizeof(Shared_Item) == 0x3C) ? 1 : -1];

#endif
