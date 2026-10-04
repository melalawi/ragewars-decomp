#include "span_1000/code_80219480.h"
#include "span_1000/code_8026D4F0.h"
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

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800C5040_C[] = {0x6C, 0x65, 0x76, 0x65, 0x6C, 0x20, 0x69, 0x6E, 0x64, 0x65, 0x78, 0x00};
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800CA200_C[] = {0x6C, 0x65, 0x76, 0x65, 0x6C, 0x20, 0x69, 0x6E, 0x64, 0x65, 0x78, 0x00};
#elif defined(VERSION_EU)
const float unbake_rodata_800C4E28_4 = 30.0f;
const float unbake_rodata_800C4E2C_4 = (-40.9599991f);
const float unbake_rodata_800C4E30_4 = 51.1999969f;
const float unbake_rodata_800C4E34_4 = 5.0f;
const float unbake_rodata_800C4E38_4 = 0.5f;
const float unbake_rodata_800C4E3C_4 = 10.0f;
const float unbake_rodata_800C4E40_4 = 90.0f;
const float unbake_rodata_800C4E44_4 = 0.100000001f;
const float unbake_rodata_800C4E48_4 = 5.0f;
const float unbake_rodata_800C4E4C_4 = 0.300000012f;
const float unbake_rodata_800C4E50_4 = 1.0f;
const float unbake_rodata_800C4E54_4 = 30.0f;
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800C4E0C_D[] = {0x4C, 0x69, 0x74, 0x20, 0x56, 0x65, 0x72, 0x74, 0x69, 0x63, 0x65, 0x73, 0x00};
#elif defined(VERSION_DE)
const float unbake_rodata_800C4E98_4 = 65536.0f;
#endif
