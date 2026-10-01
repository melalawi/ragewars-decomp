#ifndef SHARED_SHARED_GAMEMODE_H
#define SHARED_SHARED_GAMEMODE_H

#include "basetypes.h"

typedef struct Shared_GameMode Shared_GameMode;
struct Shared_GameMode {
    char pad0[0x1C];
    s32 unk1C; /* +0x1C: src/func_8022D2F8.c */
    char pad20[0x8];
    s32 unk28; /* +0x28: src/func_8022D2F8.c */
};
typedef char Shared_GameMode_size_check[(sizeof(Shared_GameMode) == 0x2C) ? 1 : -1];

#endif
