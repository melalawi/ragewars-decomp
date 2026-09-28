/** Scales the floats at 0x6C0 and 0x6C4 of the first object and the float at 0x20 of the second by D_800C7E90. */
#include "basetypes.h"

extern f32 D_800C7E90;

void func_8022D000(void *arg0, void *arg1) {
    *(f32 *)((char *)arg0 + 0x6C0) = *(f32 *)((char *)arg0 + 0x6C0) * (D_800C7E90);
    *(f32 *)((char *)arg0 + 0x6C4) = *(f32 *)((char *)arg0 + 0x6C4) * (D_800C7E90);
    *(f32 *)((char *)arg1 + 0x20) = *(f32 *)((char *)arg1 + 0x20) * (D_800C7E90);
}
