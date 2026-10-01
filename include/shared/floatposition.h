#ifndef SHARED_SHARED_FLOATPOSITION_H
#define SHARED_SHARED_FLOATPOSITION_H

#include "basetypes.h"

typedef struct Shared_FloatPosition Shared_FloatPosition;
struct Shared_FloatPosition {
    f32 x; /* +0x0: src/func_8021B468.c */
    f32 y; /* +0x4: src/func_8021B468.c */
    f32 z; /* +0x8: src/func_8021B468.c */
};
typedef char Shared_FloatPosition_size_check[(sizeof(Shared_FloatPosition) == 0xC) ? 1 : -1];

#endif
