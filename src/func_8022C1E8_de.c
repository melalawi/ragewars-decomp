#include "common/types.h"
#include "span_1000/code_8022B500.h"
#include "span_1000/types.h"
#include "span_C76B0/data.h"
#include "types.h"

extern u8 D_8014221E;

extern s32 D_800DE880_de;
extern s32 D_800DE884_de;

void func_802A9234_de(u8 arg0);
void func_802AAC28_de(s32 arg0, s32 arg1, s16 arg2, s16 arg3, f32 arg4, f32 arg5, s32 arg6);






void func_8022C1E8_de(char *arg0, char *arg1) {
    f32 x, y;
    f32 sx, sy;
    f32 bx, by;
    f32 t1, t2;
    f32 w;
    f32 screenX, screenY;

    func_802A9234_de(D_8014221E);

    x = ((func_80219490_S2 *)(arg1))->unk29C;
    sx = x / (f32) D_800DE880_de;
    bx = sx * D_800C2D2C_de;

    y = ((func_80219490_S2 *)(arg1))->unk2A0;
    sy = y / (f32) D_800DE884_de;
    by = sy * D_800C2D2C_de;

    t1 = ((func_80219490_S2 *)(arg1))->unk2A4 + x;
    t2 = ((func_80219490_S2 *)(arg1))->unk2A8 + y;
    w = ((func_8022C1D8_S2 *)(arg0))->unk7BC;

    screenX = t1 + bx;
    screenY = t2 + by;

    func_802AAC28_de(0x1FC, (s32) w, (s16) (s32) screenX, (s16) (s32) screenY, sx, sy, 1);
}
