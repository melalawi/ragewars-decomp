#include "common/types_1dc8418c21db.h"
#include "span_1000/code_8025A3EC.h"
#include "types.h"

extern void func_802B2F00_de(void *arg0, s16 arg1);
extern void func_802B2F10_de(void *arg0, s16 arg1);








void func_8025C438_de(void *arg0, s32 arg1) {
    s8 *new_var;
    int new_var2;
    s32 temp_s0;
    void *temp_s0_2;

    temp_s0 = ((func_8025C458_S1 *)(arg0))->unkB0;
    temp_s0_2 = &((func_80258D60_S1 *)(temp_s0))->unk84;
    new_var2 = 2;
    new_var = &((func_8025C458_S1 *)(arg0))->unk0;
    func_802B2F00_de(temp_s0_2, ((func_8025C458_S3 *)((temp_s0 + ((*(s32 *)new_var) * new_var2))))->unkDC);
    func_802B2F10_de(temp_s0_2, (s16)(s32)((f32) arg1 * (((func_8025C458_S1 *)(arg0))->unkC8)));
}
