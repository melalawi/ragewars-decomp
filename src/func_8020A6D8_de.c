#include "common/types_06e4f7ef1f9e.h"
#include "common/types_8fd754e1e915.h"
#include "span_1000/code_80209AE8.h"
#include "types.h"


extern f32 func_80216F44_de(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern f32 func_8020AA0C_de(void *arg0);









void func_8020A6D8_de(void *arg0, void *arg1) {
    s32 timer;
    s32 minus_one;
    void *record;
    f32 distance;

    if (arg0 == 0) {
        return;
    }
    func_8020A884_de(arg0, arg1);
    timer = ((func_8020A6D8_S1 *)(arg0))->unk2E4;
    if (timer > 0) {
        ((func_8020A6D8_S1 *)(arg0))->unk2E4 = timer - 1;
        return;
    }
    minus_one = -1;
    if (timer == minus_one) {
        ((func_8020A6D8_S1 *)(arg0))->unk23C = 1;
        ((func_8020A6D8_S1 *)(arg0))->unk2E8 += minus_one;
    } else {
        record = ((func_8020A028_S3 *)(((func_8020A6D8_S1 *)(arg0))->unk64))->unk1D8;
        distance = func_80216F44_de(*(s32 *)arg0,
                                 ((func_8020A028_S4 *)(record))->unk8,
                                 ((func_8020A028_S4 *)(record))->unkC,
                                 ((func_8020A028_S4 *)(record))->unk10);
        if (func_8020AA0C_de(arg0) < distance) {
            return;
        }
        ((func_8020A6D8_S1 *)(arg0))->unk23C = 1;
        ((func_8020A6D8_S1 *)(arg0))->unk2E4 = minus_one;
    }
    if (((func_8020A6D8_S1 *)(arg0))->unk2E8 == 0) {
        ((func_8020A6D8_S1 *)(arg0))->unk23C = 0;
        func_8020A95C_de(arg0, arg1);
    }
}
