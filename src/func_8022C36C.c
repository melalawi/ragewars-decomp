#include "basetypes.h"

extern u8 D_801462DE;
extern f32 D_800C7E28;
extern f32 D_800C7E2C;
extern s32 D_800E28D0;
extern s32 D_800E28D4;

void func_802AA224(u8 arg0);
void func_802ABC18(s32 arg0, s32 arg1, s16 arg2, s16 arg3, f32 arg4, f32 arg5, s32 arg6);

void func_8022C36C(char *arg0, char *arg1) {
    f32 x, y;
    f32 sx, sy;
    f32 bx, by, cz;
    f32 t1, t2;
    f32 w;
    f32 screenX, screenY;

    func_802AA224(D_801462DE);

    x = *(f32 *)(arg1 + 0x29C);
    sx = x / (f32) D_800E28D0;
    bx = sx * D_800C7E28;

    y = *(f32 *)(arg1 + 0x2A0);
    sy = y / (f32) D_800E28D4;
    by = sy * D_800C7E28;

    cz = sy * D_800C7E2C;

    t1 = *(f32 *)(arg1 + 0x2A4) + x;
    t2 = *(f32 *)(arg1 + 0x2A8) + y;
    w = *(f32 *)(arg0 + 0x7BC);

    screenX = t1 + bx;
    screenY = t2 + by;

    func_802ABC18(0x201, (s32) w, (s16) (s32) screenX, (s16) (s32) screenY, sx, cz, 1);
}
