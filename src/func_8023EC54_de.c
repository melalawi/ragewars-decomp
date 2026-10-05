#include "common/types_06e4f7ef1f9e.h"
#include "common/types_1dc8418c21db.h"
#include "span_1000/code_8023D370.h"
#include "types.h"






void func_8023EC54_de(void *arg0, void *arg1) {
    s32 temp_a1;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;

    temp_v1 = ((func_8023EBEC_S1 *)(arg0))->unk3C;
    if (temp_v1 & 0x1000) {
        ((func_8023EBEC_S1 *)(arg0))->unk3C = temp_v1 & ~0x2000;
    }
    temp_v0 = ((func_8023EBEC_S1 *)(arg0))->unk3C;
    temp_v1_2 = temp_v0 & 0xFFFC7FFF;
    ((func_8023EBEC_S1 *)(arg0))->unk3C = temp_v1_2;
    if (temp_v0 & 0x7000) {
        temp_a1 = ((func_80205628_S3 *)(arg1))->unkC;
        switch (temp_a1) {
        case 8:
            ((func_8023EBEC_S1 *)(arg0))->unk3C = temp_v1_2 | 0x10000;
            return;
        case 7:
            ((func_8023EBEC_S1 *)(arg0))->unk3C = temp_v1_2 | 0x8000;
            break;
        }
    }
}
