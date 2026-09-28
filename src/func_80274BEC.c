#include "basetypes.h"

/** Copy two 3-vectors, then derive an edge vector, its z-component twice, and a negated x. */
void func_80274BEC(void *arg0, void *arg1, void *arg2) {
    u8 *dst = (u8 *)arg0;
    u8 *a = (u8 *)arg1;
    u8 *b = (u8 *)arg2;
    s32 a0, a1, a2;
    s32 b0, b1, b2;
    f32 zdiff;

    a0 = *(s32 *)(a + 0);
    a1 = *(s32 *)(a + 4);
    a2 = *(s32 *)(a + 8);
    *(s32 *)(dst + 0) = a0;
    *(s32 *)(dst + 4) = a1;
    *(s32 *)(dst + 8) = a2;
    b0 = *(s32 *)(b + 0);
    b1 = *(s32 *)(b + 4);
    b2 = *(s32 *)(b + 8);
    *(s32 *)(dst + 0xC) = b0;
    *(s32 *)(dst + 0x10) = b1;
    *(s32 *)(dst + 0x14) = b2;
    *(f32 *)(dst + 0x18) = *(f32 *)(b + 0) - *(f32 *)(a + 0);
    *(f32 *)(dst + 0x1C) = *(f32 *)(b + 4) - *(f32 *)(a + 4);
    zdiff = *(f32 *)(b + 8) - *(f32 *)(a + 8);
    *(s32 *)(dst + 0x34) = 0;
    *(f32 *)(dst + 0x38) = -*(f32 *)(dst + 0x18);
    *(f32 *)(dst + 0x20) = zdiff;
    *(f32 *)(dst + 0x30) = zdiff;
}
