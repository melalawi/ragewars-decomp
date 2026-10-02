#ifndef RAGEWARS_SHARED_PAK_MENU_CONTROLLER_H
#define RAGEWARS_SHARED_PAK_MENU_CONTROLLER_H
#include "shared/player_func_80433F14.h"
typedef struct PakMenuController {
    s32 field0;
    s32 root;
    char pad8[0x54 - 8];
    s32 phase;
    Shared_Player_func_80433F14 players[4];
} PakMenuController;
#endif
