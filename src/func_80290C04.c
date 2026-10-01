#include "unbake_gbi.h"
#include "basetypes.h"

/* Clears the screen: clears the depth buffer over the whole screen through func_80291BF8, emits a full-screen scissor, the frame's colour image, fill cycle, combiner, no-op render mode, fill colour 0x10001 and a full-screen fill rectangle, then, when image 0x386 has a size, draws it stretched across the screen through func_802ABC18 after func_802AA224(255). Written with libultra-style display-list macros and the screen size read from D_800E28D0 and D_800E28D4. */

#include "basetypes.h"
#include "n64sdk.h"

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












void func_80290C04(s32 arg0) {
    Frame *frame = D_8011FE80;
    s32 width;
    s32 height;

    func_80291BF8(arg0, 0, SCREEN_WD, 0, SCREEN_HT, 0);
    width = 0;
    height = 0;
    gDPSetScissorFrac(D_80110634++, G_SC_NON_INTERLACE, (int)((float)((0)) * 4.0F), (int)((float)((0)) * 4.0F), (int)((float)((SCREEN_WD - 1)) * 4.0F), (int)((float)((SCREEN_HT - 1)) * 4.0F));
    gDPSetColorImage(D_80110634++, G_IM_FMT_RGBA, G_IM_SIZ_16b, SCREEN_WD, (u32)((frame->colorImage)));
    gDPSetCycleType(D_80110634++, G_CYC_FILL);
    gDPSetCombineLERP(D_80110634++, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE);
    gDPSetRenderMode(D_80110634++, ((0)), 0);
    gDPSetFillColor(D_80110634++, ((0x10001)));
    gDPFillRectangle(D_80110634++, 0, 0, (SCREEN_WD), (SCREEN_HT));
    func_802AB940(0x386, 0, &width, &height);
    if (width != 0 && height != 0) {
        func_802AA224(0xFF);
        func_802ABC18(0x386, 0, 0, 0, (f32)SCREEN_WD / (f32)width, (f32)SCREEN_HT / (f32)height, 1);
    }
}
