#ifndef SHARED_SHARED_EFFECTENTRY_H
#define SHARED_SHARED_EFFECTENTRY_H

#include "basetypes.h"

typedef struct Shared_EffectEntry Shared_EffectEntry;
struct Shared_EffectEntry {
    u8 bytes[24]; /* +0x0: src/func_8021A2D4.c */
};
typedef char Shared_EffectEntry_size_check[(sizeof(Shared_EffectEntry) == 0x18) ? 1 : -1];

#endif
