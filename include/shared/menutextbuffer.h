#ifndef SHARED_SHARED_MENUTEXTBUFFER_H
#define SHARED_SHARED_MENUTEXTBUFFER_H

#include "basetypes.h"

typedef struct Shared_MenuTextBuffer Shared_MenuTextBuffer;
struct Shared_MenuTextBuffer {
    u8 unused[64]; /* +0x0: src/func_80294F1C.c */
    s8 title; /* +0x40: src/func_80294F1C.c */
};
typedef char Shared_MenuTextBuffer_size_check[(sizeof(Shared_MenuTextBuffer) == 0x41) ? 1 : -1];

#endif
