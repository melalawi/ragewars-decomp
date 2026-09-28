/* Draw callback of the results screen D_800E4690: on draw event 1 in states 3, 8 or 9 it resets
   the fill colour D_800D15E0 to opaque white, and for each of the one or two viewports clips the
   display list to its rectangle in D_800E41C0 (0, then 2 for the lower view), draws the player's panel through func_8041C864 and restores the
   full-screen clip. Outside two-player mode (and unless func_8029A958 reports 0x19) it plays sound
   0x259 past the base at 0xA44 on the twentieth frame, raises the banner blink after six more
   frames, and fades the two banner sprites out by 30 per frame before hiding them. Returns zero. */
#include "basetypes.h"

typedef struct {
    u32 w0;
    u32 w1;
} Gfx;

#define G_SETSCISSOR 0xED
#define G_SC_NON_INTERLACE 0
#define _SHIFTL(v, s, w) ((u32)(((u32)(v) & ((1 << (w)) - 1)) << (s)))

#define gDPSetScissor(pkt, mode, ulx, uly, lrx, lry)                       \
    {                                                                      \
        Gfx *_g = (Gfx *)(pkt);                                            \
        _g->w0 = _SHIFTL(G_SETSCISSOR, 24, 8) |                            \
                 _SHIFTL((s32)((f32)(ulx) * 4.0f), 12, 12) |               \
                 _SHIFTL((s32)((f32)(uly) * 4.0f), 0, 12);                 \
        _g->w1 = _SHIFTL(mode, 24, 2) |                                    \
                 _SHIFTL((s32)((f32)(lrx) * 4.0f), 12, 12) |               \
                 _SHIFTL((s32)((f32)(lry) * 4.0f), 0, 12);                 \
    }

struct Viewport {
    s32 ulx;
    s32 uly;
    s32 lrx;
    s32 lry;
};


struct Sprite {
    char pad0[0x10];
    u8 alpha;
};

struct Screen {
    char pad0[0x20];
    char panels[2][0x4A8];
    char pad970[0x988 - 0x970];
    s32 state;
    char pad98C[0xA44 - 0x98C];
    s32 soundBase;
    char padA48[0xA60 - 0xA48];
    struct Sprite *bannerShadow;
    struct Sprite *banner;
    s32 blinking;
    s32 frames;
    s32 blinkDelay;
};

extern struct Screen *D_800E4690;
extern s32 D_800D15E0;
extern f32 D_800D15E4[4];
extern struct Viewport D_800E41C0[];
extern s32 D_800E28D0;
extern s32 D_800E28D4;
extern Gfx *D_80110634;
struct Settings {
    char pad0[0xD];
    u8 players;
};
extern struct Settings D_801462C8;

extern void func_8041C864(char *);
extern s32 func_8029A958(void);
extern void func_804220D8(s32);
extern void func_8040E958(struct Sprite *, s32);

s32 func_80426EC4(void *arg0, void *arg1, s32 event) {
    s32 views;
    s32 i;
    s32 alpha;
    s32 k;

    if (event == 1 && (D_800E4690->state == 3 || D_800E4690->state == 8 || D_800E4690->state == 9)) {
        D_800D15E0 = 0;
        D_800D15E4[0] = 255.0f;
        D_800D15E4[1] = 255.0f;
        D_800D15E4[2] = 255.0f;
        D_800D15E4[3] = 255.0f;
        views = 1;
        if (D_801462C8.players == 2) {
            views = 2;
        }
        for (i = 0, k = 0; i < views; i++, k = 2) {
            gDPSetScissor(D_80110634++, G_SC_NON_INTERLACE, D_800E41C0[k].ulx, D_800E41C0[k].uly,
                          D_800E41C0[k].lrx, D_800E41C0[k].lry);
            func_8041C864(D_800E4690->panels[i]);
            gDPSetScissor(D_80110634++, G_SC_NON_INTERLACE, 0, 0, D_800E28D0 - 1, D_800E28D4 - 1);
        }
        if (D_801462C8.players != 2 && func_8029A958() != 0x19) {
            if (D_800E4690->frames < 20) {
                if (++D_800E4690->frames == 20) {
                    k = D_800E4690->soundBase;
                    func_804220D8(k + 0x259);
                    D_800E4690->blinkDelay = 0;
                }
            }
            if (D_800E4690->blinkDelay != -1) {
                if (++D_800E4690->blinkDelay >= 6) {
                    D_800E4690->blinking = 1;
                    D_800E4690->blinkDelay = -1;
                }
            }
            if (D_800E4690->blinking == 1) {
                alpha = D_800E4690->banner->alpha;
                alpha -= 30;
                if (alpha <= 0) {
                    D_800E4690->blinking = 0;
                    func_8040E958(D_800E4690->bannerShadow, 0);
                    func_8040E958(D_800E4690->banner, 0);
                    alpha = 0xFF;
                }
                D_800E4690->banner->alpha = alpha;
                D_800E4690->bannerShadow->alpha = alpha;
            }
        }
    }
    return 0;
}
