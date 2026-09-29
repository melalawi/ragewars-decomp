#include "basetypes.h"

extern f32 D_800CB470;
typedef struct { f32 first; f32 second; } D_800CB470_Pair;
extern f32 func_802745D4(f32 arg0);
extern void func_8023919C(void *, s32, s32, s32, s32, s32, s32, s32);

typedef struct func_802AE1A4_S1 func_802AE1A4_S1;
typedef struct func_802AE1A4_S2 func_802AE1A4_S2;
struct func_802AE1A4_S1 {
    char pad0[0x5DC];
    void* unk5DC;
    char pad5DC[0x16D4 - 0x5DC - sizeof(void*)];
    s32 unk16D4;
};
struct func_802AE1A4_S2 {
    char pad0[0x124];
    s16 unk124;
};

s32 func_802AE1A4(void *arg0) {
    f32 value;
    f32 input;
    f32 threshold;
    u32 converted;

    ((func_802AE1A4_S1 *)(arg0))->unk16D4 =
        ((func_802AE1A4_S1 *)(arg0))->unk16D4 == 0;
    if (((func_802AE1A4_S1 *)(arg0))->unk5DC != 0) {
        input = D_800CB470;
        ((func_802AE1A4_S2 *)(((func_802AE1A4_S1 *)(arg0))->unk5DC))->unk124 = 0;
        value = func_802745D4(input);
        threshold = (&D_800CB470)[1];
        if (!(threshold <= value)) {
            converted = (s32)value;
        } else {
            converted = (s32)(value - threshold) | 0x80000000;
        }
        func_8023919C(((func_802AE1A4_S1 *)(arg0))->unk5DC, 0xFF, 0xFF, 0xFF,
                      0xFF, (u8)converted, 1, 0);
    }
    return 1;
}
