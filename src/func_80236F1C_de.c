#include "abi.h"
#include "common/types_8fd754e1e915.h"
#include "span_1000/code_80233920.h"
#include "span_1000/code_8026AC38.h"
#include "n64sdk.h"
#include "gbi.h"
#include "types.h"
#include "n64sdk.h"
#include "video_dimensions.h"
extern Gfx *D_8010C574;
extern Frame *D_8011BDC0;
extern s32 D_800DE880_de;
extern s32 D_800DE884_de;
extern s32 D_800CD72C;
extern s32 D_801427D4;
extern f32 D_800FF224_de;
extern f32 D_800CD738;
extern World_func_80236F1C_de D_80140F80;
extern char D_800CBCC0;
extern char D_800CBCF0_de;
extern void func_80253BBC_de(s32, s32);
extern void func_80235AE0_de(Racer *);
extern void func_802362E8_de(Racer *, s32);
extern void func_80239FD4_de(Racer *, s32);
extern void func_80233C88_de(Racer *);
extern void func_80238314_de(Race *, Racer *);
extern void func_804429D4_de(void *);
extern void func_802372D4_de(Racer *);
extern s32 func_80245784_de(void);
extern s32 func_80245798_de(void);
extern void func_8022A3F8_de(World_func_80236F1C_de *, Racer *);
/* Per-frame race update: clears three per-frame flags of the race's own racer, passes the race's first word to func_80253BBC_de, runs the 30-frame flash timer (restarted while D_80146894 is set or in mode 3) and while it runs clears the screen with a full-screen viewport, scissor and fill before func_8026D8F8_de, then updates every racer in the list until it ends or func_80245784_de or func_80245798_de reports, updates the race's own racer, hands the list to func_8022A3F8_de when the replay flag of D_80145040 is set, and passes the own racer's block at 0x554 to func_804429D4_de. */
void func_80236F1C_de(Race *race, s32 arg1)
{
    Racer *racer;
    race->self.hit = 0;
    race->self.boost = 0;
    race->self.spin = 0;
    if (race->music != 0) {
        func_80253BBC_de(0, race->music);
    }
    if (D_801427D4 != 0 || race->mode == 3) {
        D_800FF224_de = 30.0f;
    }
    if (D_800FF224_de != 0.0f) {
        D_800FF224_de -= D_800CD738;
    }
    if (D_800FF224_de < 0.0f) {
        D_800FF224_de = 0.0f;
    }
    if (D_800FF224_de != 0.0f) {
        racer = race->racers;
        if (racer != 0) {
            gDPPipeSync(D_8010C574++);
            gSPDisplayList(D_8010C574++, ((&D_800CBCC0)));
            gSPDisplayList(D_8010C574++, ((&D_800CBCF0_de)));
            racer->viewports[D_800CD72C].vscale[0] = SCREEN_WD;
            racer->viewports[D_800CD72C].vscale[1] = SCREEN_HT;
            racer->viewports[D_800CD72C].vtrans[0] = SCREEN_WD;
            racer->viewports[D_800CD72C].vtrans[1] = SCREEN_HT;
            gSPMoveMem(D_8010C574++, G_MV_VIEWPORT, 0, 16, ((&racer->viewports[D_800CD72C])));
            gDPSetScissorFrac(D_8010C574++, G_SC_NON_INTERLACE, (int)((float)((0)) * 4.0F), (int)((float)((0)) * 4.0F), (int)((float)((SCREEN_WD - 1)) * 4.0F), (int)((float)((SCREEN_HT - 1)) * 4.0F));
            gDPSetColorImage(D_8010C574++, G_IM_FMT_RGBA, G_IM_SIZ_16b, SCREEN_WD, (u32)((D_8011BDC0->colorImage)));
            gDPSetCycleType(D_8010C574++, G_CYC_FILL);
            gDPSetCombineLERP(D_8010C574++, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE);
            gDPSetRenderMode(D_8010C574++, ((0)), 0);
            gDPSetFillColor(D_8010C574++, ((0x10001)));
            gDPFillRectangle(D_8010C574++, 0, 0, (SCREEN_WD), (SCREEN_HT));
            func_8026D8F8_de();
        }
    }
    for (racer = race->racers; racer != 0;) {
        func_80235AE0_de(racer);
        func_802362E8_de(racer, arg1);
        if (racer->effect != 0) {
            func_80239FD4_de(racer, racer->effectArg);
        }
        func_80233C88_de(racer);
        func_80238314_de(race, racer);
        func_804429D4_de(racer->sound);
        func_802372D4_de(racer);
        if (func_80245784_de() != 0 || func_80245798_de() != 0) {
            racer = 0;
        } else {
            racer = racer->next;
        }
    }
    func_80235AE0_de(&race->self);
    if (race->mode == 0) {
        func_80233C88_de(&race->self);
    }
    func_80238314_de(race, &race->self);
    if (D_80140F80.replay != 0) {
        racer = race->racers;
        if (racer != 0) {
            func_8022A3F8_de(&D_80140F80, racer);
        }
    }
    func_804429D4_de(race->self.sound);
}
