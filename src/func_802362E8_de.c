#include "common/types.h"
#include "span_1000/code_80233C78.h"
#include "span_1000/code_8028FD24.h"
#include "n64sdk.h"
#include "gbi.h"
#include "types.h"
#include "n64sdk.h"


/* Draws one view of the game world: after the per-frame setup (func_802909F0_de) it runs the world, player,
 * effect, particle, object and translucent passes for the view in order, skipping the player and effect
 * passes in the alternate HUD mode (func_80245798_de) and running the extra passes only when func_802934F8_de
 * allows; when debug flag 0x200 is set it then clears the view's rectangle at 0x29C..0x2A8 to the far
 * depth with a fill-rectangle command. */


extern Gfx *D_8010C574;
extern char D_80140F80;
extern char D_801379C0;
extern s32 D_80142208_de;

extern void func_80289084_de(char *, char *);
extern s32 func_80245798_de(void);
extern void func_80228798_de(void *, char *);
extern s32 func_802934F8_de(void);
extern void func_8022A2A0_de(void *, char *);
extern void func_8028B028_de(char *, char *);
extern void func_802A5180_de(void *, char *);
extern void func_802905F4_de(char *, char *);
extern void func_80286454_de(char *, char *);
extern void func_80228958_de(void *, char *);
extern void func_8023B3F8_de(char *, char *);
extern void func_8028B160_de(char *, char *);
extern void func_802A478C_de(void *, char *);
extern void func_80238D30_de(char *);
extern void func_8022A328_de(void *, char *);
extern void func_8026925C_de(s32);







void func_802362E8_de(char *view, char *world) {
    f32 right;

    func_802909F0_de();
    func_80289084_de(world, view);
    if (func_80245798_de() == 0) {
        func_80228798_de(&D_80140F80, view);
    }
    if (func_802934F8_de() != 0) {
        func_8022A2A0_de(&D_80140F80, view);
    }
    func_8028B028_de(world, view);
    func_802A5180_de(&D_801379C0, view);
    if (func_80245798_de() == 0) {
        func_802905F4_de(world + 0x11778, view);
    }
    func_80286454_de(world, view);
    func_80228958_de(&D_80140F80, view);
    func_8023B3F8_de(view + 0x570, view);
    func_8028B160_de(world, view);
    func_802A478C_de(&D_801379C0, view);
    func_80238D30_de(view);
    if (func_80245798_de() == 0 && func_802934F8_de() != 0) {
        func_8022A328_de(&D_80140F80, view);
    }
    if (D_80142208_de & 0x200) {
        gDPPipeSync(D_8010C574++);
        gDPSetCycleType(D_8010C574++, G_CYC_1CYCLE);
        gDPSetBlendColor(D_8010C574++, 255, 255, 255, 255);
        gDPSetPrimDepth(D_8010C574++, 65535, 65535);
        gDPSetDepthSource(D_8010C574++, G_ZS_PRIM);
        func_8026925C_de(0x16);
        {
            Gfx *_g;

            right = ((func_80219490_S2 *)(view))->unk2A4 + ((func_80219490_S2 *)(view))->unk29C;
            gDPFillRectangle((Gfx *)(D_8010C574++), ((func_80219490_S2 *)(view))->unk2A4, ((func_80219490_S2 *)(view))->unk2A8, right, ((func_80219490_S2 *)(view))->unk2A8 + ((func_80219490_S2 *)(view))->unk2A0);
        }
    }
}
