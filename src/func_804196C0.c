/* Copies image src into dst when they differ, then fixes dst's pixel rows through func_80419510 when a paletted image has more than 0x800 bytes of pixels or a true-color image more than 0x1000; returns zero. */
#include "basetypes.h"

typedef struct Image Image;

extern s32 func_80413500(Image *dst, Image *src);
extern s32 func_8041371C(Image *image);
extern s32 func_80413728(Image *image);
extern void func_80419510(Image *image);

s32 func_804196C0(Image *dst, Image *src) {
    s32 palette;
    s32 size;
    s32 fix;

    if (dst != src) {
        func_80413500(dst, src);
    }
    src = dst;
    palette = func_8041371C(src);
    size = func_80413728(src);
    fix = 0;
    if (palette > 0) {
        fix = size > 0x800;
    }
    if (palette == 0 && size > 0x1000) {
        fix = 1;
    }
    if (fix) {
        func_80419510(src);
    }
    return 0;
}
