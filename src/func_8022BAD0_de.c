#include "common/types_8a8189af7b05.h"
#include "span_1000/code_8022BA90.h"
#include "types.h"

extern void *func_8028CFA0_de(void *arg0, s32 arg1, s32 arg2);
extern s32 D_801468F4;
extern s32 D_8011FE88;








void func_8022BAD0_de(void *arg0) {
    s32 var_a2;
    void *result;

    var_a2 = ((func_8022BAC0_S1 *)(arg0))->unk5E0;
    if (D_801468F4 != 0 && ((func_8020EA10_S3 *)((((func_8022BAC0_S1 *)(arg0))->unk5D8)))->unk8F == 1) {
        var_a2 = 0x13;
    }
    result = func_8028CFA0_de(&D_8011FE88, 0xB, var_a2);
    if (result != 0) {
        ((func_8022BAC0_S1 *)(arg0))->unk18 = result;
    } else {
        result = func_8028CFA0_de(&D_8011FE88, 0xB, -1);
        if (result != 0) {
            ((func_8022BAC0_S1 *)(arg0))->unk18 = result;
        } else {
            result = func_8028CFA0_de(&D_8011FE88, -1, -1);
            ((func_8022BAC0_S1 *)(arg0))->unk18 = result;
        }
    }
    ((func_8022BAC0_S1 *)(arg0))->unk50 = ((func_8022BAC0_S3 *)(result))->unkFC;
    ((func_8022BAC0_S1 *)(arg0))->unk54 = ((func_8022BAC0_S3 *)(result))->unk100;
    ((func_8022BAC0_S1 *)(arg0))->unk58 = ((func_8022BAC0_S3 *)(result))->unk104;
}
