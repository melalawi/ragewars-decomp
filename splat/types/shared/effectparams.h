#ifndef SHARED_SHARED_EFFECTPARAMS_H
#define SHARED_SHARED_EFFECTPARAMS_H

#include "basetypes.h"
#include "effectparams_types.h"

typedef struct Shared_EffectParams Shared_EffectParams;
struct Shared_EffectParams {
    s32 mode; /* +0x0: src/func_8021A2D4.c */
    Shared_EffectValues values; /* +0x4: src/func_8021A2D4.c */
};
typedef char Shared_EffectParams_size_check[(sizeof(Shared_EffectParams) == 0x10) ? 1 : -1];

#endif
