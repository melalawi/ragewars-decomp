#ifndef SHARED_SHARED_POINTCOPY_H
#define SHARED_SHARED_POINTCOPY_H

#include "basetypes.h"
#include "pointcopy_types.h"

typedef struct Shared_PointCopy Shared_PointCopy;
struct Shared_PointCopy {
    s32 pad; /* +0x0: src/func_802856B0.c */
    Shared_PointBits point; /* +0x4: src/func_802856B0.c */
};
typedef char Shared_PointCopy_size_check[(sizeof(Shared_PointCopy) == 0x10) ? 1 : -1];

#endif
