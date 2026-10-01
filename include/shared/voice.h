#ifndef SHARED_SHARED_VOICE_H
#define SHARED_SHARED_VOICE_H

#include "basetypes.h"

typedef struct Shared_Voice Shared_Voice;
struct Shared_Voice {
    char pad0[0x10];
    s32 bank; /* +0x10: src/func_80220EB0.c */
};
typedef char Shared_Voice_size_check[(sizeof(Shared_Voice) == 0x14) ? 1 : -1];

#endif
