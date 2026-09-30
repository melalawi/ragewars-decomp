#ifndef SHARED_SHARED_EFFECT_H
#define SHARED_SHARED_EFFECT_H

#include "basetypes.h"

typedef struct Shared_Effect Shared_Effect;
struct Shared_Effect {
    char pad0[0xB4];
    s32 state; /* +0xB4: src/func_80220EB0.c */
};
typedef char Shared_Effect_size_check[(sizeof(Shared_Effect) == 0xB8) ? 1 : -1];

#endif
