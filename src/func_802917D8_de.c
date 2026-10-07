#ifdef NON_MATCHING
#include "abi.h"
#include "types.h"
#include "gfx.h"
#include "span_1000/code_80233920.h"
#include "span_1000/code_8026AC38.h"
#include "span_1000/code_80291054.h"
#include "gbi.h"

extern Frame118 *D_8011BDC0;
extern Gfx *D_8010C574;
extern char D_800CBCC0;
extern char D_800CBCF0_de;
extern void *D_8014D458;
extern UnitVp D_80142C40[];
extern s32 D_800CD72C;
extern s32 D_800DE880_de;
extern s32 D_800DE884_de;

f32 func_802917D8_de(void) {
    UnitVp *viewport;
    s32 height;
    s32 width;
    f32 right;
    f32 bottom;

    D_8010C574 = D_8011BDC0->commands;
    gSPSegment(D_8010C574++, 0, 0);
    gSPDisplayList(D_8010C574++, &D_800CBCC0);
    gSPDisplayList(D_8010C574++, &D_800CBCF0_de);
    gDPSetDepthImage(D_8010C574++, D_8014D458);
    viewport = &D_80142C40[D_800CD72C];
    height = D_800DE884_de;
    viewport->vscale[1] = height * 2;
    viewport->vtrans[1] = height * 2;
    viewport->vscale[2] = 0x3FF;
    bottom = (f32)(height - 1) * (4.0f);
    viewport->vscale[3] = 0;
    viewport->vtrans[2] = 0;
    viewport->vtrans[3] = 0;
    width = D_800DE880_de;
    right = (f32)(width - 1) * (4.0f);
    viewport->vscale[0] = width * 2;
    viewport->vtrans[0] = width * 2;
    gSPMoveMem(D_8010C574++, G_MV_VIEWPORT, 0, 16, viewport);
    gDPSetScissorFrac(D_8010C574++, G_SC_NON_INTERLACE, 0, 0, (s32)right, (s32)bottom);
    return bottom;
}
#endif /* NON_MATCHING */
