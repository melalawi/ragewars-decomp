#include "span_1000/code_802AB3FC.h"
#include "types.h"



extern f32 func_80274564_de(f32 arg0);
extern void func_802391AC_de(void *, s32, s32, s32, s32, s32, s32, s32);






s32 func_802AD1B4_de(void *arg0) {
    f32 value;
    f32 input;
    f32 threshold;
    u32 converted;

    ((func_802AE1A4_S1 *)(arg0))->unk16D4 =
        ((func_802AE1A4_S1 *)(arg0))->unk16D4 == 0;
    if (((func_802AE1A4_S1 *)(arg0))->unk5DC != 0) {
        input = D_800C62E0;
        ((func_802AE1A4_S2 *)(((func_802AE1A4_S1 *)(arg0))->unk5DC))->unk124 = 0;
        value = func_80274564_de(input);
        threshold = (&D_800C62E0)[1];
        if (!(threshold <= value)) {
            converted = (s32)value;
        } else {
            converted = (s32)(value - threshold) | 0x80000000;
        }
        func_802391AC_de(((func_802AE1A4_S1 *)(arg0))->unk5DC, 0xFF, 0xFF, 0xFF,
                      0xFF, (u8)converted, 1, 0);
    }
    return 1;
}
