#include "common/types_1dc8418c21db.h"
#include "common/types_8a8189af7b05.h"
#include "span_1000/code_802AE028.h"
#include "types.h"






void func_802AFDFC_de(void *arg0, f32 arg1) {
    void *temp_v0;

    temp_v0 = ((func_802B4ECC_S1 *)(arg0))->unk18;
    if (temp_v0 != 0) {
        ((func_802B4ECC_S1 *)(arg0))->unk24 = (s32)(arg1 * ((func_80212828_S7 *)(temp_v0))->unk8);
        return;
    }
    ((func_802B4ECC_S1 *)(arg0))->unk24 = 0x1E8;
}
