#include "span_1000/code_802555C8.h"
#include "span_1000/types.h"
#include "types.h"




s32 func_80255D14_de(void *arg0, s32 arg1) {
    s32 temp_v1;
    s32 temp_v0;

    temp_v1 = ((func_80239CDC_S1 *)(arg0))->unk4;
    if (temp_v1 != 0) {
        *(s32 *)(arg1 + ((func_80239CDC_S1 *)(arg0))->unk8) = temp_v1;
        *(s32 *)(((func_80239CDC_S1 *)(arg0))->unk4 + ((func_80239CDC_S1 *)(arg0))->unkC) = arg1;
    } else {
        *(s32 *)(arg1 + ((func_80239CDC_S1 *)(arg0))->unk8) = 0;
        *(s32 *)arg0 = arg1;
    }
    *(s32 *)(arg1 + ((func_80239CDC_S1 *)(arg0))->unkC) = 0;
    ((func_80239CDC_S1 *)(arg0))->unk4 = arg1;
    temp_v0 = ((func_80239CDC_S1 *)(arg0))->unk10 + 1;
    ((func_80239CDC_S1 *)(arg0))->unk10 = temp_v0;
    return temp_v0;
}
