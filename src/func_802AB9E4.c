#include "basetypes.h"

/* Appends a pipe synchronisation and an other-mode setting to the display list D_80110634 points
   into, then calls func_8026925C with 0x15 and func_80268CE0 with 0x19. */
typedef struct {
    u32 w0;
    u32 w1;
} Gfx;

extern Gfx *D_80110634;
extern void func_8026925C(u32);
extern void func_80268CE0(u32);

void func_802AB9E4(void) {
    Gfx *gfx;

    gfx = D_80110634++;
    gfx->w0 = 0xE7000000;
    gfx->w1 = 0;
    gfx = D_80110634++;
    gfx->w0 = 0xE3000A01;
    gfx->w1 = 0;
    func_8026925C(0x15);
    func_80268CE0(0x19);
}
