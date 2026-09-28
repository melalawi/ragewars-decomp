#include "basetypes.h"

/* Copies the four checkboxes at 0xC to 0x18 of the screen D_800E4400 into the game flags word
   D_801462C8, setting or clearing bits 0x08000000, 0x10000000, 0x8 and 0x20000000 as
   func_8041AD84 reports each box checked. */

struct Screen {
    char pad0[0xC];
    void *boxes[4];
};

extern struct Screen *D_800E4400;
struct Globals {
    s32 flags;
};

extern struct Globals D_801462C8;
extern s32 func_8041AD84(void *);

void func_80421158(void) {
    if (func_8041AD84(D_800E4400->boxes[0]) == 0) {
        D_801462C8.flags &= ~0x08000000;
    } else {
        D_801462C8.flags |= 0x08000000;
    }
    if (func_8041AD84(D_800E4400->boxes[1]) == 0) {
        D_801462C8.flags &= ~0x10000000;
    } else {
        D_801462C8.flags |= 0x10000000;
    }
    if (func_8041AD84(D_800E4400->boxes[2]) == 0) {
        D_801462C8.flags &= ~0x8;
    } else {
        D_801462C8.flags |= 0x8;
    }
    if (func_8041AD84(D_800E4400->boxes[3]) == 0) {
        D_801462C8.flags &= ~0x20000000;
    } else {
        D_801462C8.flags |= 0x20000000;
    }
}
