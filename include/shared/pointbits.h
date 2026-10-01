#ifndef SHARED_SHARED_POINTBITS_H
#define SHARED_SHARED_POINTBITS_H

#include "basetypes.h"

typedef struct Shared_PointBits Shared_PointBits;
struct Shared_PointBits {
    s32 x; /* +0x0: src/func_802856B0.c */
    s32 y; /* +0x4: src/func_802856B0.c */
    s32 z; /* +0x8: src/func_802856B0.c */
};
typedef char Shared_PointBits_size_check[(sizeof(Shared_PointBits) == 0xC) ? 1 : -1];

#endif
