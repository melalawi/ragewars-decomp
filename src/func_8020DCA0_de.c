#include "common/types_8a8189af7b05.h"
#include "span_1000/code_8020D370.h"
#include "types.h"

s32 func_802744D4_de(void);
s32 func_8020DD04_de(s32);
s32 func_80209874_de(void *, s32);

void func_8020DCA0_de(void *arg0) {
    s32 temp_v0;
    if ((func_802744D4_de() % 4) == 1) {
        temp_v0 = func_8020DD04_de((((func_802066A4_S3 *)(((((func_8020DCA0_S1 *)(arg0))->unk0))))->unk18) + 0x14);
        (((func_8020DCA0_S1 *)(arg0))->unk230) = temp_v0;
        func_80209874_de(arg0, temp_v0);
    }
}
