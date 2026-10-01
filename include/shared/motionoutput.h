#ifndef SHARED_SHARED_MOTIONOUTPUT_H
#define SHARED_SHARED_MOTIONOUTPUT_H

#include "basetypes.h"

typedef struct Shared_MotionOutput Shared_MotionOutput;
struct Shared_MotionOutput {
    s32 x; /* +0x0: src/func_8021B468.c */
    s32 y; /* +0x4: src/func_8021B468.c */
    s32 z; /* +0x8: src/func_8021B468.c */
    s32 w; /* +0xC: src/func_8021B468.c */
};
typedef char Shared_MotionOutput_size_check[(sizeof(Shared_MotionOutput) == 0x10) ? 1 : -1];

#endif
