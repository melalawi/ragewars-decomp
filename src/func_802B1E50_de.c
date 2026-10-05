#include "common/types_1dc8418c21db.h"
#include "span_1000/code_802B0388.h"
#include "types.h"






void func_802B1E50_de(void *arg0, f32 arg1) {
    void *temp_v0;

    temp_v0 = ((func_802B4ECC_S1 *)(arg0))->unk18;
    if (temp_v0 != 0) {
        ((func_802B4ECC_S1 *)(arg0))->unk24 = (s32)(arg1 * ((func_8020D9C0_S1 *)(temp_v0))->unk14);
        return;
    }
    ((func_802B4ECC_S1 *)(arg0))->unk24 = 0x1E8;
}
