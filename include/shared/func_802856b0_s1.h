#ifndef SHARED_SHARED_FUNC_802856B0_S1_H
#define SHARED_SHARED_FUNC_802856B0_S1_H

#include "basetypes.h"

typedef struct Shared_func_802856B0_S1 Shared_func_802856B0_S1;
struct Shared_func_802856B0_S1 {
    char pad0[0x14];
    void * unk14; /* +0x14: src/func_802856B0.c */
    char pad18[0x10];
    f32 unk28; /* +0x28: src/func_802856B0.c */
};
typedef char Shared_func_802856B0_S1_size_check[(sizeof(Shared_func_802856B0_S1) == 0x2C) ? 1 : -1];

#endif
