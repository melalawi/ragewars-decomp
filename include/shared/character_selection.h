#ifndef RAGEWARS_SHARED_CHARACTER_SELECTION_H
#define RAGEWARS_SHARED_CHARACTER_SELECTION_H
#include "shared/player_types.h"
#include "shared/menu_widget.h"
typedef struct CharacterSelectionRoot { void *screen; s32 panel; char pad8[8]; s32 choice, phase; } CharacterSelectionRoot;
typedef struct {char p[12];short unkC;char pe[2];u8 unk10;char p11[3];short unk14,unk16;} SelectionSprite;
typedef struct {int unk0,unk4;SelectionSprite *unk8;int unkC,unk10,unk14;char p18[0x1310];SelectionSprite *unk1328;u16 unk132C,unk132E;SelectionSprite *unk1330;u16 unk1334,unk1336;int unk1338,unk133C,unk1340;SelectionSprite *unk1344,*unk1348;char p134c[3];u8 unk134F;int unk1350,unk1354;} CharacterSelectionScreen;
typedef struct {int pad;float scale[4],distance[4];Vec3 position[4];int light[4];char tail[12];} CharacterPreviewRow;

#endif
