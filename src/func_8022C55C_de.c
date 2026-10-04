#include "common/types.h"
#include "span_1000/code_8022C36C.h"
#include "types.h"




































void *func_8022C55C_de(void *arg0, u32 arg1) {
    void *var_v1;
    s32 var_a2;

    var_v1 = 0;
    var_a2 = 0;
    if (arg1 < 8U) {
        var_v1 = ((func_80228774_S1 *)(arg0))->unk20;
        if (var_v1 != 0) {
            do {
                if (((func_8022C54C_S3 *)((((SharedPlayer_func_8022A398_de *)(var_v1))->views5D8.view5D8_0.unk5D8)))->unk90 == 0) {
                    if (var_a2 == (s32) arg1) {
                        return var_v1;
                    }
                    var_a2 += 1;
                }
                var_v1 = ((SharedPlayer_func_8022A398_de *)(var_v1))->views16E0.view16E0_0.unk16E0;
            } while (var_v1 != 0);
        }
    }
    return var_v1;
}
