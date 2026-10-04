#include "common/types.h"
#include "span_1000/code_80228934.h"
#include "span_1000/code_802A776C.h"
#include "span_C76B0/data.h"
#include "types.h"





extern HudGlobals D_8014221E;

extern s32 D_800DE880_de;
extern s32 D_800CD730;
extern s32 D_80140FF8;
extern s32 D_800DE888_de;







extern f32 D_800C2BF8_de[];
extern f32 D_800C2C00_de[];


extern f32 D_800C2C10_de[];
extern s32 D_800C2BD8_de;

extern s32 func_80245784_de(void);
extern s32 func_80245798_de(void);
extern void func_802A9234_de(s32);
extern void func_802A822C_de(s32, f32, f32, f32, f32, s32, s32, s32);

extern void func_802A8F28_de(void *, s32, s32, s32, s32, s32, f32, f32);

void func_80228AF4_de(void *arg0, ViewState *arg1) {
    f32 x;
    f32 y;
    f32 center_x;
    f32 center_y;
    f32 scale_x;
    f32 scale_y;
    f32 position;
    HudGlobals *hud;

    if (func_80245784_de() != 0) {
        return;
    }
    if (func_80245798_de() != 0) {
        return;
    }
    hud = &D_8014221E;
    func_802A9234_de(hud->fade);
    if (((HudState *)&hud->state)->timer <= 0.0f) {
        return;
    }

    position = ((HudState *)&hud->state)->timer * D_800C2BDC_de;
    x = (f32)(s32)(position * D_800C2BE0_de);
    scale_x = arg1->width / (f32)D_800DE880_de;
    position -= x * ((D_800C7470_Pair *)&D_800C2BE0_de)->second;
    scale_y = arg1->height / (f32)((struct Shape_func_802764D4_de_2 *)&D_800DE880_de)->field_4;
    if ((x < D_800C2BE8_de) && (position < D_800C2BEC_de) &&
        ((D_800CD730 % 15U) < 5U)) {
        return;
    }

    if (D_80140FF8 == 1) {
        if (D_800DE888_de == 0) {
            center_x = (f32)D_800DE880_de * D_800C2BF0_de;
            scale_x *= D_800C2BF4_de;
            center_y = D_800C2BF8_de[0];
            scale_y *= D_800C2BF4_de;
        } else {
            center_y = D_800C2C00_de[0];
            center_x = (f32)D_800DE880_de * D_800C2BF8_de[1];
        }
    } else {
        center_x = (f32)D_800DE880_de * D_800C2C00_de[1];
        center_y = (f32)(((struct Shape_func_802764D4_de_2 *)&D_800DE880_de)->field_4 - 10) * D_800C2C00_de[1];
    }

    func_802A822C_de((s32)x, center_x - (scale_x * D_800C2C08_de),
                   center_y, scale_x, scale_y, 1, 1, 0);
    func_802A822C_de((s32)position, center_x + (2.0f * scale_x),
                   center_y, scale_x, scale_y, 1, 0, 2);
    func_802A84F8_de();
    func_802A8F28_de(&D_800C2BD8_de,
                  (s32)(center_x - (scale_x * ((D_800C7470_Pair *)&D_800C2C08_de)->second)),
                  (s32)(center_y - (scale_y * D_800C2C10_de[0])),
                  0xFF, 0, 0, scale_x, scale_y);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2B0C_4 = 0.0666666701f;
const float unbake_rodata_800C2B10_4 = 0.0166666675f;
const float unbake_rodata_800C2B14_4 = 60.0f;
const float unbake_rodata_800C2B18_4 = 1.0f;
const float unbake_rodata_800C2B1C_4 = 30.0f;
const float unbake_rodata_800C2B20_4 = 0.5f;
const float unbake_rodata_800C2B24_4 = 0.800000012f;
const float unbake_rodata_800C2B28_4 = 10.0f;
const float unbake_rodata_800C2B2C_4 = 0.5f;
const float unbake_rodata_800C2B30_4 = 20.0f;
const float unbake_rodata_800C2B34_4 = 0.5f;
const float unbake_rodata_800C2B38_4 = 7.0f;
const float unbake_rodata_800C2B3C_4 = 6.0f;
const float unbake_rodata_800C2B40_4 = 12.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C7CCC_4 = 0.0666666701f;
const float unbake_rodata_800C7CD0_4 = 0.0166666675f;
const float unbake_rodata_800C7CD4_4 = 60.0f;
const float unbake_rodata_800C7CD8_4 = 1.0f;
const float unbake_rodata_800C7CDC_4 = 30.0f;
const float unbake_rodata_800C7CE0_4 = 0.5f;
const float unbake_rodata_800C7CE4_4 = 0.800000012f;
const float unbake_rodata_800C7CE8_4 = 10.0f;
const float unbake_rodata_800C7CEC_4 = 0.5f;
const float unbake_rodata_800C7CF0_4 = 20.0f;
const float unbake_rodata_800C7CF4_4 = 0.5f;
const float unbake_rodata_800C7CF8_4 = 7.0f;
const float unbake_rodata_800C7CFC_4 = 6.0f;
const float unbake_rodata_800C7D00_4 = 12.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C2E7C_4 = 0.0666666701f;
const float unbake_rodata_800C2E80_4 = 0.0166666675f;
const float unbake_rodata_800C2E84_4 = 60.0f;
const float unbake_rodata_800C2E88_4 = 1.0f;
const float unbake_rodata_800C2E8C_4 = 30.0f;
const float unbake_rodata_800C2E90_4 = 0.5f;
const float unbake_rodata_800C2E94_4 = 0.800000012f;
const float unbake_rodata_800C2E98_4 = 10.0f;
const float unbake_rodata_800C2E9C_4 = 0.5f;
const float unbake_rodata_800C2EA0_4 = 20.0f;
const float unbake_rodata_800C2EA4_4 = 0.5f;
const float unbake_rodata_800C2EA8_4 = 7.0f;
const float unbake_rodata_800C2EAC_4 = 6.0f;
const float unbake_rodata_800C2EB0_4 = 12.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C2EBC_4 = 0.0666666701f;
const float unbake_rodata_800C2EC0_4 = 0.0166666675f;
const float unbake_rodata_800C2EC4_4 = 60.0f;
const float unbake_rodata_800C2EC8_4 = 1.0f;
const float unbake_rodata_800C2ECC_4 = 30.0f;
const float unbake_rodata_800C2ED0_4 = 0.5f;
const float unbake_rodata_800C2ED4_4 = 0.800000012f;
const float unbake_rodata_800C2ED8_4 = 10.0f;
const float unbake_rodata_800C2EDC_4 = 0.5f;
const float unbake_rodata_800C2EE0_4 = 20.0f;
const float unbake_rodata_800C2EE4_4 = 0.5f;
const float unbake_rodata_800C2EE8_4 = 7.0f;
const float unbake_rodata_800C2EEC_4 = 6.0f;
const float unbake_rodata_800C2EF0_4 = 12.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C2BDC_4 = 0.0666666701f;
const float unbake_rodata_800C2BE0_4 = 0.0166666675f;
const float unbake_rodata_800C2BE4_4 = 60.0f;
const float unbake_rodata_800C2BE8_4 = 1.0f;
const float unbake_rodata_800C2BEC_4 = 30.0f;
const float unbake_rodata_800C2BF0_4 = 0.5f;
const float unbake_rodata_800C2BF4_4 = 0.800000012f;
const float unbake_rodata_800C2BF8_4 = 10.0f;
const float unbake_rodata_800C2BFC_4 = 0.5f;
const float unbake_rodata_800C2C00_4 = 20.0f;
const float unbake_rodata_800C2C04_4 = 0.5f;
const float unbake_rodata_800C2C08_4 = 7.0f;
const float unbake_rodata_800C2C0C_4 = 6.0f;
const float unbake_rodata_800C2C10_4 = 12.0f;
#endif
