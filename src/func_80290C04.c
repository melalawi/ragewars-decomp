#include "basetypes.h"

/* Clears the screen: clears the depth buffer over the whole screen through func_80291BF8, emits a full-screen scissor, the frame's colour image, fill cycle, combiner, no-op render mode, fill colour 0x10001 and a full-screen fill rectangle, then, when image 0x386 has a size, draws it stretched across the screen through func_802ABC18 after func_802AA224(255). Written with libultra-style display-list macros and the screen size read from D_800E28D0 and D_800E28D4. */

typedef struct Gfx {
    struct {
        u32 w0;
        u32 w1;
    } words;
} Gfx;

typedef struct Frame {
    char pad0[0x110];
    void *colorImage;
} Frame;

extern Gfx *D_80110634;
extern Frame *D_8011FE80;
extern s32 D_800E28D0;
extern s32 D_800E28D4;
extern void func_80291BF8(s32 arg0, s32 ulx, s32 lrx, s32 uly, s32 lry, s32 interlaced);
extern void func_802AB940(s32 image, s32 frame, s32 *width, s32 *height);
extern void func_802AA224(s32 alpha);
extern void func_802ABC18(s32 image, s32 frame, s32 x, s32 y, f32 scaleX, f32 scaleY, s32 flags);

#define SCREEN_WD D_800E28D0
#define SCREEN_HT D_800E28D4

#define _SHIFTL(v, s, w) ((u32)(((u32)(v) & ((0x01 << (w)) - 1)) << (s)))

#define gDPWord(pkt, a, b)                                                                     \
    {                                                                                          \
        Gfx *_g = (Gfx *)(pkt);                                                                \
        _g->words.w0 = (a);                                                                    \
        _g->words.w1 = (b);                                                                    \
    }

#define gDPPipeSync(pkt) gDPWord(pkt, 0xE7000000, 0)

#define gDPSetColorImage(pkt, f, s, w, i)                                                     \
    {                                                                                          \
        Gfx *_g = (Gfx *)(pkt);                                                                \
        _g->words.w0 = _SHIFTL(0xFF, 24, 8) | _SHIFTL(f, 21, 3) | _SHIFTL(s, 16, 5) | _SHIFTL(w, 0, 12); \
        _g->words.w1 = (u32)(i);                                                               \
    }

#define gDPFillRectangle(pkt, ulx, uly, lrx, lry)                                              \
    {                                                                                          \
        Gfx *_g = (Gfx *)(pkt);                                                                \
        _g->words.w0 = _SHIFTL(0xF6, 24, 8) | _SHIFTL(lrx, 14, 10) | _SHIFTL(lry, 2, 10);      \
        _g->words.w1 = _SHIFTL(ulx, 14, 10) | _SHIFTL(uly, 2, 10);                             \
    }

#define gDPSetScissor(pkt, mode, ulx, uly, lrx, lry)                                           \
    {                                                                                          \
        Gfx *_g = (Gfx *)(pkt);                                                                \
        _g->words.w0 = _SHIFTL(0xED, 24, 8) | _SHIFTL((int)((float)(ulx) * 4.0F), 12, 12) |    \
                       _SHIFTL((int)((float)(uly) * 4.0F), 0, 12);                             \
        _g->words.w1 = _SHIFTL((int)(mode), 24, 2) | _SHIFTL((int)((float)(lrx) * 4.0F), 12, 12) | \
                       _SHIFTL((int)((float)(lry) * 4.0F), 0, 12);                             \
    }

void func_80290C04(s32 arg0) {
    Frame *frame = D_8011FE80;
    s32 width;
    s32 height;

    func_80291BF8(arg0, 0, SCREEN_WD, 0, SCREEN_HT, 0);
    width = 0;
    height = 0;
    gDPSetScissor(D_80110634++, 0, 0, 0, SCREEN_WD - 1, SCREEN_HT - 1);
    gDPSetColorImage(D_80110634++, 0, 16, SCREEN_WD - 1, frame->colorImage);
    gDPWord(D_80110634++, 0xE3000A01, 0x300000);
    gDPWord(D_80110634++, 0xFCFFFFFF, 0xFFFE793C);
    gDPWord(D_80110634++, 0xE200001C, 0);
    gDPWord(D_80110634++, 0xF7000000, 0x10001);
    gDPFillRectangle(D_80110634++, 0, 0, SCREEN_WD, SCREEN_HT);
    func_802AB940(0x386, 0, &width, &height);
    if (width != 0 && height != 0) {
        func_802AA224(0xFF);
        func_802ABC18(0x386, 0, 0, 0, (f32)SCREEN_WD / (f32)width, (f32)SCREEN_HT / (f32)height, 1);
    }
}
