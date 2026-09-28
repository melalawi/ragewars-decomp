#include "basetypes.h"

/* Clears the depth buffer over a rectangle: switches the colour image to the depth buffer D_801536E8 in fill mode after setting render mode 0x14 through func_8026925C, fills the rectangle with the far depth value (or, for interlaced output, alternate lines with the far value and the remaining lines with 0, by single lines or by line pairs as D_800E28D8 selects), then restores the frame's colour image and one-cycle mode. Written with libultra-style display-list macros. */

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
extern s32 D_800E28D8;
extern void *D_801536E8;
extern void func_8026925C(s32 mode);

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

void func_80291BF8(s32 unused, s32 ulx, s32 lrx, s32 uly, s32 lry, s32 interlaced) {
    s32 y;

    gDPPipeSync(D_80110634++);
    func_8026925C(0x14);
    gDPSetColorImage(D_80110634++, 0, 16, D_800E28D0 - 1, D_801536E8);
    gDPPipeSync(D_80110634++);
    gDPWord(D_80110634++, 0xE3000A01, 0x300000);
    if (!interlaced) {
        gDPWord(D_80110634++, 0xF7000000, 0xFFFCFFFC);
        gDPFillRectangle(D_80110634++, ulx, uly, lrx, lry);
    } else if (D_800E28D8 == 0) {
        gDPWord(D_80110634++, 0xF7000000, 0xFFFCFFFC);
        for (y = uly; y < lry; y += 2) {
            gDPFillRectangle(D_80110634++, ulx, y, lrx, y);
        }
        gDPWord(D_80110634++, 0xF7000000, 0);
        for (y = uly + 1; y < lry; y += 2) {
            gDPFillRectangle(D_80110634++, ulx, y, lrx, y);
        }
    } else {
        gDPWord(D_80110634++, 0xF7000000, 0xFFFCFFFC);
        for (y = uly; y < lry; y++) {
            if ((y & 3) < 2) {
                gDPFillRectangle(D_80110634++, ulx, y, lrx, y);
            }
        }
        gDPWord(D_80110634++, 0xF7000000, 0);
        for (y = uly; y < lry; y++) {
            if ((y & 3) >= 2) {
                gDPFillRectangle(D_80110634++, ulx, y, lrx, y);
            }
        }
    }
    gDPSetColorImage(D_80110634++, 0, 16, D_800E28D0 - 1, D_8011FE80->colorImage);
    gDPPipeSync(D_80110634++);
    gDPWord(D_80110634++, 0xE3000A01, 0x100000);
}
