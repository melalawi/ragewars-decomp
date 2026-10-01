#include "unbake_gbi.h"
#include "basetypes.h"

/* Appends one pipe synchronisation to the display list D_80110634 points into the first time it
   is called after func_80419268 clears the flag D_800E32E4. */
#include "basetypes.h"
#include "n64sdk.h"

extern s32 D_800E32E4;
extern Gfx *D_80110634;

void func_80419224(void) {
    Gfx *gfx;

    if (D_800E32E4 == 0) {
        D_800E32E4 = 1;
        gDPPipeSync(D_80110634++);
    }
}
