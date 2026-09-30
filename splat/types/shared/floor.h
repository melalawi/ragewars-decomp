#ifndef SHARED_SHARED_FLOOR_H
#define SHARED_SHARED_FLOOR_H

#include "basetypes.h"

typedef struct Shared_Floor Shared_Floor;
struct Shared_Floor {
    char pad0[0xE8];
    f32 y; /* +0xE8: src/func_80220EB0.c */
};
typedef char Shared_Floor_size_check[(sizeof(Shared_Floor) == 0xEC) ? 1 : -1];

#endif
