#include "span_1000/code_8029193C.h"
#include "span_1000/types.h"
#include "n64sdk.h"
#include "gbi.h"
#include "types.h"
#include "n64sdk.h"



/* Clears the depth buffer over a rectangle: switches the colour image to the depth buffer D_801536E8 in fill mode after setting render mode 0x14 through func_8026925C_de, fills the rectangle with the far depth value (or, for interlaced output, alternate lines with the far value and the remaining lines with 0, by single lines or by line pairs as D_800E28D8 selects), then restores the frame's colour image and one-cycle mode. Written with libultra-style display-list macros. */




extern Gfx *D_8010C574;
extern Frame *D_8011BDC0;
extern s32 D_800DE880_de;
extern s32 D_800DE888_de;
extern void *D_8014D458;
extern void func_8026925C_de(s32 mode);










void func_80291BE8_de(s32 unused, s32 ulx, s32 lrx, s32 uly, s32 lry, s32 interlaced) {
    s32 y;

    gDPPipeSync(D_8010C574++);
    func_8026925C_de(0x14);
    gDPSetColorImage(D_8010C574++, G_IM_FMT_RGBA, G_IM_SIZ_16b, D_800DE880_de, (u32)((D_8014D458)));
    gDPPipeSync(D_8010C574++);
    gDPSetCycleType(D_8010C574++, G_CYC_FILL);
    if (!interlaced) {
        gDPSetFillColor(D_8010C574++, ((0xFFFCFFFC)));
        gDPFillRectangle(D_8010C574++, (ulx), (uly), (lrx), (lry));
    } else if (D_800DE888_de == 0) {
        gDPSetFillColor(D_8010C574++, ((0xFFFCFFFC)));
        for (y = uly; y < lry; y += 2) {
            gDPFillRectangle(D_8010C574++, (ulx), (y), (lrx), (y));
        }
        gDPSetFillColor(D_8010C574++, ((0)));
        for (y = uly + 1; y < lry; y += 2) {
            gDPFillRectangle(D_8010C574++, (ulx), (y), (lrx), (y));
        }
    } else {
        gDPSetFillColor(D_8010C574++, ((0xFFFCFFFC)));
        for (y = uly; y < lry; y++) {
            if ((y & 3) < 2) {
                gDPFillRectangle(D_8010C574++, (ulx), (y), (lrx), (y));
            }
        }
        gDPSetFillColor(D_8010C574++, ((0)));
        for (y = uly; y < lry; y++) {
            if ((y & 3) >= 2) {
                gDPFillRectangle(D_8010C574++, (ulx), (y), (lrx), (y));
            }
        }
    }
    gDPSetColorImage(D_8010C574++, G_IM_FMT_RGBA, G_IM_SIZ_16b, D_800DE880_de, (u32)((D_8011BDC0->colorImage)));
    gDPPipeSync(D_8010C574++);
    gDPSetCycleType(D_8010C574++, G_CYC_2CYCLE);
}
