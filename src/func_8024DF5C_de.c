#include "common/types.h"
#include "span_1000/code_8024DF4C.h"
#include "span_1000/types.h"
#include "types.h"






s32 func_8024DF5C_de(void *arg0) {
    void *temp_a1;
    s32 var_v1;

    temp_a1 = ((func_8024DEF8_S1 *)(arg0))->unk18;
    if (*(s32 *)temp_a1 == 1) {
        var_v1 = 0;
        if (((func_8024DEF8_S1 *)(arg0))->unk174 <= 0 || (((func_8024DED0_S2 *)(temp_a1))->unk4C & 4)) {
            var_v1 = 1;
        }
        return var_v1;
    }
    return 0;
}
