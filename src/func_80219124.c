#include "basetypes.h"

extern f32 D_800C73B4;
extern f32 D_800CE3C8;

/** Initialize the four records attached to an object. */
void func_80219124(volatile char *arg0) {
    s32 i;
    f32 scale = D_800C73B4;
    f32 value = *(f32 *)((char *)&D_800CE3C8 + 4);

    *(volatile s32 *)(arg0 + 0x6C) = -1;
    for (i = 0; i < 4; i++, arg0 += 0x14) {
        *(volatile s32 *)(arg0 + 0x1C) = i;
        *(volatile s32 *)(arg0 + 0x20) = 1;
        *(volatile s32 *)(arg0 + 0x28) = 0;
        *(volatile f32 *)(arg0 + 0x2C) = value;
        *(volatile f32 *)(arg0 + 0x24) = i * scale;
    }
}
