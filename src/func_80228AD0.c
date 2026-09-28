#include "basetypes.h"

typedef struct {
    u8 bytes[0x29C];
    f32 width;
    f32 height;
} ViewState;

extern u8 D_801462DE;
extern s32 D_800E28D0;
extern s32 D_800D2980;
extern s32 D_801450B8;
extern s32 D_800E28D8;
extern f32 D_800C7CCC;
extern f32 D_800C7CD0;
extern f32 D_800C7CD8;
extern f32 D_800C7CDC;
extern f32 D_800C7CE0;
extern f32 D_800C7CE4;
extern f32 D_800C7CE8[];
extern f32 D_800C7CF0[];
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
    u8 *hud;

    if (func_80245774() != 0) {
        return;
    }
    if (func_80245788() != 0) {
        return;
    }
    hud = &D_801462DE;
    func_802AA224(*hud);
    if (*(f32 *)(hud + 0x5D6) <= 0.0f) {
        return;
    }

    position = *(f32 *)(hud + 0x5D6) * D_800C7CCC;
    x = (f32)(s32)(position * D_800C7CD0);
    scale_x = arg1->width / (f32)D_800E28D0;
    position -= x * *(&D_800C7CD0 + 1);
    scale_y = arg1->height / (f32)*(&D_800E28D0 + 1);
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
        center_y = (f32)(*(&D_800E28D0 + 1) - 10) * D_800C7CF0[1];
    }

    func_802A921C((s32)x, center_x - (scale_x * D_800C7CF8),
                   center_y, scale_x, scale_y, 1, 1, 0);
    func_802A921C((s32)position, center_x + (2.0f * scale_x),
                   center_y, scale_x, scale_y, 1, 0, 2);
    func_802A94E8();
    func_802A9F18(&D_800C7CC8,
                  (s32)(center_x - (scale_x * *(&D_800C7CF8 + 1))),
                  (s32)(center_y - (scale_y * D_800C7D00[0])),
                  0xFF, 0, 0, scale_x, scale_y);
}
