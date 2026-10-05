#include "common/types_1dc8418c21db.h"
#include "span_1000/code_802646F4.h"
#include "types.h"

extern f32 func_80274A90_de(f32 arg0, f32 arg1);
extern f32 D_80142C38[2];

extern func_8020CA10_G1 D_800C4310_de;

extern func_8020CA10_G1 D_800C4314_de;

extern func_8020CA10_G1 D_800C4318_de;






s32 func_80264DF0_de(void *arg0) {
    f32 temp_f1;
    f32 temp_f1_2;
    s32 temp_v1;
    void *temp_a0;

    temp_a0 = *(void **)arg0;
    temp_v1 = *(s32 *)temp_a0;
    switch (temp_v1) {
    case 0: {
        f32 divisor = D_80142C38[1];
        temp_f1 = ((func_80264E10_S1 *)(arg0))->unk4 + (D_800C4310_de.unk0 / divisor);
        ((func_80264E10_S1 *)(arg0))->unk4 = temp_f1;
        if (((func_80264E10_S2 *)(temp_a0))->unk14 <= temp_f1) {
            return 1;
        }
        goto block_7;
    }
    case 1: {
        f32 divisor = D_80142C38[1];
        temp_f1_2 = ((func_80264E10_S1 *)(arg0))->unk4 - (D_800C4314_de.unk0 / divisor);
        ((func_80264E10_S1 *)(arg0))->unk4 = temp_f1_2;
        if (temp_f1_2 <= 0.0f) {
            ((func_80264E10_S1 *)(arg0))->unk4 =
                temp_f1_2 + ((func_80264E10_S2 *)(temp_a0))->unk4;
            ((func_80264E10_S1 *)(arg0))->unk8 = func_80274A90_de(
                (f32)((func_80264E10_S2 *)(temp_a0))->unk8 * D_800C4318_de.unk0,
                (f32)((func_80264E10_S2 *)(temp_a0))->unk9 * D_800C4318_de.unk0);
        }
        goto block_7;
    }
    default:
block_7:
        return 0;
    }
}
