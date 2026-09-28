#include "basetypes.h"

extern f32 D_800C9110;
extern void func_802B5030(s32 arg0, s16 arg1);

void func_8025DC54(void *arg0, f32 arg1) {
    f32 f20 = arg1;
    f32 f0 = f20 * D_800C9110;
    func_802B5030(*(s32 *)((char *)arg0 + 0x14), (s16)(s32) f0);
    *(f32 *)((char *)arg0 + 0x2C) = f20;
}
