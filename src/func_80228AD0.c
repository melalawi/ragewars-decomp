#include "basetypes.h"

typedef struct {
    u8 bytes[0x29C];
    f32 width;
    f32 height;
} ViewState;

typedef struct { u8 fade; u8 reserved; u8 state; } HudGlobals;
typedef struct { u8 reserved[0x5D4]; f32 timer; } HudState;
extern HudGlobals D_801462DE;
typedef struct { s32 width; s32 height; } ScreenSize;
extern s32 D_800E28D0;
extern s32 D_800D2980;
extern s32 D_801450B8;
extern s32 D_800E28D8;
extern f32 D_800C7CCC;
typedef struct { f32 scale; f32 remainder; } PositionScale;
extern f32 D_800C7CD0;
extern f32 D_800C7CD8;
extern f32 D_800C7CDC;
extern f32 D_800C7CE0;
extern f32 D_800C7CE4;
extern f32 D_800C7CE8[];
extern f32 D_800C7CF0[];
typedef struct { f32 offset; f32 labelOffset; } HudOffsets;
extern f32 D_800C7CF8;
extern f32 D_800C7D00[];
extern s32 D_800C7CC8;

extern s32 func_80245774(void);
extern s32 func_80245788(void);
extern void func_802AA224(s32);
extern void func_802A921C(s32, f32, f32, f32, f32, s32, s32, s32);
extern void func_802A94E8(void);
extern void func_802A9F18(void *, s32, s32, s32, s32, s32, f32, f32);

void func_80228AD0(void *arg0, ViewState *arg1) {
    f32 x;
    f32 y;
    f32 center_x;
    f32 center_y;
    f32 scale_x;
    f32 scale_y;
    f32 position;
    HudGlobals *hud;

    if (func_80245774() != 0) {
        return;
    }
    if (func_80245788() != 0) {
        return;
    }
    hud = &D_801462DE;
    func_802AA224(hud->fade);
    if (((HudState *)&hud->state)->timer <= 0.0f) {
        return;
    }

    position = ((HudState *)&hud->state)->timer * D_800C7CCC;
    x = (f32)(s32)(position * D_800C7CD0);
    scale_x = arg1->width / (f32)D_800E28D0;
    position -= x * ((PositionScale *)&D_800C7CD0)->remainder;
    scale_y = arg1->height / (f32)((ScreenSize *)&D_800E28D0)->height;
    if ((x < D_800C7CD8) && (position < D_800C7CDC) &&
        ((D_800D2980 % 15U) < 5U)) {
        return;
    }

    if (D_801450B8 == 1) {
        if (D_800E28D8 == 0) {
            center_x = (f32)D_800E28D0 * D_800C7CE0;
            scale_x *= D_800C7CE4;
            center_y = D_800C7CE8[0];
            scale_y *= D_800C7CE4;
        } else {
            center_y = D_800C7CF0[0];
            center_x = (f32)D_800E28D0 * D_800C7CE8[1];
        }
    } else {
        center_x = (f32)D_800E28D0 * D_800C7CF0[1];
        center_y = (f32)(((ScreenSize *)&D_800E28D0)->height - 10) * D_800C7CF0[1];
    }

    func_802A921C((s32)x, center_x - (scale_x * D_800C7CF8),
                   center_y, scale_x, scale_y, 1, 1, 0);
    func_802A921C((s32)position, center_x + (2.0f * scale_x),
                   center_y, scale_x, scale_y, 1, 0, 2);
    func_802A94E8();
    func_802A9F18(&D_800C7CC8,
                  (s32)(center_x - (scale_x * ((HudOffsets *)&D_800C7CF8)->labelOffset)),
                  (s32)(center_y - (scale_y * D_800C7D00[0])),
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
