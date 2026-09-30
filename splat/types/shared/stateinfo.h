#ifndef SHARED_SHARED_STATEINFO_H
#define SHARED_SHARED_STATEINFO_H

#include "basetypes.h"

typedef struct Shared_StateInfo Shared_StateInfo;
struct Shared_StateInfo {
    s32 unk0; /* +0x0: src/func_80220EB0.c */
    void (*update)(void *, void *); /* +0x4: src/func_80220EB0.c */
    s32 * flags; /* +0x8: src/func_80220EB0.c */
    s32 pad0C[3]; /* +0xC: src/func_80220EB0.c */
};
typedef char Shared_StateInfo_size_check[(sizeof(Shared_StateInfo) == 0x18) ? 1 : -1];

#endif
