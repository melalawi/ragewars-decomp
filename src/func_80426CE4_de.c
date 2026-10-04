#include "common/types.h"
#include "span_16E000/code_80425BC0.h"
#include "span_16E000/types.h"
#include "gbi.h"
#include "types.h"
#include "n64sdk.h"
/* Draw callback of the results screen D_800E0640_de: on draw event 1 in states 3, 8 or 9 it resets
   the fill colour D_800CC390 to opaque white, and for each of the one or two viewports clips the
   display list to its rectangle in D_800E0170 (0, then 2 for the lower view), draws the player's panel through func_8041C7F4_de and restores the
   full-screen clip. Outside two-player mode (and unless func_80299958_de reports 0x19) it plays sound
   0x259 past the base at 0xA44 on the twentieth frame, raises the banner blink after six more
   frames, and fades the two banner sprites out by 30 per frame before hiding them. Returns zero. */








extern struct ResultsDrawScreen *D_800E0640_de;
extern s32 D_800CC390;
extern f32 D_800CC394_de[4];
extern struct Shape_typemap_6 D_800E0170[];
extern s32 D_800DE880_de;
extern s32 D_800DE884_de;
extern Gfx *D_8010C574;

extern struct SettingsE D_80142208_de;

extern void func_8041C7F4_de(char *);
extern s32 func_80299958_de(void);
extern void func_804220A8_de(s32);
extern void func_8040E8D8_de(struct Shape_typemap_21 *, s32);

s32 func_80426CE4_de(void *arg0, void *arg1, s32 event) {
    s32 views;
    s32 i;
    s32 alpha;
    s32 k;

    if (event == 1 && (D_800E0640_de->state == 3 || D_800E0640_de->state == 8 || D_800E0640_de->state == 9)) {
        D_800CC390 = 0;
        D_800CC394_de[0] = 255.0f;
        D_800CC394_de[1] = 255.0f;
        D_800CC394_de[2] = 255.0f;
        D_800CC394_de[3] = 255.0f;
        views = 1;
        if (D_80142208_de.players == 2) {
            views = 2;
        }
        for (i = 0, k = 0; i < views; i++, k = 2) {
            gDPSetScissorFrac(D_8010C574++, G_SC_NON_INTERLACE, (s32)((f32)((D_800E0170[k].field_0)) * 4.0f), (s32)((f32)((D_800E0170[k].field_4)) * 4.0f), (s32)((f32)((D_800E0170[k].field_8)) * 4.0f), (s32)((f32)((D_800E0170[k].field_C)) * 4.0f));
            func_8041C7F4_de(D_800E0640_de->panels[i]);
            gDPSetScissorFrac(D_8010C574++, G_SC_NON_INTERLACE, (s32)((f32)((0)) * 4.0f), (s32)((f32)((0)) * 4.0f), (s32)((f32)((D_800DE880_de - 1)) * 4.0f), (s32)((f32)((D_800DE884_de - 1)) * 4.0f));
        }
        if (D_80142208_de.players != 2 && func_80299958_de() != 0x19) {
            if (D_800E0640_de->frames < 20) {
                if (++D_800E0640_de->frames == 20) {
                    k = D_800E0640_de->soundBase;
                    func_804220A8_de(k + 0x259);
                    D_800E0640_de->blinkDelay = 0;
                }
            }
            if (D_800E0640_de->blinkDelay != -1) {
                if (++D_800E0640_de->blinkDelay >= 6) {
                    D_800E0640_de->blinking = 1;
                    D_800E0640_de->blinkDelay = -1;
                }
            }
            if (D_800E0640_de->blinking == 1) {
                alpha = D_800E0640_de->banner->field_10;
                alpha -= 30;
                if (alpha <= 0) {
                    D_800E0640_de->blinking = 0;
                    func_8040E8D8_de(D_800E0640_de->bannerShadow, 0);
                    func_8040E8D8_de(D_800E0640_de->banner, 0);
                    alpha = 0xFF;
                }
                D_800E0640_de->banner->field_10 = alpha;
                D_800E0640_de->bannerShadow->field_10 = alpha;
            }
        }
    }
    return 0;
}
