#ifndef SHARED_SHARED_PLAYER_FUNC_80433F14_H
#define SHARED_SHARED_PLAYER_FUNC_80433F14_H

#include "shared/menu_state_records.h"
#include "shared/menu_widget.h"

typedef struct Shared_Player_func_80433F14 Shared_Player_func_80433F14;
struct Shared_Player_func_80433F14 {
    s32 state;
    s32 sub;
    s32 next;
    union { s32 menu; MenuWidget *menuWidget; };
    char pad10[0x14 - 0x10];
    s32 back;
    union {
        char slots[4][400];
        Record records[4];
    };
    union {
        struct { char pad658[0x67E - 0x658]; Name names[15]; };
        PakDisplayName displayNames[15];
    };
    char padA98[0xAD8 - 0xA98];
    s32 slot;
    union {
        char padADC[0xAEC - 0xADC];
        struct { s32 scroll; MenuWidget *labels[3]; };
    };
    union {
        s32 chosen;
        s32 choice;
    };
    s32 used[4];
    union { s32 notes[4]; MenuWidget *nodes[4]; };
    char padB10[0xB28 - 0xB10];
    s32 port;
    s32 record;
    s32 host;
    char padB34[0xB64 - 0xB34];
    s32 profile;
};

typedef char Shared_Player_func_80433F14_size_check[(sizeof(Shared_Player_func_80433F14) == 0xB68) ? 1 : -1];

#endif
