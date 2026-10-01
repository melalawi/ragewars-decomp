#ifndef SHARED_SHARED_BLOCK_H
#define SHARED_SHARED_BLOCK_H

#include "basetypes.h"
#include "block_types.h"

typedef struct Shared_Block Shared_Block;
struct Shared_Block {
    void * window; /* +0x0: src/func_80433F14.c */
    void * list; /* +0x4: src/func_80433F14.c */
    char pad8[0x50];
    Shared_Player_func_80433F14 players[4]; /* +0x58: src/func_80433F14.c */
};
typedef char Shared_Block_size_check[(sizeof(Shared_Block) == 0x2DF8) ? 1 : -1];

#endif
