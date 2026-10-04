#include "span_1000/code_802688AC.h"
#include "span_C76B0/data.h"
#include "n64sdk.h"
#include "gbi.h"
#include "types.h"
#include "n64sdk.h"




extern void *jtbl_800C4548_de[];

extern s32 D_800CC364;



extern Gfx *D_8010C574;

s32 func_8026925C_de(s32 arg0) {

    if (D_800CC364 == arg0) {
        return 0;
    }
    D_800CC364 = arg0;

    {
        static void *sw_mode_labels[0] __attribute__((section(".sdata"))) = {
            &&sw_mode_0, &&sw_mode_1, &&sw_mode_2, &&sw_mode_3, &&sw_mode_4, &&sw_mode_5, &&sw_mode_6, &&sw_mode_7, &&sw_mode_8, &&sw_mode_9, &&sw_mode_10, &&sw_mode_11, &&sw_mode_12, &&sw_mode_13, &&sw_mode_14, &&sw_mode_15, &&sw_mode_16, &&sw_mode_17, &&sw_mode_18, &&sw_mode_19, &&sw_mode_20, &&sw_mode_21, &&sw_mode_22, &&sw_mode_23, &&sw_mode_24, &&sw_mode_25, &&sw_mode_26, &&sw_mode_27, &&sw_mode_28, &&sw_mode_29, &&sw_mode_30, &&sw_mode_default
        };
        if ((u32)arg0 > 30) {
            goto sw_mode_default;
        }
        goto *jtbl_800C4548_de[arg0];
    }
    switch (arg0) {
    case 0: sw_mode_0: {
        if (D_800CC370) gDPSetRenderMode(D_8010C574++, 0x0C1849D8, 0) else gDPSetRenderMode(D_8010C574++, 0x0C184A50, 0);
        break;
    }
    case 1: sw_mode_1: {
        if (D_800CC370) gDPSetRenderMode(D_8010C574++, D_800CC38C, 0x001049D8) else gDPSetRenderMode(D_8010C574++, D_800CC38C, 0x00104A50);
        break;
    }
    case 2: sw_mode_2: {
        Gfx *gfx = D_8010C574++;
        gDPSetRenderMode(gfx, 0x0C184A50, 0);
        break;
    }
    case 3: sw_mode_3: {
        Gfx *gfx = D_8010C574++;
        gDPSetRenderMode(gfx, 0x0C184B50, 0);
        break;
    }
    case 4: sw_mode_4: {
        if (D_800CC370) gDPSetRenderMode(D_8010C574++, D_800CC38C, 0x00104DD8) else gDPSetRenderMode(D_8010C574++, D_800CC38C, 0x00104E50);
        break;
    }
    case 5: sw_mode_5: {
        if (D_800CC370) gDPSetRenderMode(D_8010C574++, D_800CC38C, 0x001041F8) else gDPSetRenderMode(D_8010C574++, D_800CC38C, 0x001041F0);
        break;
    }
    case 6: sw_mode_6: {
        if (D_800CC370) gDPSetRenderMode(D_8010C574++, D_800CC38C, 0x00113078) else gDPSetRenderMode(D_8010C574++, D_800CC38C, 0x00113078);
        break;
    }
    case 7: sw_mode_7: {
        Gfx *gfx = D_8010C574++;
        gDPSetRenderMode(gfx, D_800CC38C, 0x00112E10);
        break;
    }
    case 8: sw_mode_8: {
        if (D_800CC370) gDPSetRenderMode(D_8010C574++, D_800CC38C, 0x00112478) else gDPSetRenderMode(D_8010C574++, D_800CC38C, 0x00112478);
        break;
    }
    case 9: sw_mode_9: {
        Gfx *gfx = D_8010C574++;
        gDPSetRenderMode(gfx, D_800CC38C, 0x00112438);
        break;
    }
    case 10: sw_mode_10: {
        if (D_800CC370) gDPSetRenderMode(D_8010C574++, D_800CC38C, 0x00112078) else gDPSetRenderMode(D_8010C574++, D_800CC38C, 0x00112230);
        break;
    }
    case 11: sw_mode_11: {
        Gfx *gfx = D_8010C574++;
        gDPSetRenderMode(gfx, D_800CC38C, 0x00112038);
        break;
    }
    case 12: sw_mode_12: {
        if (D_800CC370) gDPSetRenderMode(D_8010C574++, 0x005045D8, 0) else gDPSetRenderMode(D_8010C574++, 0x004045D0, 0);
        break;
    }
    case 13: sw_mode_13: {
        Gfx *gfx = D_8010C574++;
        gDPSetRenderMode(gfx, 0x00504B50, 0);
        break;
    }
    case 14: sw_mode_14: {
        if (D_800CC370) gDPSetRenderMode(D_8010C574++, 0x005049D8, 0) else gDPSetRenderMode(D_8010C574++, 0x00504A50, 0);
        break;
    }
    case 15: sw_mode_15: {
        Gfx *gfx = D_8010C574++;
        gDPSetRenderMode(gfx, 0x00504E50, 0);
        break;
    }
    case 16: sw_mode_16: {
        Gfx *gfx = D_8010C574++;
        gDPSetRenderMode(gfx, 0x00504B53, 0);
        break;
    }
    case 17: sw_mode_17: {
        if (D_800CC370) gDPSetRenderMode(D_8010C574++, 0x00553078, 0) else gDPSetRenderMode(D_8010C574++, 0x00553078, 0);
        break;
    }
    case 18: sw_mode_18: {
        if (D_800CC370) gDPSetRenderMode(D_8010C574++, 0x00553048, 0) else gDPSetRenderMode(D_8010C574++, 0x0F0A7008, 0);
        break;
    }
    case 19: sw_mode_19: {
        Gfx *gfx = D_8010C574++;
        gDPSetRenderMode(gfx, 0x00504340, 0);
        break;
    }
    case 20: sw_mode_20: {
        Gfx *gfx = D_8010C574++;
        gDPSetRenderMode(gfx, 0, 0);
        break;
    }
    case 21: sw_mode_21: {
        Gfx *gfx = D_8010C574++;
        gDPSetRenderMode(gfx, 0x00504240, 0);
        break;
    }
    case 22: sw_mode_22: {
        Gfx *gfx = D_8010C574++;
        gDPSetRenderMode(gfx, 0x0FA54040, 0);
        break;
    }
    case 23: sw_mode_23: {
        Gfx *gfx = D_8010C574++;
        gDPSetRenderMode(gfx, D_800CC38C, 0x00104B50);
        break;
    }
    case 24: sw_mode_24: {
        Gfx *gfx = D_8010C574++;
        gDPSetRenderMode(gfx, D_800CC38C, 0x00104E50);
        break;
    }
    case 25: sw_mode_25: {
        Gfx *gfx = D_8010C574++;
        gDPSetRenderMode(gfx, 0x0C184240, 0);
        break;
    }
    case 26: sw_mode_26: {
        Gfx *gfx = D_8010C574++;
        gDPSetRenderMode(gfx, 0x0C184340, 0);
        break;
    }
    case 27: sw_mode_27: {
        Gfx *gfx = D_8010C574++;
        gDPSetRenderMode(gfx, 0x0F0A4000, 0);
        break;
    }
    case 28: sw_mode_28: {
        if (D_800CC370) gDPSetRenderMode(D_8010C574++, 0x00507048, 0) else gDPSetRenderMode(D_8010C574++, 0x00507040, 0);
        break;
    }
    case 29: sw_mode_29: {
        Gfx *gfx = D_8010C574++;
        gDPSetRenderMode(gfx, D_800CC38C, 0x00104F50);
        break;
    }
    case 30: sw_mode_30: {
        Gfx *gfx = D_8010C574++;
        gDPSetRenderMode(gfx, D_800CC388, 0x00104F50);
        break;
    }
    }
sw_mode_default:
    return 1;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned int unbake_rodata_800C4478_7C[] = {0x00269218U, 0x00269260U, 0x002692B8U, 0x002692D8U, 0x002692F8U, 0x00269350U, 0x002693A8U, 0x00269400U, 0x00269428U, 0x00269480U, 0x002694A8U, 0x00269500U, 0x00269528U, 0x00269570U, 0x00269590U, 0x002695D8U, 0x002695F8U, 0x00269618U, 0x00269660U, 0x002696A8U, 0x002696C8U, 0x002696F4U, 0x00269714U, 0x00269734U, 0x0026975CU, 0x00269784U, 0x002697A4U, 0x002697C4U, 0x002697E4U, 0x00269840U, 0x00269868U};
#elif defined(VERSION_US_REV1)
const unsigned int unbake_rodata_800C9638_7C[] = {0x00269298U, 0x002692E0U, 0x00269338U, 0x00269358U, 0x00269378U, 0x002693D0U, 0x00269428U, 0x00269480U, 0x002694A8U, 0x00269500U, 0x00269528U, 0x00269580U, 0x002695A8U, 0x002695F0U, 0x00269610U, 0x00269658U, 0x00269678U, 0x00269698U, 0x002696E0U, 0x00269728U, 0x00269748U, 0x00269774U, 0x00269794U, 0x002697B4U, 0x002697DCU, 0x00269804U, 0x00269824U, 0x00269844U, 0x00269864U, 0x002698C0U, 0x002698E8U};
#elif defined(VERSION_EU)
const unsigned int unbake_rodata_800C47F8_7C[] = {0x00269258U, 0x002692A0U, 0x002692F8U, 0x00269318U, 0x00269338U, 0x00269390U, 0x002693E8U, 0x00269440U, 0x00269468U, 0x002694C0U, 0x002694E8U, 0x00269540U, 0x00269568U, 0x002695B0U, 0x002695D0U, 0x00269618U, 0x00269638U, 0x00269658U, 0x002696A0U, 0x002696E8U, 0x00269708U, 0x00269734U, 0x00269754U, 0x00269774U, 0x0026979CU, 0x002697C4U, 0x002697E4U, 0x00269804U, 0x00269824U, 0x00269880U, 0x002698A8U};
#elif defined(VERSION_EU_X)
const unsigned int unbake_rodata_800C4838_7C[] = {0x00269288U, 0x002692D0U, 0x00269328U, 0x00269348U, 0x00269368U, 0x002693C0U, 0x00269418U, 0x00269470U, 0x00269498U, 0x002694F0U, 0x00269518U, 0x00269570U, 0x00269598U, 0x002695E0U, 0x00269600U, 0x00269648U, 0x00269668U, 0x00269688U, 0x002696D0U, 0x00269718U, 0x00269738U, 0x00269764U, 0x00269784U, 0x002697A4U, 0x002697CCU, 0x002697F4U, 0x00269814U, 0x00269834U, 0x00269854U, 0x002698B0U, 0x002698D8U};
#elif defined(VERSION_DE)
const unsigned int unbake_rodata_800C4548_7C[] = {0x00269298U, 0x002692E0U, 0x00269338U, 0x00269358U, 0x00269378U, 0x002693D0U, 0x00269428U, 0x00269480U, 0x002694A8U, 0x00269500U, 0x00269528U, 0x00269580U, 0x002695A8U, 0x002695F0U, 0x00269610U, 0x00269658U, 0x00269678U, 0x00269698U, 0x002696E0U, 0x00269728U, 0x00269748U, 0x00269774U, 0x00269794U, 0x002697B4U, 0x002697DCU, 0x00269804U, 0x00269824U, 0x00269844U, 0x00269864U, 0x002698C0U, 0x002698E8U};
#endif
