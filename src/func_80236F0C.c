#include "unbake_gbi.h"
#include "basetypes.h"

#include "basetypes.h"
#include "n64sdk.h"

typedef struct UnitVp {
    s16 vscale[4];
    s16 vtrans[4];
} UnitVp;

typedef struct Frame {
    char pad0[0x110];
    void *colorImage;
} Frame;

typedef struct Racer {
    char pad0[4];
    struct Racer *next;
    char pad8[0x118];
    s32 effect;
    u16 pad124;
    u16 effectArg;
    char pad128[0x188];
    UnitVp viewports[2];
    char pad2D0[0x250];
    u8 hit;
    u8 boost;
    u8 spin;
    char pad523[0x31];
    char sound[0x40];
} Racer;

typedef struct Race {
    s32 music;
    char pad4[0x1C];
    Racer *racers;
    char pad24[0xC];
    s32 mode;
    char pad34[0xC];
    Racer self;
} Race;

typedef struct World {
    char pad0[0x12A5];
    u8 replay;
} World;

extern Gfx *D_80110634;
extern Frame *D_8011FE80;
extern s32 D_800E28D0;
extern s32 D_800E28D4;
extern s32 D_800D297C;
extern s32 D_80146894;
extern f32 D_80103224;
extern f32 D_800D2988;
extern World D_80145040;
extern char D_800D0F10;
extern char D_800D0F40;
extern void func_80253B5C(s32, s32);
extern void func_8026D8F8(void);
extern void func_80235AD0(Racer *);
extern void func_802362D8(Racer *, s32);
extern void func_80239FC4(Racer *, s32);
extern void func_80233C78(Racer *);
extern void func_80238304(Race *, Racer *);
extern void func_80442B44(void *);
extern void func_802372C4(Racer *);
extern s32 func_80245774(void);
extern s32 func_80245788(void);
extern void func_8022A3E8(World *, Racer *);

#define SCREEN_WD D_800E28D0
#define SCREEN_HT D_800E28D4










/* Per-frame race update: clears three per-frame flags of the race's own racer, passes the race's first word to func_80253B5C, runs the 30-frame flash timer (restarted while D_80146894 is set or in mode 3) and while it runs clears the screen with a full-screen viewport, scissor and fill before func_8026D8F8, then updates every racer in the list until it ends or func_80245774 or func_80245788 reports, updates the race's own racer, hands the list to func_8022A3E8 when the replay flag of D_80145040 is set, and passes the own racer's block at 0x554 to func_80442B44. */
void func_80236F0C(Race *race, s32 arg1)
{
    Racer *racer;

    race->self.hit = 0;
    race->self.boost = 0;
    race->self.spin = 0;
    if (race->music != 0) {
        func_80253B5C(0, race->music);
    }
    if (D_80146894 != 0 || race->mode == 3) {
        D_80103224 = 30.0f;
    }
    if (D_80103224 != 0.0f) {
        D_80103224 -= D_800D2988;
    }
    if (D_80103224 < 0.0f) {
        D_80103224 = 0.0f;
    }
    if (D_80103224 != 0.0f) {
        racer = race->racers;
        if (racer != 0) {
            gDPPipeSync(D_80110634++);
            gSPDisplayList(D_80110634++, ((&D_800D0F10)));
            gSPDisplayList(D_80110634++, ((&D_800D0F40)));
            racer->viewports[D_800D297C].vscale[0] = SCREEN_WD;
            racer->viewports[D_800D297C].vscale[1] = SCREEN_HT;
            racer->viewports[D_800D297C].vtrans[0] = SCREEN_WD;
            racer->viewports[D_800D297C].vtrans[1] = SCREEN_HT;
            gSPMoveMem(D_80110634++, G_MV_VIEWPORT, 0, 16, ((&racer->viewports[D_800D297C])));
            gDPSetScissorFrac(D_80110634++, G_SC_NON_INTERLACE, (int)((float)((0)) * 4.0F), (int)((float)((0)) * 4.0F), (int)((float)((SCREEN_WD - 1)) * 4.0F), (int)((float)((SCREEN_HT - 1)) * 4.0F));
            gDPSetColorImage(D_80110634++, G_IM_FMT_RGBA, G_IM_SIZ_16b, SCREEN_WD, (u32)((D_8011FE80->colorImage)));
            gDPSetCycleType(D_80110634++, G_CYC_FILL);
            gDPSetCombineLERP(D_80110634++, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE);
            gDPSetRenderMode(D_80110634++, ((0)), 0);
            gDPSetFillColor(D_80110634++, ((0x10001)));
            gDPFillRectangle(D_80110634++, 0, 0, (SCREEN_WD), (SCREEN_HT));
            func_8026D8F8();
        }
    }
    for (racer = race->racers; racer != 0;) {
        func_80235AD0(racer);
        func_802362D8(racer, arg1);
        if (racer->effect != 0) {
            func_80239FC4(racer, racer->effectArg);
        }
        func_80233C78(racer);
        func_80238304(race, racer);
        func_80442B44(racer->sound);
        func_802372C4(racer);
        if (func_80245774() != 0 || func_80245788() != 0) {
            racer = 0;
        } else {
            racer = racer->next;
        }
    }
    func_80235AD0(&race->self);
    if (race->mode == 0) {
        func_80233C78(&race->self);
    }
    func_80238304(race, &race->self);
    if (D_80145040.replay != 0) {
        racer = race->racers;
        if (racer != 0) {
            func_8022A3E8(&D_80145040, racer);
        }
    }
    func_80442B44(race->self.sound);
}
