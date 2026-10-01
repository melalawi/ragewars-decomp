#ifndef SHARED_SHARED_GFX_H
#define SHARED_SHARED_GFX_H

#include "basetypes.h"

typedef struct Shared_Gfx Shared_Gfx;
struct Shared_Gfx {
    u32 words_w0; /* +0x0: src/func_80417BA0.c */
    u32 words_w1; /* +0x4: src/func_80417BA0.c */
};
typedef char Shared_Gfx_size_check[(sizeof(Shared_Gfx) == 0x8) ? 1 : -1];

#endif
