/* Rewrites an image's pixel rows in place when row fixing is enabled (D_800E32F0): the row length
   in 8-byte pixel groups comes from the image width and the bit depth reported by func_80413688
   (4, 8 or 16 bits), odd rows swap the two words of each group and even rows are copied to the
   write position through func_802A1724 when source and destination differ. */
#include "basetypes.h"

typedef struct {
    char pad0[8];
    s16 width;
    s16 height;
    char padC[0xC];
    s32 *pixels;
} Image;

extern s32 D_800E32F0;

extern s32 func_80413688(void);
extern void func_802A1724(s32 *dst, s32 *src, s32 size);

void func_80419510(Image *image) {
    s32 *src;
    s32 *dst;
    s32 groups;
    s32 row;
    s32 i;
    s32 first;
    s32 second;

    if (D_800E32F0 == 0 || image->width == 0 || image->height == 0) {
        return;
    }
    switch (func_80413688()) {
        case 4:
            groups = image->width / 16;
            break;
        case 8:
            groups = image->width / 8;
            break;
        case 16:
            groups = image->width / 4;
            break;
        default:
            groups = 0;
            break;
    }
    src = image->pixels;
    dst = src;
    for (row = 0; row < image->height; row++) {
        if (row & 1) {
            for (i = 0; i < groups; i++) {
                first = *src++;
                second = *src++;
                *dst++ = second;
                *dst++ = first;
            }
        } else {
            if (src != dst) {
                func_802A1724(dst, src, groups * 8);
            }
            dst += groups * 2;
            src += groups * 2;
        }
    }
}
