#include "basetypes.h"

extern f32 D_800C7398;
extern f32 D_800CE3C8;

/** Reset the object and initialize its four descending-offset records. */
void func_80218E98(volatile char *arg0) {
    s32 i;
    s32 minus_one = -1;
    f32 scale = *(f32 *)((char *)&D_800C7398 + 4);
    f32 value = *(f32 *)((char *)&D_800CE3C8 + 4);

    *(volatile s32 *)(arg0 + 0x00) = 0;
    *(volatile s32 *)(arg0 + 0x04) = 0;
    *(volatile s32 *)(arg0 + 0x08) = 0;
    *(volatile s32 *)(arg0 + 0x0C) = 0;
    *(volatile s32 *)(arg0 + 0x14) = 0;
    *(volatile s32 *)(arg0 + 0x6C) = minus_one;
    *(volatile s32 *)(arg0 + 0x18) = 4;
    *(volatile s32 *)(arg0 + 0x70) = minus_one;

    for (i = 0; i < 4; i++, arg0 += 0x14) {
        f32 scaled = i * scale;
        *(volatile s32 *)(arg0 + 0x28) = 0;
        *(volatile f32 *)(arg0 + 0x2C) = value;
        *(volatile f32 *)(arg0 + 0x24) = -scaled;
    }
}
