#ifndef RAGEWARS_SHARED_NUMBER_PAD_SCREEN_H
#define RAGEWARS_SHARED_NUMBER_PAD_SCREEN_H
#include "shared/menu_widget.h"
typedef struct NumberPadScreen { char pad0[8]; void *window; char padC[0x20 - 0xC]; MenuWidget *pad; char pad24[4]; s32 length, mode, value, cursor, full; } NumberPadScreen;
#endif
