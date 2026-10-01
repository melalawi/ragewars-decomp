#include "unbake_gbi.h"
/* Draws one view of the game world: after the per-frame setup (func_802909D0) it runs the world, player,
 * effect, particle, object and translucent passes for the view in order, skipping the player and effect
 * passes in the alternate HUD mode (func_80245788) and running the extra passes only when func_802934DC
 * allows; when debug flag 0x200 is set it then clears the view's rectangle at 0x29C..0x2A8 to the far
 * depth with a fill-rectangle command. */
#include "basetypes.h"

#include "basetypes.h"
#include "n64sdk.h"

extern Gfx *D_80110634;
extern char D_80145040;
extern char D_8013BA80;
extern s32 D_801462C8;
extern void func_802909D0(void);
extern void func_80289054(char *, char *);
extern s32 func_80245788(void);
extern void func_80228774(void *, char *);
extern s32 func_802934DC(void);
extern void func_8022A274(void *, char *);
extern void func_8028B004(char *, char *);
extern void func_802A6170(void *, char *);
extern void func_802905D4(char *, char *);
extern void func_80286424(char *, char *);
extern void func_80228934(void *, char *);
extern void func_8023B3E8(char *, char *);
extern void func_8028B13C(char *, char *);
extern void func_802A577C(void *, char *);
extern void func_80238D20(char *);
extern void func_8022A2FC(void *, char *);
extern void func_8026925C(s32);



typedef struct func_802362D8_S1 func_802362D8_S1;
struct func_802362D8_S1 {
    char pad0[0x29C];
    f32 unk29C;
    char pad29C[0x2A0 - 0x29C - sizeof(f32)];
    f32 unk2A0;
    char pad2A0[0x2A4 - 0x2A0 - sizeof(f32)];
    f32 unk2A4;
    char pad2A4[0x2A8 - 0x2A4 - sizeof(f32)];
    f32 unk2A8;
};


void func_802362D8(char *view, char *world) {
    f32 right;

    func_802909D0();
    func_80289054(world, view);
    if (func_80245788() == 0) {
        func_80228774(&D_80145040, view);
    }
    if (func_802934DC() != 0) {
        func_8022A274(&D_80145040, view);
    }
    func_8028B004(world, view);
    func_802A6170(&D_8013BA80, view);
    if (func_80245788() == 0) {
        func_802905D4(world + 0x11778, view);
    }
    func_80286424(world, view);
    func_80228934(&D_80145040, view);
    func_8023B3E8(view + 0x570, view);
    func_8028B13C(world, view);
    func_802A577C(&D_8013BA80, view);
    func_80238D20(view);
    if (func_80245788() == 0 && func_802934DC() != 0) {
        func_8022A2FC(&D_80145040, view);
    }
    if (D_801462C8 & 0x200) {
        gDPPipeSync(D_80110634++);
        gDPSetCycleType(D_80110634++, G_CYC_1CYCLE);
        gDPSetBlendColor(D_80110634++, 255, 255, 255, 255);
        gDPSetPrimDepth(D_80110634++, 65535, 65535);
        gDPSetDepthSource(D_80110634++, G_ZS_PRIM);
        func_8026925C(0x16);
        {
            Gfx *_g;

            right = ((func_802362D8_S1 *)(view))->unk2A4 + ((func_802362D8_S1 *)(view))->unk29C;
            gDPFillRectangle((Gfx *)(D_80110634++), ((func_802362D8_S1 *)(view))->unk2A4, ((func_802362D8_S1 *)(view))->unk2A8, right, ((func_802362D8_S1 *)(view))->unk2A8 + ((func_802362D8_S1 *)(view))->unk2A0);
        }
    }
}
