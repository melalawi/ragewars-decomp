#ifndef SHARED_SHARED_SURFACE_H
#define SHARED_SHARED_SURFACE_H

#include "basetypes.h"

typedef struct Shared_Surface Shared_Surface;
struct Shared_Surface {
    char pad0[0x28];
    f32 timer; /* +0x28: src/func_80220EB0.c */
    char pad2C[0x18];
    s32 flags; /* +0x44: src/func_80220EB0.c */
    char pad48[0x4];
    u16 item; /* +0x4C: src/func_80220EB0.c */
    u16 pad4E; /* +0x4E: src/func_80220EB0.c */
    u16 sound; /* +0x50: src/func_80220EB0.c */
    char pad52[0x2];
};
typedef char Shared_Surface_size_check[(sizeof(Shared_Surface) == 0x54) ? 1 : -1];

#endif
