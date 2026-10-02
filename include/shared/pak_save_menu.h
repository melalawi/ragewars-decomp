#ifndef RAGEWARS_SHARED_PAK_SAVE_MENU_H
#define RAGEWARS_SHARED_PAK_SAVE_MENU_H
#include "basetypes.h"
#include "shared/player.h"
typedef struct PakSaveSlot { char pad0[4]; s8 channel; } PakSaveSlot;
typedef struct PakSaveMenu { char pad0[0x14]; char *text; char pad18[4]; SharedPlayer *player; PakSaveSlot *slot; } PakSaveMenu;
#endif
