#include "unbake_gbi.h"
#include "basetypes.h"

/* Appends a pipe synchronisation and an other-mode setting to the display list D_80110634 points
   into, then calls func_8026925C with 0x15 and func_80268CE0 with 0x19. */
#include "basetypes.h"
#include "n64sdk.h"

extern Gfx *D_80110634;
extern void func_8026925C(u32);
extern void func_80268CE0(u32);

void func_802AB9E4(void) {
    Gfx *gfx;

    gfx = D_80110634++;
    gDPPipeSync(gfx);
    gfx = D_80110634++;
    gDPSetCycleType(gfx, G_CYC_1CYCLE);
    func_8026925C(0x15);
    func_80268CE0(0x19);
}
