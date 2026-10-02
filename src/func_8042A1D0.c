/* Draw callback of the versus results screen D_800E4F60: on draw event 1 in states 3, 8 or 9 it
   sets the fill D_800D15E0 to blended white, restores the full-screen clip, and at alpha 210 draws
   the four player panels (on screen 0x14 with no pending pause) and the tie panel at 0x308 unless a
   winner is set, then resets the fill. On update event 0 (unless func_8029A958 reports 0x19) it
   plays the winner's voice on the twentieth frame, raises the banner blink six frames later, and
   fades the two banner sprites out by 30 per frame before hiding them. Returns zero. */
#include "basetypes.h"
#include "n64sdk.h"
#include "unbake_gbi.h"
#include "shared/resultscreens.h"

extern struct VersusResultsScreen *D_800E4F60;
extern s32 D_800D15E0;
extern f32 D_800D15E4[4];
extern s32 D_800E28D0;
extern s32 D_800E28D4;
extern Gfx *D_80110634;
extern s32 D_80154024;

extern s32 func_8029A958(void);
extern void func_804399D0(char *);
extern void func_804397F0_auto(char *);
extern s32 func_8042B474(s32);
extern s32 func_8042B398(s32, s32);
extern void func_804220D8(s32);
extern void func_8040E958(struct MenuBannerSprite *, s32);

s32 func_8042A1D0(void *arg0, void *arg1, s32 event) {
    s32 i;
    s32 alpha;

    if (event == 1 && (D_800E4F60->state == 3 || D_800E4F60->state == 8 || D_800E4F60->state == 9)) {
        ((struct MenuRenderFill *)&D_800D15E0)->mode = 0;
        D_800D15E0 = 1;
        D_800D15E4[0] = 255.0f;
        D_800D15E4[1] = 255.0f;
        D_800D15E4[2] = 255.0f;
        D_800D15E4[3] = 255.0f;
        gDPSetScissor(D_80110634++, G_SC_NON_INTERLACE, 0, 0, D_800E28D0 - 1, D_800E28D4 - 1);
        D_800D15E4[3] = 210.0f;
        if (func_8029A958() == 0x14 && D_80154024 == 0) {
            for (i = 0; i < 4; i++) {
#if defined(VERSION_DE)
                func_804397F0_auto(D_800E4F60->panels[i]);
#else
                func_804399D0(D_800E4F60->panels[i]);
#endif
            }
        }
        if (D_800E4F60->winner == 0) {
#if defined(VERSION_DE)
            func_804397F0_auto(D_800E4F60->tie);
#else
            func_804399D0(D_800E4F60->tie);
#endif
        }
        D_800D15E0 = 0;
        D_800D15E4[3] = 255.0f;
    }
    if (event == 0 && func_8029A958() != 0x19) {
        if (D_800E4F60->frames < 20) {
            if (++D_800E4F60->frames == 20 && D_800E4F60->winner > 0) {
                func_804220D8(func_8042B398(func_8042B474(D_800E4F60->winnerSlot), D_800E4F60->winner) + 0x259);
                D_800E4F60->blinkDelay = 0;
            }
        }
        if (D_800E4F60->blinkDelay != -1) {
            if (++D_800E4F60->blinkDelay >= 6) {
                D_800E4F60->blinking = 1;
                D_800E4F60->blinkDelay = -1;
            }
        }
        if (D_800E4F60->blinking == 1) {
            alpha = D_800E4F60->banner->alpha;
            alpha -= 30;
            if (alpha <= 0) {
                D_800E4F60->blinking = 0;
                func_8040E958(D_800E4F60->bannerShadow, 0);
                func_8040E958(D_800E4F60->banner, 0);
                alpha = 0xFF;
            }
            D_800E4F60->banner->alpha = alpha;
            D_800E4F60->bannerShadow->alpha = alpha;
        }
    }
    return 0;
}
