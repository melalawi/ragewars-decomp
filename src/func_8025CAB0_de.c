#include "span_1000/code_8025C67C.h"
#include "span_1000/code_8025DB64.h"
#include "span_C76B0/data.h"
#include "types.h"









void func_8025CAB0_de(void *arg0) {
    s32 temp_v0;
    void *var_s0;

    var_s0 = ((func_8025CAD0_S1 *)(arg0))->unk14;
    if (var_s0 != 0) {
        do {
            func_8025E174_de(((func_8025CA44_S2 *)(var_s0))->unk8);
            temp_v0 = ((func_8025CA44_S2 *)(var_s0))->unk8;
            var_s0 = ((func_8025CA44_S2 *)(var_s0))->unk4;
            D_800CBB18 = temp_v0;
        } while (var_s0 != 0);
    }
    ((func_8025CAD0_S1 *)(arg0))->unk28 = 1;
}
