#ifndef SHARED_SHARED_VISIBILITYROOT_H
#define SHARED_SHARED_VISIBILITYROOT_H

#include "basetypes.h"
#include "visibilityroot_types.h"

typedef struct Shared_VisibilityRoot Shared_VisibilityRoot;
struct Shared_VisibilityRoot {
    u8 pad[2]; /* +0x0: src/func_8021A2D4.c */
    Shared_VisibilityGlobals visibility; /* +0x2: src/func_8021A2D4.c */
};
typedef char Shared_VisibilityRoot_size_check[(sizeof(Shared_VisibilityRoot) == 0x615) ? 1 : -1];

#endif
