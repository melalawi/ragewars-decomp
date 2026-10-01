#ifndef SHARED_SHARED_EFFECTVALUES_H
#define SHARED_SHARED_EFFECTVALUES_H

#include "basetypes.h"

typedef struct Shared_EffectValues Shared_EffectValues;
struct Shared_EffectValues {
    s32 value; /* +0x0: src/func_8021A2D4.c */
    f32 x; /* +0x4: src/func_8021A2D4.c */
    f32 y; /* +0x8: src/func_8021A2D4.c */
};
typedef char Shared_EffectValues_size_check[(sizeof(Shared_EffectValues) == 0xC) ? 1 : -1];

#endif
