#include "common/types_06e4f7ef1f9e.h"
#include "common/types_8fd754e1e915.h"
#include "span_1000/code_80209AE8.h"
#include "types.h"




extern char D_8011D8D0;

extern void func_802850C8_de(void *arg0, void *arg1, f32 *arg2);
extern f32 func_80274564_de(f32 arg0);
extern f32 func_80216F44_de(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern f32 func_8020AA0C_de(void *arg0);











void func_8020A458_de(void *arg0, void *arg1) {
    s32 timer;
    s32 minus_one;
    void *record;
    f32 distance;

    if (arg0 == 0) {
        return;
    }

    timer = ((func_8020A458_S1 *)(arg0))->unk2EC;
    if (timer == 0) {
        f32 value;

        func_802850C8_de(&D_8011D8D0, *(void **) arg0, &value);
        if (value < D_800C1D1C_de) {
            f32 k = D_800C1D24_de;
            f32 threshold = func_80274564_de(D_800C1D20_de) + k;

            if ((f32) ((func_8020A458_S2 *)(arg1))->unk34 < threshold) {
                s32 base = ((func_8020A458_S2 *)(arg1))->unk24;
                ((func_8020A458_S1 *)(arg0))->unk240 =
                    (s32) ((f32) base + func_80274564_de(k) * (f32) ((func_8020A458_S2 *)(arg1))->unk28);
            }
            ((func_8020A458_S1 *)(arg0))->unk2EC = ((func_8020A458_S2 *)(arg1))->unk2C;
            ((func_8020A458_S1 *)(arg0))->unk2EC =
                (s32) ((f32) ((func_8020A458_S1 *)(arg0))->unk2EC +
                       func_80274564_de(k) * (f32) ((func_8020A458_S2 *)(arg1))->unk30);
            ((func_8020A458_S1 *)(arg0))->unk2EC += ((func_8020A458_S1 *)(arg0))->unk240;
        }
    } else {
        ((func_8020A458_S1 *)(arg0))->unk2EC = timer - 1;
    }

    timer = ((func_8020A458_S1 *)(arg0))->unk2E4;
    if (timer > 0) {
        ((func_8020A458_S1 *)(arg0))->unk2E4 = timer - 1;
        return;
    }
    minus_one = -1;
    if (timer == minus_one) {
        ((func_8020A458_S1 *)(arg0))->unk23C = 1;
        ((func_8020A458_S1 *)(arg0))->unk2E8 += minus_one;
    } else {
        record = ((func_8020A028_S3 *)(((func_8020A458_S1 *)(arg0))->unk64))->unk1D8;
        distance = func_80216F44_de(*(s32 *)arg0,
                                 ((func_8020A028_S4 *)(record))->unk8,
                                 ((func_8020A028_S4 *)(record))->unkC,
                                 ((func_8020A028_S4 *)(record))->unk10);
        if (func_8020AA0C_de(arg0) < distance) {
            return;
        }
        ((func_8020A458_S1 *)(arg0))->unk23C = 1;
        ((func_8020A458_S1 *)(arg0))->unk2E4 = minus_one;
    }
    if (((func_8020A458_S1 *)(arg0))->unk2E8 == 0) {
        ((func_8020A458_S1 *)(arg0))->unk23C = 0;
        func_8020A95C_de(arg0, arg1);
    }
}
