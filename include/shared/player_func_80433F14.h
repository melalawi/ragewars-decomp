#ifndef SHARED_SHARED_PLAYER_FUNC_80433F14_H
#define SHARED_SHARED_PLAYER_FUNC_80433F14_H

#include "shared/menu_state_records.h"

typedef struct Shared_Player_func_80433F14 Shared_Player_func_80433F14;
struct Shared_Player_func_80433F14 {
    s32 state;
    s32 sub;
    s32 next;
    s32 menu;
    char pad10[0x14 - 0x10];
    s32 back;
    union {
        char slots[4][400];
        Record records[4];
    };
    char pad658[0x67E - 0x658];
    Name names[15];
    char padA98[0xAD8 - 0xA98];
    s32 slot;
    char padADC[0xAEC - 0xADC];
    union {
        s32 chosen;
        s32 choice;
    };
    s32 used[4];
    s32 notes[4];
    char padB10[0xB28 - 0xB10];
    s32 port;
    s32 record;
    s32 host;
    char padB34[0xB64 - 0xB34];
    s32 profile;
};

typedef char Shared_Player_func_80433F14_size_check[(sizeof(Shared_Player_func_80433F14) == 0xB68) ? 1 : -1];

#endif
