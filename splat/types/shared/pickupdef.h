#ifndef SHARED_SHARED_PICKUPDEF_H
#define SHARED_SHARED_PICKUPDEF_H

#include "basetypes.h"

typedef struct Shared_PickupDef Shared_PickupDef;
struct Shared_PickupDef {
    s32 pad0; /* +0x0: src/func_80220EB0.c */
    s32 flags; /* +0x4: src/func_80220EB0.c */
    char pad8[0x10];
    f32 radius; /* +0x18: src/func_80220EB0.c */
    s32 pad1C; /* +0x1C: src/func_80220EB0.c */
    s32 item; /* +0x20: src/func_80220EB0.c */
};
typedef char Shared_PickupDef_size_check[(sizeof(Shared_PickupDef) == 0x24) ? 1 : -1];

#endif
