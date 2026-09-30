#ifndef SHARED_SHARED_PLAYER_FUNC_80433F14_H
#define SHARED_SHARED_PLAYER_FUNC_80433F14_H

#include "basetypes.h"

typedef struct Shared_Player_func_80433F14 Shared_Player_func_80433F14;
struct Shared_Player_func_80433F14 {
    char pad0[0x18];
    char slots[4][400]; /* +0x18: src/func_80433F14.c */
    char pad658[0x494];
    s32 chosen; /* +0xAEC: src/func_80433F14.c */
    char padAF0[0x78];
};
typedef char Shared_Player_func_80433F14_size_check[(sizeof(Shared_Player_func_80433F14) == 0xB68) ? 1 : -1];

#endif
