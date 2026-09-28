#include "basetypes.h"

extern f32 D_800C8660;

/** Zero the object's vector fields and reset the scale field to the default. */
void func_80239D80(void *arg0) {
    u8 *o = (u8 *)arg0;
    u8 *v0;
    u8 *v1;
    u8 *v2;
    f32 diag;

    diag = D_800C8660;
    v0 = o + 0x18;
    *(s32 *)(o + 8) = 0;
    *(s32 *)(o + 0xC) = 0;
    *(s32 *)(o + 0x10) = 0;
    *(f32 *)(o + 0x14) = diag;
    *(s32 *)(v0 + 4) = 0;
    *(s32 *)(v0 + 8) = 0;
    *(s32 *)(v0 + 0xC) = 0;
    *(s32 *)(v0 + 0x10) = 0;
    v1 = o + 0x2C;
    v2 = o + 0x40;
    *(s32 *)(v1 + 4) = 0;
    *(s32 *)(v1 + 8) = 0;
    *(s32 *)(v1 + 0xC) = 0;
    *(s32 *)(v1 + 0x10) = 0;
    *(s32 *)(v2 + 4) = 0;
    *(s32 *)(v2 + 8) = 0;
    *(s32 *)(v2 + 0xC) = 0;
    *(s32 *)(v2 + 0x10) = 0;
}
