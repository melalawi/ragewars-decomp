#ifndef SHARED_SHARED_ITEM_FUNC_8042BD40_H
#define SHARED_SHARED_ITEM_FUNC_8042BD40_H

#include "basetypes.h"

typedef struct Shared_Item_func_8042BD40 Shared_Item_func_8042BD40;
struct Shared_Item_func_8042BD40 {
    char pad0[0x10];
    u8 color; /* +0x10: src/func_8042BD40.c */
    char pad11[0x27];
    s32 text; /* +0x38: src/func_8042BD40.c */
};
typedef char Shared_Item_func_8042BD40_size_check[(sizeof(Shared_Item_func_8042BD40) == 0x3C) ? 1 : -1];

#endif
