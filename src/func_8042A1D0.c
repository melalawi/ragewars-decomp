/* Draw callback of the versus results screen D_800E4F60: on draw event 1 in states 3, 8 or 9 it
   sets the fill D_800D15E0 to blended white, restores the full-screen clip, and at alpha 210 draws
   the four player panels (on screen 0x14 with no pending pause) and the tie panel at 0x308 unless a
   winner is set, then resets the fill. On update event 0 (unless func_8029A958 reports 0x19) it
   plays the winner's voice on the twentieth frame, raises the banner blink six frames later, and
   fades the two banner sprites out by 30 per frame before hiding them. Returns zero. */
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

struct Fill {
    s32 mode;
    f32 color[4];
};

struct Sprite {
    char pad0[0x10];
    u8 alpha;
};

struct Screen {
    char pad0[0x8];
    char panels[4][0xC0];
    char tie[0x3DC - 0x308];
    s32 state;
    char pad3E0[0x434 - 0x3E0];
    s32 winnerSlot;
    s32 winner;
    char pad43C[0x450 - 0x43C];
    struct Sprite *bannerShadow;
    struct Sprite *banner;
    char pad458[0x464 - 0x458];
    s32 frames;
    s32 blinkDelay;
    s32 blinking;
};

extern struct Screen *D_800E4F60;
extern s32 D_800D15E0;
extern f32 D_800D15E4[4];
extern s32 D_800E28D0;
extern s32 D_800E28D4;
extern Gfx *D_80110634;
extern s32 D_80154024;

extern s32 func_8029A958(void);
extern void func_804399D0(char *);
extern s32 func_8042B474(s32);
extern s32 func_8042B398(s32, s32);
extern void func_804220D8(s32);
extern void func_8040E958(struct Sprite *, s32);

s32 func_8042A1D0(void *arg0, void *arg1, s32 event) {
    s32 i;
    s32 alpha;

    if (event == 1 && (D_800E4F60->state == 3 || D_800E4F60->state == 8 || D_800E4F60->state == 9)) {
        ((struct Fill *)&D_800D15E0)->mode = 0;
        D_800D15E0 = 1;
        D_800D15E4[0] = 255.0f;
        D_800D15E4[1] = 255.0f;
        D_800D15E4[2] = 255.0f;
        D_800D15E4[3] = 255.0f;
        gDPSetScissor(D_80110634++, G_SC_NON_INTERLACE, 0, 0, D_800E28D0 - 1, D_800E28D4 - 1);
        D_800D15E4[3] = 210.0f;
        if (func_8029A958() == 0x14 && D_80154024 == 0) {
            for (i = 0; i < 4; i++) {
                func_804399D0(D_800E4F60->panels[i]);
            }
        }
        if (D_800E4F60->winner == 0) {
            func_804399D0(D_800E4F60->tie);
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
