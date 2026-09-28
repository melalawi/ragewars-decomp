#include "basetypes.h"

extern f32 D_800C733C;
extern f32 D_800CE388;

/** Reset the object and initialize its thirty-six descending-offset records. */
void func_8021836C(volatile char *arg0) {
    s32 i;
    s32 minus_one = -1;
    f32 scale = D_800C733C;
    f32 value = *(f32 *)((char *)&D_800CE388 + 4);

    *(volatile s32 *)(arg0 + 0x000) = 0;
    *(volatile s32 *)(arg0 + 0x004) = 0;
    *(volatile s32 *)(arg0 + 0x008) = 0;
    *(volatile s32 *)(arg0 + 0x00C) = 0;
    *(volatile s32 *)(arg0 + 0x014) = 0;
    *(volatile s32 *)(arg0 + 0x37C) = minus_one;
    *(volatile s32 *)(arg0 + 0x380) = 1;
    *(volatile s32 *)(arg0 + 0x388) = minus_one;
    *(volatile s32 *)(arg0 + 0x018) = 0;
    *(volatile s32 *)(arg0 + 0x38C) = 0;
    *(volatile s32 *)(arg0 + 0x390) = minus_one;

    for (i = 0; i < 0x24; i++, arg0 += 0x18) {
        f32 scaled = i * scale;
        *(volatile s32 *)(arg0 + 0x2C) = 0;
        *(volatile f32 *)(arg0 + 0x30) = value;
        *(volatile f32 *)(arg0 + 0x28) = -scaled;
    }
}
