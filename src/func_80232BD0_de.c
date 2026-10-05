#include "common/types_06e4f7ef1f9e.h"
#include "span_1000/code_80231F5C.h"
#include "types.h"

extern s32 func_80222AA4_de(void *arg0, s16 arg1);









s32 func_80232BD0_de(void *arg0, void *arg1, void *arg2) {
    s32 temp_v0;
    void *temp_v1;

    {
        f32 field = ((func_80232BC0_S1 *)(arg2))->unk11D8;
        if (D_800C301C_de < field) {
            return 1;
        }
    }
    if ((((func_80203C40_S1 *)(arg0))->unk100 & 0x300000) && (((func_80232BC0_S1 *)(arg2))->unk1450 != 0)) {
        temp_v1 = ((func_80232BC0_S1 *)(arg2))->unk1454;
        temp_v0 = ((func_80230BB8_S3 *)(temp_v1))->unk23C;
        ((func_80230BB8_S3 *)(temp_v1))->unk23C = 0;
        return temp_v0 == 0;
    }
    if (((func_80232BC0_S1 *)(arg2))->unk6AC & 0x2000) {
        if (((func_80232BC0_S1 *)(arg2))->unk11B4 != 0) {
            return 1;
        }
        return func_80222AA4_de(arg2, ((func_80232BC0_S1 *)(arg2))->unk62E) == 0;
    }
    return 1;
}
