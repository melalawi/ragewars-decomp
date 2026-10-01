#ifndef SHARED_SHARED_RENDERSWITCHES_H
#define SHARED_SHARED_RENDERSWITCHES_H

#include "basetypes.h"

typedef struct Shared_RenderSwitches Shared_RenderSwitches;
struct Shared_RenderSwitches {
    s32 filter; /* +0x0: src/func_80417BA0.c */
    s32 enable; /* +0x4: src/func_80417BA0.c */
    s32 depth; /* +0x8: src/func_80417BA0.c */
};
typedef char Shared_RenderSwitches_size_check[(sizeof(Shared_RenderSwitches) == 0xC) ? 1 : -1];

#endif
