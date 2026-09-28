#include "basetypes.h"

extern f32 D_800D2988;
extern f32 D_800C8EF0;
extern f32 D_800C8EF8;
extern f32 D_800C8EFC;

void func_8024F590(void *arg0) {
    f32 temp_f1;
    f32 threshold;
    f32 final_value;

    if (*(u16 *)((char *)arg0 + 0x19C) & 0x10) {
        temp_f1 = *(f32 *)((char *)arg0 + 0x1A0) +
                  D_800D2988 * D_800C8EF0;
        threshold = *(f32 *)((char *)&D_800C8EF0 + 4);
        *(f32 *)((char *)arg0 + 0x1A0) = temp_f1;
        if (temp_f1 < threshold) {
            *(f32 *)((char *)arg0 + 0x194) = temp_f1 * D_800C8EF8;
            return;
        }
        final_value = D_800C8EFC;
        *(u16 *)((char *)arg0 + 0x19C) &= 0xFFEF;
        *(f32 *)((char *)arg0 + 0x194) = final_value;
    }
}
