#include "common/types_06e4f7ef1f9e.h"
#include "span_1000/code_80231F5C.h"
#include "types.h"

extern s32 func_802301F4_de(void);
extern s32 func_80214178_de(void *, void *, s32);








void func_80232B64_de(void *arg0, void *arg1) {
    void *temp_v0;

    temp_v0 = ((func_8020A028_S3 *)(arg0))->unk1D8;
    ((func_80232B54_S2 *)(temp_v0))->unk788 = 1;
    ((func_80232B54_S2 *)(temp_v0))->unk794 = 0;
    ((func_80232B54_S2 *)(temp_v0))->unk78C = 0;
    ((func_80232B54_S3 *)(arg1))->unk124 = 0;
    ((func_80232B54_S3 *)(arg1))->unk128 = 0;
    if ((((func_80232B54_S3 *)(arg1))->unkCB != 0) && (func_802301F4_de() == 0)) {
        func_80214178_de(arg0, arg1, 2);
    }
}
