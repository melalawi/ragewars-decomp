#ifndef SHARED_SHARED_SHADOW_H
#define SHARED_SHARED_SHADOW_H

#include "basetypes.h"
#include "shadow_types.h"

typedef struct Shared_Shadow Shared_Shadow;
struct Shared_Shadow {
    char pad0[0x8];
    Vec3 pos; /* +0x8: src/func_80220EB0.c */
};
typedef char Shared_Shadow_size_check[(sizeof(Shared_Shadow) == 0x14) ? 1 : -1];

#endif
