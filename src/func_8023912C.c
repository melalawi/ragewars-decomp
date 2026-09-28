#include "basetypes.h"

extern f32 D_800C861C;
extern f32 D_800C8620;
extern f32 D_800C8628;

void func_8023912C(void *arg0) {
    if (arg0 != 0) {
        f32 f0 = D_800C861C;
        f32 f1 = D_800C8620;
        f32 f2 = *(f32 *)((char *)&D_800C8620 + 4);
        f32 f3 = D_800C8628;

        *(s32 *)((char *)arg0 + 0x90) = 0;
        *(s32 *)((char *)arg0 + 0x94) = 0;
        *(f32 *)((char *)arg0 + 0x88) = f0;
        *(f32 *)((char *)arg0 + 0x8C) = f1;
        *(f32 *)((char *)arg0 + 0x98) = f2;
        *(f32 *)((char *)arg0 + 0x9C) = f3;
    }
}

void func_80239174(void) {
}

void func_8023917C(void) {
}
