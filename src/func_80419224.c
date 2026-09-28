#include "basetypes.h"

/* Appends one pipe synchronisation to the display list D_80110634 points into the first time it
   is called after func_80419268 clears the flag D_800E32E4. */
typedef struct {
    u32 w0;
    u32 w1;
} Gfx;

extern s32 D_800E32E4;
extern Gfx *D_80110634;

void func_80419224(void) {
    Gfx *gfx;

    if (D_800E32E4 == 0) {
        D_800E32E4 = 1;
        gfx = D_80110634++;
        gfx->w0 = 0xE7000000;
        gfx->w1 = 0;
    }
}
