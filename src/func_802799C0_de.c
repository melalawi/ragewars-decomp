#include "span_1000/code_80279764.h"
#include "span_1000/types.h"
#include "types.h"





s32 func_802799C0_de(void *arg0, s32 arg1) {
    s32 var_a2;
    var_a2 = 0;
    if ((((struct func_80254930_S1 *) ((s8 *) arg0))->unk8) >= arg1) {
        var_a2 = (((struct func_80254930_S1 *) ((s8 *) arg0))->unkC);
        (((struct func_80254930_S1 *) ((s8 *) arg0))->unkC) = (s32) (var_a2 + (arg1 << 6));
        (((struct func_80254930_S1 *) ((s8 *) arg0))->unk8) = (s32) ((((struct func_80254930_S1 *) ((s8 *) arg0))->unk8) - arg1);
    }
    return var_a2;
}
