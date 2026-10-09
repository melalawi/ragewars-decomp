#include "common/types_1dc8418c21db.h"
#include "span_1000/code_8028DF6C.h"
#include "types.h"






s32 func_8028FA0C_de(void *arg0, void *arg1) {
    if ((((func_80239CDC_S1 *)(arg1))->unk4) & 3) {
        return 0;
    }
    if ((((func_80239CDC_S1 *)(arg1))->unk10) != 1) {
        return 1;
    }
    if (((((func_80239CDC_S1 *)(arg1))->unk8) & 0x60) != 0x60) {
        return 1;
    }
    func_802BA8C0_de(((func_80239CDC_S1 *)(arg1))->unkC);
    return 1;
}
