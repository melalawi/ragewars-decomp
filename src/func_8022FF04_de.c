#include "common/types_06e4f7ef1f9e.h"
#include "span_1000/code_8022F3E8.h"
#include "span_1000/code_80231F5C.h"
#include "types.h"

extern s32 D_8011BDC8;
extern void ***D_800CB2EC[];
extern s32 D_800CD730;
extern char D_80140FC8;


extern s32 func_802327A0_de(s32);

extern void func_80237E80_de(void *, void *, void *);













void func_8022FF04_de(void *arg0, void *arg1) {
    s16 temp_s0;
    u16 temp_s2;
    void *temp_a1;
    char *temp_s1;

    temp_s1 = ((func_8022FEF4_S1 *)(arg0))->unk1D8;
    temp_s0 = ((func_8022FD9C_S2 *)(temp_s1))->unk770.v0;
    temp_s2 = ((func_8022FD9C_S2 *)(temp_s1))->unk770.v1;
    if ((((func_8022FD9C_S2 *)(temp_s1))->unk62E != temp_s0) || (D_8011BDC8 != 4)) {
        if (func_80232780_de(temp_s0) != 0) {
            ((func_8022FD9C_S2 *)(temp_s1))->unk13B8 = 1;
        } else if (func_802327A0_de(temp_s0) != 0) {
            ((func_8022FD9C_S2 *)(temp_s1))->unk13BC = 1;
        } else if (func_802327D4_de(temp_s0) != 0) {
            ((func_8022FD9C_S2 *)(temp_s1))->unk13C0 = 1;
        }
        ((func_8022FD9C_S2 *)(temp_s1))->unk62E = temp_s2;
        ((func_8022FEF4_S3 *)(arg1))->unk2C = ((func_8022FD9C_Record *)(D_800CB2EC[(s16)temp_s2]))->unk54;
        ((func_8022FEF4_S3 *)(arg1))->unk120 = ((func_8022FD9C_S4 *)(D_800CB2EC[((func_8022FD9C_S2 *)(temp_s1))->unk62E]))->unk58;
        temp_a1 = ((func_8022FD9C_S2 *)(temp_s1))->unk5DC;
        if ((temp_a1 != 0) && ((u32)D_800CD730 >= 5U)) {
            func_80237E80_de(&D_80140FC8, temp_a1,
                          **D_800CB2EC[((func_8022FD9C_S2 *)(temp_s1))->unk62E]);
        }
        ((func_8022FEF4_S3 *)(arg1))->unk124 = 0;
        ((func_8022FEF4_S3 *)(arg1))->unk128 = 0;
        ((func_8022FEF4_S1 *)(arg0))->unk1 = 0;
        ((func_8022FEF4_S3 *)(arg1))->unk130 = 0;
    }
    ((func_8022FEF4_S3 *)(arg1))->unk13C = 1;
    ((func_8022FEF4_S3 *)(arg1))->unk144 = 1;
}
