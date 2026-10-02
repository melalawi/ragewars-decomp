#ifndef RAGEWARS_SHARED_MODEL_PREVIEW_SCREEN_H
#define RAGEWARS_SHARED_MODEL_PREVIEW_SCREEN_H
#include "shared/player_types.h"
#include "shared/menu_widget.h"
typedef struct ModelPreviewRow { s32 model, timer, state, unused, image; } ModelPreviewRow;
typedef union ModelPreviewScreen { struct { char pad0[0x20]; void *window; char pad24[0x78]; ModelPreviewRow rows[10]; char padAfter[0x188 - 0x9C - 10 * sizeof(ModelPreviewRow)]; s32 selected; }; struct { char padC8[0xC8]; char modelWorkspace; }; } ModelPreviewScreen;
#endif
