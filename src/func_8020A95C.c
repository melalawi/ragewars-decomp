#include "basetypes.h"

extern f32 D_800C6E20;

extern f32 func_802745D4(f32 arg0);

void func_8020A95C(void *arg0, void *arg1) {
    f32 k = D_800C6E20;
    u8 *o = (u8 *) arg0;
    u8 *i = (u8 *) arg1;

    *(s32 *) (o + 0x2E4) = *(s32 *) (i + 0x0);
    *(s32 *) (o + 0x2E4) = (s32) ((f32) *(s32 *) (o + 0x2E4) + (func_802745D4(k) * (f32) *(s32 *) (i + 0x4)));
    *(s32 *) (o + 0x2E8) = *(s32 *) (i + 0x8);
    *(s32 *) (o + 0x2E8) = (s32) ((f32) *(s32 *) (o + 0x2E8) + (func_802745D4(k) * (f32) *(s32 *) (i + 0xC)));
    if (*(s32 *) (i + 0x18) == 0x64) {
        *(s32 *) (o + 0x240) = 1;
    }
}
