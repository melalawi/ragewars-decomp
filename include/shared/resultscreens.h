#ifndef RAGEWARS_SHARED_RESULTSCREENS_H
#define RAGEWARS_SHARED_RESULTSCREENS_H

#include "basetypes.h"

struct MenuRenderFill {
    s32 mode;
    f32 color[4];
};

struct MenuBannerSprite {
    char pad0[0x10];
    u8 alpha;
};

struct VersusResultsScreen {
    char pad0[0x8];
    char panels[4][0xC0];
    char tie[0x3DC - 0x308];
    s32 state;
    char pad3E0[0x434 - 0x3E0];
    s32 winnerSlot;
    s32 winner;
    char pad43C[0x450 - 0x43C];
    struct MenuBannerSprite *bannerShadow;
    struct MenuBannerSprite *banner;
    char pad458[0x464 - 0x458];
    s32 frames;
    s32 blinkDelay;
    s32 blinking;
};

struct ResultsViewport {
    s32 ulx;
    s32 uly;
    s32 lrx;
    s32 lry;
};

struct ResultsPlayerPanel {
    char pad0[0x4A8];
    s32 state;
    char pad4AC[0x4D0 - 0x4AC];
};

struct FourPlayerResultsScreen {
    char pad0[8];
    struct ResultsPlayerPanel panels[4];
    char pad1348[0x1358 - 0x1348];
    s32 state;
    char pad135C[0x1370 - 0x135C];
    char badges[4][0xC0];
};

#endif
