#include "unbake_gbi.h"
/* Emits a set-color-image display list command for the current frame buffer, then draws image 0x388
 * scaled to fill the screen dimensions over the image's returned width and height, when both are nonzero. */
#include "basetypes.h"

#include "basetypes.h"
#include "n64sdk.h"

typedef struct Frame {
    char pad0[0x110];
    void *colorImage;
} Frame;

extern void func_802AA224(s32);
extern void func_802AB940(s32 image, s32 frame, s32 *width, s32 *height);
extern void func_802ABC18(s32 image, s32 frame, s32 x, s32 y, f32 scaleX, f32 scaleY, s32 flags);
extern Gfx *D_80110634;
extern Frame *D_8011FE80;
extern s32 D_800E28D0;
extern s32 D_800E28D4;

void func_80293FE4(void) {
    s32 width;
    s32 height;
    Gfx *cmd;

    width = 0;
    height = 0;
    gDPSetColorImage(D_80110634++, G_IM_FMT_RGBA, G_IM_SIZ_16b, D_800E28D0, (u32)D_8011FE80->colorImage);
    func_802AB940(0x388, 0, &width, &height);
    if ((width != 0) && (height != 0)) {
        func_802AA224(0xFA);
        func_802ABC18(0x388, 0, 0, 0, (f32)D_800E28D0 / (f32)width, (f32)D_800E28D4 / (f32)height, 1);
    }
}
