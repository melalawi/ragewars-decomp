#include "common/types.h"
#include "span_1000/code_8021762C.h"
#include "span_1000/types.h"
#include "types.h"

extern f32 D_800CD738;








s32 func_8021846C_de(void *arg0, void *arg1) {
    f32 temp_f1;

    temp_f1 = ((func_8021846C_S1 *)(arg0))->unk4;
    if (temp_f1 > 0.0f) {
        ((func_8021846C_S1 *)(arg0))->unk4 = temp_f1 - D_800CD738;
        return 0;
    }
    if (((func_8021846C_S3 *)((((func_8021846C_S2 *)(arg1))->unk698)))->unkB0 & 0x8000) {
        return 0;
    }
    ((func_8021846C_S1 *)(arg0))->unk37C = -1;
    return 1;
}
