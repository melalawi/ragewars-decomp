#ifndef SHARED_SHARED_QUAT_H
#define SHARED_SHARED_QUAT_H

#include "basetypes.h"

typedef struct Shared_Quat Shared_Quat;
struct Shared_Quat {
    f32 x; /* +0x0: src/func_8027ADBC.c */
    f32 y; /* +0x4: src/func_8027ADBC.c */
    f32 z; /* +0x8: src/func_8027ADBC.c */
    f32 w; /* +0xC: src/func_8027ADBC.c */
};
typedef char Shared_Quat_size_check[(sizeof(Shared_Quat) == 0x10) ? 1 : -1];

#endif
