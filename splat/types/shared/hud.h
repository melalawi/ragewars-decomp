#ifndef SHARED_SHARED_HUD_H
#define SHARED_SHARED_HUD_H

#include "basetypes.h"

typedef struct Shared_Hud Shared_Hud;
struct Shared_Hud {
    char pad0[0x120];
    s32 score; /* +0x120: src/func_80220EB0.c */
    u16 pad124; /* +0x124: src/func_80220EB0.c */
    u16 bonus; /* +0x126: src/func_80220EB0.c */
};
typedef char Shared_Hud_size_check[(sizeof(Shared_Hud) == 0x128) ? 1 : -1];

#endif
