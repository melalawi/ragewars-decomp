#include "common/types_1dc8418c21db.h"
#include "span_1000/code_802508E0.h"
#include "types.h"

extern u8 D_801462E5;








s8 func_80250E14_de(void *arg0) {
    void *temp_a1;

    if (D_801462E5 != 0) {
        return ((func_80250DBC_S2 *)((((func_80250D88_S1 *)(arg0))->unk18)))->unkE;
    }
    temp_a1 = ((func_80250D88_S1 *)(arg0))->unk18;
    if (((func_80250D88_S1 *)(arg0))->unkDC < ((func_80250D88_S2 *)(temp_a1))->unk24 * 2) {
        return ((func_80250D88_S2 *)(temp_a1))->unkE;
    }
    return ((func_80250D88_S2 *)(temp_a1))->unkF;
}
