#ifndef SHARED_SHARED_WORLD_H
#define SHARED_SHARED_WORLD_H

#include "basetypes.h"
#include "world_types.h"

typedef struct Shared_World Shared_World;
struct Shared_World {
    char pad0[0x1B614];
    Vec3 offset; /* +0x1B614: src/func_80220EB0.c */
    struct Shared_Pickup * objects[16]; /* +0x1B620: src/func_80220EB0.c */
    s32 count; /* +0x1B660: src/func_80220EB0.c */
};
typedef char Shared_World_size_check[(sizeof(Shared_World) == 0x1B664) ? 1 : -1];

#endif
