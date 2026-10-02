/* Draw callback of the four-player results screen D_800E59E0: on draw event 1 in state 3 it resets the
   fill colour to opaque white, clips the display list to each active player's viewport in D_800E41C0 to
   draw that panel through func_8041C864, restores the full-screen clip, and then draws each ready
   player's badge that func_80439EA8 accepts at alpha 150 through func_804399D0. Returns zero. */
#include "basetypes.h"
#include "n64sdk.h"
#include "unbake_gbi.h"
#include "shared/resultscreens.h"

extern struct FourPlayerResultsScreen *D_800E59E0;
extern s32 D_800D15E0;
extern f32 D_800D15E4[4];
extern struct ResultsViewport D_800E41C0[];
extern s32 D_800E28D0;
extern s32 D_800E28D4;
extern Gfx *D_80110634;

extern void func_8041C864(struct ResultsPlayerPanel *);
extern s32 func_80439EA8(char *);
extern void func_804399D0(char *);
extern void func_804397F0_auto(char *);

s32 func_8043AA70(void *arg0, void *arg1, s32 event) {
    s32 i;

    if (event == 1 && D_800E59E0->state == 3) {
        D_800D15E0 = 0;
        D_800D15E4[0] = 255.0f;
        D_800D15E4[1] = 255.0f;
        D_800D15E4[2] = 255.0f;
        D_800D15E4[3] = 255.0f;
        for (i = 0; i < 4; i++) {
            if (D_800E59E0->panels[i].state == 1 || D_800E59E0->panels[i].state == 2) {
                gDPSetScissor(D_80110634++, G_SC_NON_INTERLACE, D_800E41C0[i].ulx, D_800E41C0[i].uly,
                              D_800E41C0[i].lrx, D_800E41C0[i].lry);
                func_8041C864(&D_800E59E0->panels[i]);
            }
        }
        gDPSetScissor(D_80110634++, G_SC_NON_INTERLACE, 0, 0, D_800E28D0 - 1, D_800E28D4 - 1);
        for (i = 0; i < 4; i++) {
            if (D_800E59E0->panels[i].state == 1 && func_80439EA8(D_800E59E0->badges[i]) != 0) {
                D_800D15E0 = 1;
                D_800D15E4[3] = 150.0f;
#if defined(VERSION_DE)
                func_804397F0_auto(D_800E59E0->badges[i]);
#else
                func_804399D0(D_800E59E0->badges[i]);
#endif
                D_800D15E0 = 0;
                D_800D15E4[3] = 255.0f;
            }
        }
    }
    return 0;
}
