#ifndef SHARED_SHARED_PICKUP_H
#define SHARED_SHARED_PICKUP_H

#include "basetypes.h"
#include "pickup_types.h"

typedef struct Shared_Pickup Shared_Pickup;
struct Shared_Pickup {
    char pad0[0x8];
    Vec3 pos; /* +0x8: src/func_80220EB0.c */
    s32 pad14; /* +0x14: src/func_80220EB0.c */
    struct Shared_PickupDef * def; /* +0x18: src/func_80220EB0.c */
};
typedef char Shared_Pickup_size_check[(sizeof(Shared_Pickup) == 0x1C) ? 1 : -1];

#endif
