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

struct Panel {
    char pad0[8];
    s32 player;
    s32 state;
    char pad10[8];
    char body[0x4A8];
    s32 flash;
    char pad4C4[4];
};

struct Screen {
    char pad0[8];
    struct Panel panels[4];
    char pad1328[0x10];
    s32 state;
};

extern struct Screen *D_800E42D0;
extern s32 D_800D15E0;
extern f32 D_800D15E4[5];
extern struct Viewport D_800E41C0[];
extern s32 D_800E28D0;
extern s32 D_800E28D4;
extern Gfx *D_80110634;

extern void func_8041C864(void *);

/* Draw callback of the four-player screen D_800E42D0: on draw event 1 in state 3 it clips the display list to each joined or ready player's viewport in D_800E41C0 and draws that panel through func_8041C864, in the flash fill (mode 3) while the panel's flash counter runs down and in opaque white otherwise, then restores the full-screen clip and the white fill; returns zero. */
s32 func_8041FCC0(void *arg0, void *arg1, s32 event)
{
    s32 i;

    if (event == 1 && D_800E42D0->state == 3) {
        D_800D15E0 = 0;
        D_800D15E4[0] = 255.0f;
        D_800D15E4[1] = 255.0f;
        D_800D15E4[2] = 255.0f;
        D_800D15E4[3] = 255.0f;
        for (i = 0; i < 4; i++) {
            if (D_800E42D0->panels[i].state == 1 || D_800E42D0->panels[i].state == 3) {
                if (D_800E42D0->panels[i].player != -1) {
                    gDPSetScissor(D_80110634++, G_SC_NON_INTERLACE, D_800E41C0[i].ulx, D_800E41C0[i].uly,
                                  D_800E41C0[i].lrx, D_800E41C0[i].lry);
                    if (D_800E42D0->panels[i].flash > 0) {
                        D_800D15E4[0] = 150.0f;
                        D_800D15E4[1] = 0.0f;
                        D_800D15E4[2] = 0.0f;
                        D_800D15E4[3] = 100.0f;
                        D_800D15E4[4] = 100.0f;
                        D_800D15E0 = 3;
                        D_800E42D0->panels[i].flash--;
                    } else {
                        D_800D15E0 = 0;
                        D_800D15E4[0] = 255.0f;
                        D_800D15E4[1] = 255.0f;
                        D_800D15E4[2] = 255.0f;
                        D_800D15E4[3] = 255.0f;
                    }
                    func_8041C864(D_800E42D0->panels[i].body);
                }
            }
        }
        D_800D15E0 = 0;
        gDPSetScissor(D_80110634++, G_SC_NON_INTERLACE, 0, 0, D_800E28D0 - 1, D_800E28D4 - 1);
        D_800D15E4[0] = 255.0f;
        D_800D15E4[1] = 255.0f;
        D_800D15E4[2] = 255.0f;
        D_800D15E4[3] = 255.0f;
    }
    return 0;
}
