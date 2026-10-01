#ifndef SHARED_SHARED_PLACED_H
#define SHARED_SHARED_PLACED_H

#include "basetypes.h"
#include "placed_types.h"

typedef struct Shared_Placed Shared_Placed;
struct Shared_Placed {
    Vec3 pos; /* +0x0: src/func_80220EB0.c */
    s32 unkC; /* +0xC: src/func_80220EB0.c */
    s16 kind; /* +0x10: src/func_80220EB0.c */
    s16 pad12; /* +0x12: src/func_80220EB0.c */
};
typedef char Shared_Placed_size_check[(sizeof(Shared_Placed) == 0x14) ? 1 : -1];

#endif
