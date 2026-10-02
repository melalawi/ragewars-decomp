#ifndef RAGEWARS_SHARED_MENU_WIDGET_H
#define RAGEWARS_SHARED_MENU_WIDGET_H
#include "basetypes.h"
/* Menu sprite fields used by selection, options and arena screens. */
typedef struct MenuWidget {
    char pad0[12];
    s16 resource;
    char padE[2];
    u8 alpha;
    char pad11[3];
    s16 x;
    s16 y;
    s16 width;
    s16 height;
    char pad1C[0x2C - 0x1C];
    s32 value;
    struct MenuWidget *next;
    s32 field34;
    union { void *text; s32 image; s32 word38; };
} MenuWidget;
#endif
