#ifndef SHARED_SHARED_VISIBILITYGLOBALS_H
#define SHARED_SHARED_VISIBILITYGLOBALS_H

#include "basetypes.h"

typedef struct Shared_VisibilityGlobals Shared_VisibilityGlobals;
struct Shared_VisibilityGlobals {
    volatile u8 enabled; /* +0x0: src/func_8021A2D4.c */
    u8 pad[1550]; /* +0x1: src/func_8021A2D4.c */
    u8 active[4]; /* +0x60F: src/func_8021A2D4.c */
};
typedef char Shared_VisibilityGlobals_size_check[(sizeof(Shared_VisibilityGlobals) == 0x613) ? 1 : -1];

#endif
