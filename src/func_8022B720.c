/** Adds the argument scaled by D_800C7E08 to the object's float at 0x11DC and sets bit 0x2000 in its word at 0x122C. */
#include "basetypes.h"

extern f32 D_800C7E08;

void func_8022B720(void *arg0, f32 arg1) {
    *(f32 *)((char *)arg0 + 0x11DC) = *(f32 *)((char *)arg0 + 0x11DC) + arg1 * D_800C7E08;
    *(s32 *)((char *)arg0 + 0x122C) = *(s32 *)((char *)arg0 + 0x122C) | 0x2000;
}
