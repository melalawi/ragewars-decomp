#include "common/types.h"
#include "span_1000/code_8023CBB0.h"
#include "span_1000/types.h"
#include "types.h"






void func_8023EBFC_de(void *arg0, void *arg1) {
    s32 temp_a1;
    s32 temp_v1;

    temp_v1 = ((func_8023EBEC_S1 *)(arg0))->unk3C & ~0xE00;
    ((func_8023EBEC_S1 *)(arg0))->unk3C = temp_v1;
    temp_a1 = ((func_8022BC04_S3 *)(arg1))->unk10;
    if (temp_a1 & 0x20000000) {
        ((func_8023EBEC_S1 *)(arg0))->unk3C = temp_v1 | 0x200;
        return;
    }
    if (temp_a1 & 0x40000000) {
        ((func_8023EBEC_S1 *)(arg0))->unk3C = temp_v1 | 0x400;
        return;
    }
    if (temp_a1 < 0) {
        ((func_8023EBEC_S1 *)(arg0))->unk3C = temp_v1 | 0x800;
    }
}
