#include "types.h"
#include "gfx.h"
#include "gbi.h"
#include "span_C76B0/data.h"

/* Draw the inset viewport border with black bands and a one-pixel outline. */
void func_8026D8F8_de(void);
extern Gfx *D_80110634;
extern s32 D_800E28D0;
extern s32 D_800E28D4;
extern const f32 D_800E0BA4;
extern const f32 D_800E0B90;
extern const f32 D_800E0BAC;
extern const f32 D_800E0BD4;
extern const f32 D_800E0BCC;
extern const f32 D_800E0BFC;
extern const f32 D_800E0C14;

void func_80401D74_de(s32 inset) {
    f32 left;
    f32 top;
    f32 width;
    f32 height;
    func_8026D8F8_de();
    left = 0.0f;
    top = (f32)inset;
    gDPPipeSync(D_80110634++);
    gDPSetCycleType(D_80110634++, G_CYC_1CYCLE);
    gDPSetCombineLERP(D_80110634++, 0, 0, 0, PRIMITIVE, 0, 0, 0, PRIMITIVE, 0, 0, 0, PRIMITIVE, 0, 0, 0, PRIMITIVE);
    gDPSetRenderMode(D_80110634++, G_RM_XLU_SURF, G_RM_XLU_SURF2);
    width = (f32)D_800E28D0;
    gDPSetPrimColor(D_80110634++, 0, 0, 0, 0, 0, 0);
    height = (f32)(D_800E28D4 - inset * 2);
    gDPFillRectangle(D_80110634++, left, top, (width - 1.0f), (top + D_800DCB50));
    gDPFillRectangle(D_80110634++, left, ((top + height) - D_800E0BA4), ((left + width) - D_800E0B90), ((top + height) - D_800DCB68));
    gDPFillRectangle(D_80110634++, left, top, (left + D_800E0BAC), ((top + height) - 1.0f));
    gDPFillRectangle(D_80110634++, ((left + width) - D_800E0BD4), top, ((left + width) - D_800DCB94), ((top + height) - D_800E0BCC));
    gDPPipeSync(D_80110634++);
    gDPSetCycleType(D_80110634++, G_CYC_FILL);
    gDPSetCombineLERP(D_80110634++, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE);
    gDPSetRenderMode(D_80110634++, 0, 0);
    gDPSetFillColor(D_80110634++, 0x10001);
    gDPFillRectangle(D_80110634++, left, top, ((left + width) - 1.0f), top);
    gDPFillRectangle(D_80110634++, left, ((top + height) - D_800DCBD8_de), ((left + width) - D_800DCBC4_de), ((top + height) - D_800E0BFC));
    gDPFillRectangle(D_80110634++, left, top, left, ((top + height) - D_800E0C14));
    gDPFillRectangle(D_80110634++, ((left + width) - D_800DCC00_de), top, (left + width), ((top + height) - D_800DCBF8_de));
}
