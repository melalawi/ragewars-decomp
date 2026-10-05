#include "span_1000/code_802192C0.h"
#include "span_1000/code_8026AC38.h"
#include "n64sdk.h"
#include "gbi.h"
#include "types.h"
#include "n64sdk.h"




extern void *D_800CB2EC[];
extern Gfx *D_8010C574;
extern s32 D_8011BA00;




extern void func_80291BE8_de(void *arg0, s32 arg1, s32 arg2, s32 arg3,
                          s32 arg4, s32 arg5);
extern void func_80249E28_de(void *arg0, void *arg1);








void func_8021CBD0_de(void *arg0, void *arg1) {
    void *entry;
    f32 *rect;
    f32 x;
    f32 y;
    f32 left;
    f32 right;
    f32 top;
    f32 bottom;

    if ((((func_8021CBAC_S1 *)(arg0))->unk62E != -1) &&
        (((func_8021CBAC_S1 *)(arg0))->unk5EA != 0)) {
        gDPSetTextureFilter(D_8010C574++, G_TF_BILERP);
        gDPSetTexturePersp(D_8010C574++, G_TP_PERSP);
        func_8026D8F8_de();

        entry = D_800CB2EC[((func_8021CBAC_S1 *)(arg0))->unk62E];
        rect = &((func_8021CBAC_S2 *)(arg1))->unk29C;
        x = rect[0];
        y = rect[1];
        left = ((func_8021CBAC_S3 *)(entry))->unk44 * x + rect[2];
        right = ((func_8021CBAC_S3 *)(entry))->unk4C * x + rect[2];
        top = ((func_8021CBAC_S3 *)(entry))->unk48 * y + rect[3];
        bottom = ((func_8021CBAC_S3 *)(entry))->unk50 * y + rect[3];
        func_80291BE8_de(&D_8011BA00, (s32)left, (s32)right, (s32)top,
                      (s32)bottom, ((func_8021CBAC_S2 *)(arg1))->unk120);

        gSPGeometryMode(D_8010C574++, 0, G_FOG);
        gSPMoveWord(D_8010C574++, G_MW_CLIP, 4, 1);
        gSPMoveWord(D_8010C574++, G_MW_CLIP, 12, 1);
        gSPMoveWord(D_8010C574++, G_MW_CLIP, 20, 0xFFFF);
        gSPMoveWord(D_8010C574++, G_MW_CLIP, 28, 0xFFFF);
        func_8026D980_de();
        func_80249E28_de(&((func_8021CBAC_S1 *)(arg0))->unk2E8, arg1);
        func_8026D9D0_de();
    }
}
