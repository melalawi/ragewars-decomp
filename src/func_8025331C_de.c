#include "span_1000/code_80252714.h"
#include "span_1000/types.h"
#include "types.h"





void func_8025331C_de(void *arg0) {
    s32 temp_v0;
    temp_v0 = (((struct func_80254930_S1 *) ((s8 *) arg0))->unk8) - 1;
    (((struct func_80254930_S1 *) ((s8 *) arg0))->unk8) = temp_v0;
    if (temp_v0 == 0) {
        (((struct func_80254930_S1 *) ((s8 *) arg0))->unkC) = (s32) ((((struct func_80254930_S1 *) ((s8 *) arg0))->unkC) & ~0x100);
    }
}
