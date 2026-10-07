#include "abi.h"
#include "span_1000/code_80233920.h"
#include "gfx.h"
#include "gbi.h"

extern Gfx *D_8010C574;
extern void func_8026D8F8_de(void);

void func_802372D4_de(Racer *racer) {
    Entity_func_80233C88_de *entity = (Entity_func_80233C88_de *)racer;
    f32 x;
    f32 y;
    f32 width;
    f32 height;

    func_8026D8F8_de();
    x = entity->x;
    y = entity->y;
    width = entity->width;
    height = entity->height;
    gDPPipeSync(D_8010C574++);
    gDPSetCycleType(D_8010C574++, G_CYC_1CYCLE);
    gDPSetCombineLERP(D_8010C574++, 0, 0, 0, PRIMITIVE, 0, 0, 0, PRIMITIVE,
                     0, 0, 0, PRIMITIVE, 0, 0, 0, PRIMITIVE);
    gDPSetRenderMode(D_8010C574++, G_RM_XLU_SURF, G_RM_XLU_SURF2);
    gDPSetPrimColor(D_8010C574++, 0, 0, 0, 0, 0, 0);
    gDPFillRectangle(D_8010C574++, x, y, (x + width) - 1.0f, y + 2.0f);
    gDPFillRectangle(D_8010C574++, x, (y + height) - 2.0f,
                    (x + width) - 1.0f, (y + height) - 1.0f);
    gDPFillRectangle(D_8010C574++, x, y, x + 2.0f, (y + height) - 1.0f);
    gDPFillRectangle(D_8010C574++, (x + width) - 2.0f, y,
                    (x + width) - 1.0f, (y + height) - 1.0f);
    gDPPipeSync(D_8010C574++);
    gDPSetCycleType(D_8010C574++, G_CYC_FILL);
    gDPSetCombineLERP(D_8010C574++, 0, 0, 0, SHADE, 0, 0, 0, SHADE,
                     0, 0, 0, SHADE, 0, 0, 0, SHADE);
    gDPSetRenderMode(D_8010C574++, G_RM_NOOP, G_RM_NOOP2);
    gDPSetFillColor(D_8010C574++, (1 << 16) | 1);
    gDPFillRectangle(D_8010C574++, x, y, (x + width) - 1.0f, y);
    gDPFillRectangle(D_8010C574++, x, (y + height) - 1.0f,
                    (x + width) - 1.0f, (y + height) - 1.0f);
    gDPFillRectangle(D_8010C574++, x, y, x, (y + height) - 1.0f);
    gDPFillRectangle(D_8010C574++, (x + width) - 1.0f, y,
                    x + width, (y + height) - 1.0f);
}
