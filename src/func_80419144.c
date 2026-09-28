/* Switches the texture mode (forced to 14 while D_80153F68 is clear), emitting a full-sync command the first time and a texture-enable command for modes 13 and 14. */
#include "basetypes.h"

typedef struct {
    u32 w0;
    u32 w1;
} Gfx;

extern s32 D_80153F68;
extern s32 D_800E32D0;
extern s32 D_800E32E4;
extern Gfx *D_80110634;

static inline void beginFrame(void) {
    Gfx *g;

    D_800E32E4 = 1;
    g = D_80110634++;
    g->w0 = 0xE7000000;
    g->w1 = 0;
}

void func_80419144(s32 mode) {
    if (D_80153F68 == 0) {
        mode = 14;
    }
    if (mode != D_800E32D0) {
        D_800E32D0 = mode;
        if (D_800E32E4 == 0) {
            beginFrame();
        }
        if (mode == 13) {
            Gfx *g = D_80110634++;
            g->w0 = 0xD7000002;
            g->w1 = 0x80008000;
        } else if (mode == 14) {
            Gfx *g = D_80110634++;
            g->w0 = 0xD7000000;
            g->w1 = 0x80008000;
        }
    }
}
