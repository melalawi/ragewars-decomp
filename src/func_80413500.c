/* Copies image src into dst: releases dst's owned pixel data (flag 1) and palette (flag 2, when it
   has entries), clears it and copies src's header, drops a palette pointer without entries, marks
   the copies owned, then allocates and copies the pixel data (size from func_80413728) and, when
   src has a palette, the palette (size from func_8041371C). Returns 1 when an allocation fails,
   leaving dst cleared, otherwise 0. */
#include "basetypes.h"

typedef struct {
    u8 unk0;
    u8 flags;
    char pad2[0xE];
    s32 paletteCount;
    void *palette;
    void *pixels;
    s32 unk1C;
} Image;

extern void func_80254784(void *p);
extern void func_802A1748(void *p, s32 c, s32 n);
extern s32 func_80413728(Image *image);
extern s32 func_8041371C(Image *image);
extern void *func_80252FFC(s32 size);
extern void func_802A1724(void *dst, void *src, s32 n);

s32 func_80413500(Image *dst, Image *src) {
    s32 size;

    if (dst->flags & 1) {
        func_80254784(dst->pixels);
    }
    if ((dst->flags & 2) && dst->paletteCount > 0) {
        func_80254784(dst->palette);
    }
    func_802A1748(dst, 0, 0x20);
    *dst = *src;
    if (dst->paletteCount == 0) {
        dst->palette = 0;
    }
    dst->flags = 1;
    if (dst->palette != 0) {
        dst->flags = 3;
    }
    size = func_80413728(src);
    if ((dst->pixels = func_80252FFC(size)) == 0) {
        return 1;
    }
    func_802A1724(dst->pixels, src->pixels, size);
    if (src->paletteCount != 0) {
        size = func_8041371C(src);
        if ((dst->palette = func_80252FFC(size)) == 0) {
            func_80254784(dst->pixels);
            func_802A1748(dst, 0, 0x20);
            return 1;
        }
        func_802A1724(dst->palette, src->palette, size);
    }
    return 0;
}
