#ifndef RAGEWARS_SHARED_CAPTIONSCREEN_H
#define RAGEWARS_SHARED_CAPTIONSCREEN_H

#include "basetypes.h"

struct CaptionRow {
    s32 id;
    s32 state;
    s32 level;
    s32 timer;
    s32 pad10;
};

struct CaptionScreen {
    char pad0[0x9C];
    struct CaptionRow rows[2];
    char padC4[0xC8 - 0xC4];
    char text[0x188 - 0xC8];
    s32 row;
    char pad18C[0x1C0 - 0x18C];
    s32 visible;
};

#endif
