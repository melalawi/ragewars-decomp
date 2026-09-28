#include "basetypes.h"

extern f32 D_800CB470;
extern f32 func_802745D4(f32 arg0);
extern void func_8023919C(void *, s32, s32, s32, s32, s32, s32, s32);

s32 func_802AE1A4(void *arg0) {
    f32 value;
    f32 input;
    f32 threshold;
    u32 converted;

    *(s32 *)((char *)arg0 + 0x16D4) =
        *(s32 *)((char *)arg0 + 0x16D4) == 0;
    if (*(void **)((char *)arg0 + 0x5DC) != 0) {
        input = D_800CB470;
        *(s16 *)((char *)*(void **)((char *)arg0 + 0x5DC) + 0x124) = 0;
        value = func_802745D4(input);
        threshold = *(&D_800CB470 + 1);
        if (!(threshold <= value)) {
            converted = (s32)value;
        } else {
            converted = (s32)(value - threshold) | 0x80000000;
        }
        func_8023919C(*(void **)((char *)arg0 + 0x5DC), 0xFF, 0xFF, 0xFF,
                      0xFF, (u8)converted, 1, 0);
    }
    return 1;
}
