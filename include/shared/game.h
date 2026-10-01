#ifndef SHARED_SHARED_GAME_H
#define SHARED_SHARED_GAME_H

#include "basetypes.h"

typedef struct Shared_Game Shared_Game;
struct Shared_Game {
    s32 flags; /* +0x0: src/func_80220EB0.c */
    char pad4[0x19];
    u8 local; /* +0x1D: src/func_80220EB0.c */
    char pad1E[0x652];
    s32 split; /* +0x670: src/func_80220EB0.c */
    char pad674[0x638];
};
typedef char Shared_Game_size_check[(sizeof(Shared_Game) == 0xCAC) ? 1 : -1];

#endif
