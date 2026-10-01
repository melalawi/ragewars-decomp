#ifndef SHARED_SHARED_GLOBALPLAYERS_H
#define SHARED_SHARED_GLOBALPLAYERS_H

#include "basetypes.h"

typedef struct Shared_GlobalPlayers Shared_GlobalPlayers;
struct Shared_GlobalPlayers {
    s32 unused; /* +0x0: src/func_8021B468.c */
    s32 players; /* +0x4: src/func_8021B468.c */
    s32 count; /* +0x8: src/func_8021B468.c */
    char controller[20]; /* +0xC: src/func_8021B468.c */
    char effects; /* +0x20: src/func_8021B468.c */
    char pad21[0x3];
};
typedef char Shared_GlobalPlayers_size_check[(sizeof(Shared_GlobalPlayers) == 0x24) ? 1 : -1];

#endif
