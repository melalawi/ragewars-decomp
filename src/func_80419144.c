#include "unbake_gbi.h"
/* Switches the texture mode (forced to 14 while D_80153F68 is clear), emitting a full-sync command the first time and a texture-enable command for modes 13 and 14. */
#include "basetypes.h"

#include "basetypes.h"
#include "n64sdk.h"

extern s32 D_80153F68;
extern s32 D_800E32D0;
extern s32 D_800E32E4;
extern Gfx *D_80110634;

static inline void beginFrame(void) {
    Gfx *g;

    D_800E32E4 = 1;
    g = D_80110634++;
    gDPPipeSync(g);
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
        if (mode == 13) gSPTexture(D_80110634++, 32768, 32768, 0, 0, G_ON) else if (mode == 14) gSPTexture(D_80110634++, 32768, 32768, 0, 0, G_OFF);
    }
}
