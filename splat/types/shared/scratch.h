#ifndef SHARED_SHARED_SCRATCH_H
#define SHARED_SHARED_SCRATCH_H

#include "basetypes.h"
#include "scratch_types.h"

typedef struct Shared_Scratch Shared_Scratch;
struct Shared_Scratch {
    union {
        struct {
            s32 damage[5]; /* +0x0: src/func_80220EB0.c */
        } view0_0;
        struct {
            Vec3 to; /* +0x0: src/func_80220EB0.c */
        } view0_1;
    } views0;
};
typedef char Shared_Scratch_size_check[(sizeof(Shared_Scratch) == 0x14) ? 1 : -1];

#endif
