#ifndef SHARED_MENU_SPRITE_H
#define SHARED_MENU_SPRITE_H

#include "shared/hudplayer.h"

/* Animated menu element drawn in its owner's viewport. */
typedef struct MenuSpriteElement {
    char pad0[0x40];
    Shared_HudView *owner; /* +0x40: src/func_80442D18.c */
    char pad44[0x184];
    s32 frame;            /* +0x1C8: src/func_80442D18.c */
    s32 active;           /* +0x1CC: src/func_80442D18.c */
} MenuSpriteElement;

typedef char MenuSpriteElement_size_check[(sizeof(MenuSpriteElement) == 0x1D0) ? 1 : -1];

#endif
