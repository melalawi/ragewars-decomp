#include "common/types_06e4f7ef1f9e.h"
#include "span_1000/code_80231F5C.h"
#include "types.h"

extern s32 func_80222AA4_de(void *arg0, s16 arg1);
extern s16 func_8022F96C_de(void *arg0);
extern s32 func_802301F4_de(void *, void *);
extern s32 func_80214178_de(void *, void *, s32);


extern WeaponActionRecord D_800C9698[];








void func_80232FF8_de(void *arg0, void *arg1) {
    char *o = (char *) arg0;
    void *temp_s0;
    s16 idx;
    s32 temp_s3;

    temp_s0 = ((func_80232FE8_S1 *)(o))->unk1D8;
    idx = ((func_80232FE8_S2 *)(temp_s0))->unk650;
    temp_s3 = D_800C9698[idx].action;

    if (func_80222AA4_de(temp_s0, ((func_80232FE8_S2 *)(temp_s0))->unk62E) == 0) {
        ((func_80232FE8_S2 *)(temp_s0))->unk770 = func_8022F96C_de(temp_s0);
    } else {
        ((func_80232FE8_S3 *)(arg1))->unk13C = 1;
        if (func_802301F4_de(arg0, arg1) == 0 && !(((func_80232FE8_S1 *)(o))->unk100 & 0x400)) {
            func_80214178_de(arg0, arg1, temp_s3);
        }
    }
}
