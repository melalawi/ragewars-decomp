#ifndef SHARED_SHARED_FUNC80243A80COLLISION_H
#define SHARED_SHARED_FUNC80243A80COLLISION_H

#include "basetypes.h"

typedef struct Shared_Func80243A80Collision Shared_Func80243A80Collision;
struct Shared_Func80243A80Collision {
    u16 id; /* +0x0: src/func_80243A80.c */
    u16 flags; /* +0x2: src/func_80243A80.c */
};
typedef char Shared_Func80243A80Collision_size_check[(sizeof(Shared_Func80243A80Collision) == 0x4) ? 1 : -1];

#endif
