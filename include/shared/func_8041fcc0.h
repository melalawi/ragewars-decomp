#ifndef UNBAKE_FUNC_8041FCC0_H
#define UNBAKE_FUNC_8041FCC0_H
#include "basetypes.h"

struct Panel;
struct Screen;
struct Viewport;






struct Panel {
    char pad0[8];
    s32 player;
    s32 state;
    char pad10[8];
    char body[0x4A8];
    s32 flash;
    char pad4C4[4];
};
struct Viewport {
    s32 ulx;
    s32 uly;
    s32 lrx;
    s32 lry;
};
struct Screen {
    char pad0[8];
    struct Panel panels[4];
    char pad1328[0x10];
    s32 state;
};
#endif
