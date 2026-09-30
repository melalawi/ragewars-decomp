#ifndef SHARED_SHARED_MOTIONVECTOR_H
#define SHARED_SHARED_MOTIONVECTOR_H

#include "basetypes.h"

typedef struct Shared_MotionVector Shared_MotionVector;
struct Shared_MotionVector {
    f32 x; /* +0x0: src/func_8021B468.c */
    f32 y; /* +0x4: src/func_8021B468.c */
    f32 z; /* +0x8: src/func_8021B468.c */
};
typedef char Shared_MotionVector_size_check[(sizeof(Shared_MotionVector) == 0xC) ? 1 : -1];

#endif
