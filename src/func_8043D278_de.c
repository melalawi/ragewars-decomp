#include "span_166000/code_8043D1DC.h"
#include "types.h"

extern s32 D_80142208_de;
extern s32 D_8014220C;
extern s32 D_800D3B0C;
extern s32 D_800D3B10;

/* Updates the option item's flag bit and selects its associated text pointer. */
s32 func_8043D278_de(struct Func8043D458Arg *arg0) {
    if (D_8014220C & 1) {
        arg0->flags |= 0x01000000;
    } else {
        arg0->flags &= 0xFEFFFFFF;
    }
    if (D_80142208_de & 1) {
        arg0->text = &D_800D3B0C;
    } else {
        arg0->text = &D_800D3B10;
    }
    return 0;
}

extern s32 D_80142208_de;

/* Toggles bit 1 of the settings flag word D_801462C8 and returns 0. */
s32 func_8043D2E4_de(void) {
    D_80142208_de ^= 2;
    return 0;
}
