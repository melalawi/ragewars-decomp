#ifndef SHARED_SHARED_SLOT_H
#define SHARED_SHARED_SLOT_H

#include "basetypes.h"

typedef struct Shared_Slot Shared_Slot;
struct Shared_Slot {
    s8 owned; /* +0x0: src/func_80220EB0.c */
    s8 pad1; /* +0x1: src/func_80220EB0.c */
};
typedef char Shared_Slot_size_check[(sizeof(Shared_Slot) == 0x2) ? 1 : -1];

#endif
