#include "common/types.h"
#include "span_1000/code_8022C36C.h"
#include "types.h"





s32 func_8022C460_de(void *arg0) {
    s16 temp_v1;
    temp_v1 = (((struct func_8022C6D4_S1 *) ((s8 *) arg0))->unk650);
    if ((temp_v1 == 0x15) || (temp_v1 == 0x13) || (temp_v1 == 0x14)) {
        return 1;
    }
    return 0;
}
