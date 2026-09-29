#include "basetypes.h"

extern f32 D_800D2988;
extern f32 D_800C8EF0;
extern f32 D_800C8EF8;
extern f32 D_800C8EFC;

typedef struct func_8024F590_S1 func_8024F590_S1;
typedef struct func_8024F590_S2 func_8024F590_S2;
struct func_8024F590_S1 {
    char pad0[0x194];
    f32 unk194;
    char pad194[0x19C - 0x194 - sizeof(f32)];
    u16 unk19C;
    char pad19C[0x1A0 - 0x19C - sizeof(u16)];
    f32 unk1A0;
};
struct func_8024F590_S2 {
    char pad0[0x4];
    f32 unk4;
};

void func_8024F590(void *arg0) {
    f32 temp_f1;
    f32 threshold;
    f32 final_value;

    if (((func_8024F590_S1 *)(arg0))->unk19C & 0x10) {
        temp_f1 = ((func_8024F590_S1 *)(arg0))->unk1A0 +
                  D_800D2988 * D_800C8EF0;
        threshold = ((func_8024F590_S2 *)(&D_800C8EF0))->unk4;
        ((func_8024F590_S1 *)(arg0))->unk1A0 = temp_f1;
        if (temp_f1 < threshold) {
            ((func_8024F590_S1 *)(arg0))->unk194 = temp_f1 * D_800C8EF8;
            return;
        }
        final_value = D_800C8EFC;
        ((func_8024F590_S1 *)(arg0))->unk19C &= 0xFFEF;
        ((func_8024F590_S1 *)(arg0))->unk194 = final_value;
    }
}
