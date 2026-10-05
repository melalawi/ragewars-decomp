#include "common/types_1dc8418c21db.h"
#include "common/types_8a8189af7b05.h"
#include "common/types_8fd754e1e915.h"
#include "span_1000/code_8022A274.h"
#include "types.h"




































void *func_8022A634_de(void *arg0, u32 arg1) {
    void *var_v1;
    void *temp_v0;
    s32 var_a2;

    var_v1 = 0;
    var_a2 = 0;
    if (arg1 < 8U) {
        var_v1 = ((func_80228774_S1 *)(arg0))->unk20;
        if (var_v1 != 0) {
            do {
                temp_v0 = ((SharedPlayer_func_8022A398_de *)(var_v1))->views5DC.view5DC_0.unk5DC;
                if (temp_v0 != 0 && ((func_8021CD70_S4 *)(temp_v0))->unk564 == 0) {
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
