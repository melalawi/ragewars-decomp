#ifndef SHARED_SHARED_RENDERCONTEXT_H
#define SHARED_SHARED_RENDERCONTEXT_H

#include "basetypes.h"

typedef struct Shared_RenderContext Shared_RenderContext;
struct Shared_RenderContext {
    u8 pad[12]; /* +0x0: src/func_8021A2D4.c */
    void ** target; /* +0xC: src/func_8021A2D4.c */
};
typedef char Shared_RenderContext_size_check[(sizeof(Shared_RenderContext) == 0x10) ? 1 : -1];

#endif
