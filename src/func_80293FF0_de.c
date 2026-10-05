#include "common/types_8fd754e1e915.h"
#include "span_1000/code_80293A04.h"
#include "n64sdk.h"
#include "gbi.h"
#include "types.h"
#include "n64sdk.h"


/* Emits a set-color-image display list command for the current frame buffer, then draws image 0x388
 * scaled to fill the screen dimensions over the image's returned width and height, when both are nonzero. */




extern void func_802A9234_de(s32);
extern void func_802AA950_de(s32 image, s32 frame, s32 *width, s32 *height);
extern void func_802AAC28_de(s32 image, s32 frame, s32 x, s32 y, f32 scaleX, f32 scaleY, s32 flags);
extern Gfx *D_8010C574;
extern Frame *D_8011BDC0;
extern s32 D_800DE880_de;
extern s32 D_800DE884_de;

void func_80293FF0_de(void) {
    s32 width;
    s32 height;
    Gfx *cmd;

    width = 0;
    height = 0;
    gDPSetColorImage(D_8010C574++, G_IM_FMT_RGBA, G_IM_SIZ_16b, D_800DE880_de, (u32)D_8011BDC0->colorImage);
    func_802AA950_de(0x388, 0, &width, &height);
    if ((width != 0) && (height != 0)) {
        func_802A9234_de(0xFA);
        func_802AAC28_de(0x388, 0, 0, 0, (f32)D_800DE880_de / (f32)width, (f32)D_800DE884_de / (f32)height, 1);
    }
}
