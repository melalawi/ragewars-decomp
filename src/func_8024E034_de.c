#include "common/types_1dc8418c21db.h"
#include "span_1000/code_8024D018.h"
#include "types.h"






s32 func_8024E034_de(void *arg0) {
    void *temp_a1;
    s32 var_v1;

    temp_a1 = ((func_8024DEF8_S1 *)(arg0))->unk18;
    if (*(s32 *)temp_a1 == 1) {
        var_v1 = 0;
        if (((func_8024DEF8_S1 *)(arg0))->unk174 <= 0 || (((func_8024DED0_S2 *)(temp_a1))->unk4C & 0x10)) {
            var_v1 = 1;
        }
        return var_v1;
    }
    return 0;
}
