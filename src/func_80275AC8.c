#include "basetypes.h"

extern f32 D_800C9ADC;

void func_80275AC8(void *arg0) {
    s32 *ip = (s32 *)arg0;
    f32 *fp = (f32 *)arg0;
    f32 scale = D_800C9ADC;
    fp[0] = (f32)ip[0] * scale;
    fp[1] = (f32)ip[1] * scale;
    fp[2] = (f32)ip[2] * scale;
    fp[3] = (f32)ip[3] * scale;
}
