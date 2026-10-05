#include "span_1000/code_802B243C.h"
#include "types.h"

extern s32 func_802B235C_de(void *arg0);




s32 func_802B22F4_de(void *arg0, s32 *arg1) {
    u32 field8;

    field8 = ((func_802B73C4_S1 *)(arg0))->unk8;
    if (!(field8 < (u32)(((func_802B73C4_S1 *)(arg0))->unk0 + ((func_802B73C4_S1 *)(arg0))->unk10))) {
        return 0;
    }
    *arg1 = func_802B235C_de(arg0);
    ((func_802B73C4_S1 *)(arg0))->unk8 = field8;
    return 1;
}
