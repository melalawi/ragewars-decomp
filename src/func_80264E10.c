#include "basetypes.h"

extern f32 func_80274B00(f32 arg0, f32 arg1);
extern f32 D_80146CF8;
extern f32 D_800C9400;
extern f32 D_800C9404;
extern f32 D_800C9408;

s32 func_80264E10(void *arg0) {
    f32 temp_f1;
    f32 temp_f1_2;
    s32 temp_v1;
    void *temp_a0;

    temp_a0 = *(void **)arg0;
    temp_v1 = *(s32 *)temp_a0;
    switch (temp_v1) {
    case 0: {
        f32 divisor = *(&D_80146CF8 + 1);
        temp_f1 = *(f32 *)((char *)arg0 + 4) + (D_800C9400 / divisor);
        *(f32 *)((char *)arg0 + 4) = temp_f1;
        if (*(f32 *)((char *)temp_a0 + 0x14) <= temp_f1) {
            return 1;
        }
        goto block_7;
    }
    case 1: {
        f32 divisor = *(&D_80146CF8 + 1);
        temp_f1_2 = *(f32 *)((char *)arg0 + 4) - (D_800C9404 / divisor);
        *(f32 *)((char *)arg0 + 4) = temp_f1_2;
        if (temp_f1_2 <= 0.0f) {
            *(f32 *)((char *)arg0 + 4) =
                temp_f1_2 + *(f32 *)((char *)temp_a0 + 4);
            *(f32 *)((char *)arg0 + 8) = func_80274B00(
                (f32)*(u8 *)((char *)temp_a0 + 8) * D_800C9408,
                (f32)*(u8 *)((char *)temp_a0 + 9) * D_800C9408);
        }
        goto block_7;
    }
    default:
block_7:
        return 0;
    }
}
