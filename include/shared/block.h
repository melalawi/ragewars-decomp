#ifndef SHARED_SHARED_BLOCK_H
#define SHARED_SHARED_BLOCK_H

#include "shared/player_func_80433F14.h"

typedef struct Shared_Block Shared_Block;
struct Shared_Block {
    void *window;
    union {
        void *list;
        s32 menu;
    };
    char pad8[0x54 - 0x8];
    s32 mode;
    Shared_Player_func_80433F14 players[4];
    s32 source;
    s32 sourceRecord;
    Port ports[4];
};

typedef char Shared_Block_size_check[(sizeof(Shared_Block) == 0x2E30) ? 1 : -1];

#endif
