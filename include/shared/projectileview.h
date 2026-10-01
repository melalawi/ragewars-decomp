#ifndef SHARED_SHARED_PROJECTILEVIEW_H
#define SHARED_SHARED_PROJECTILEVIEW_H

#include "basetypes.h"

typedef struct Shared_ProjectileView Shared_ProjectileView;
struct Shared_ProjectileView {
    char pad0[0x14];
    s32 source; /* +0x14: src/func_8021B468.c */
    char pad18[0x184];
    u16 flags; /* +0x19C: src/func_8021B468.c */
    char pad19E[0x2];
};
typedef char Shared_ProjectileView_size_check[(sizeof(Shared_ProjectileView) == 0x1A0) ? 1 : -1];

#endif
