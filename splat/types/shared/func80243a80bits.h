#ifndef SHARED_SHARED_FUNC80243A80BITS_H
#define SHARED_SHARED_FUNC80243A80BITS_H

#include "basetypes.h"

typedef struct Shared_Func80243A80Bits Shared_Func80243A80Bits;
struct Shared_Func80243A80Bits {
    union {
        struct {
            f32 f; /* +0x0: src/func_80243A80.c */
        } view0_0;
        struct {
            s32 i; /* +0x0: src/func_80243A80.c */
        } view0_1;
    } views0;
};
typedef char Shared_Func80243A80Bits_size_check[(sizeof(Shared_Func80243A80Bits) == 0x4) ? 1 : -1];

#endif
