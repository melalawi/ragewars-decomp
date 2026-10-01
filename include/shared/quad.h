#ifndef SHARED_SHARED_QUAD_H
#define SHARED_SHARED_QUAD_H

#include "basetypes.h"

typedef struct Shared_Quad Shared_Quad;
struct Shared_Quad {
    s32 w[4]; /* +0x0: src/func_80220EB0.c */
};
typedef char Shared_Quad_size_check[(sizeof(Shared_Quad) == 0x10) ? 1 : -1];

#endif
