#include "unbake_gbi.h"
/* Switches the render mode, emitting a full-sync command the first time and a cycle-type other-mode command for modes 6 and 7. */
#include "basetypes.h"

#include "basetypes.h"
#include "n64sdk.h"

extern s32 D_800E32C4;
extern s32 D_800E32E4;
extern Gfx *D_80110634;

static inline void beginFrame(void) {
    Gfx *g;

    D_800E32E4 = 1;
    g = D_80110634++;
    gDPPipeSync(g);
}

void func_80419074(s32 mode) {
    if (mode != D_800E32C4) {
        D_800E32C4 = mode;
        if (D_800E32E4 == 0) {
            beginFrame();
        }
        switch (mode) {
        case 6: {
            Gfx *g = D_80110634++;
            gDPSetTexturePersp(g, G_TP_PERSP);
            break;
        }
        case 7: {
            Gfx *g = D_80110634++;
            gDPSetTexturePersp(g, G_TP_NONE);
            break;
        }
        }
    }
}
