#ifndef SHARED_SHARED_EFFECTFLOATS_H
#define SHARED_SHARED_EFFECTFLOATS_H

#include "basetypes.h"

typedef struct Shared_EffectFloats Shared_EffectFloats;
struct Shared_EffectFloats {
    f32 x; /* +0x0: src/func_8021A2D4.c */
    f32 y; /* +0x4: src/func_8021A2D4.c */
};
typedef char Shared_EffectFloats_size_check[(sizeof(Shared_EffectFloats) == 0x8) ? 1 : -1];

#endif
