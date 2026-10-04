#include "span_1000/code_80232B44.h"
#include "span_1000/types.h"
#include "types.h"

extern s32 func_802301F4_de(void);
extern void func_8022B00C_de(void *arg0);






void func_80233598_de(void *arg0, void *arg1) {
    void *temp_s1;

    temp_s1 = ((func_8020A028_S3 *)(arg0))->unk1D8;
    if (((func_80233588_S2 *)(arg1))->unkCB != 0) {
        ((func_80233588_S2 *)(arg1))->unk13C = 2;
        if (func_802301F4_de() != 0) {
            ((func_80233588_S2 *)(arg1))->unk13C = 1;
            func_8022B00C_de(temp_s1);
        }
    }
}
