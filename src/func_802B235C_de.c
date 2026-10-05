#include "span_1000/code_802B243C.h"
#include "types.h"




s32 func_802B235C_de(void *arg0) {
    u8 *p;
    s32 b;
    s32 val;

    p = ((func_802B742C_S1 *)(arg0))->unk8;
    b = *p;
    ((func_802B742C_S1 *)(arg0))->unk8 = p + 1;
    val = b;
    if (val & 0x80) {
        val = val & 0x7F;
        do {
            p = ((func_802B742C_S1 *)(arg0))->unk8;
            b = *p;
            ((func_802B742C_S1 *)(arg0))->unk8 = p + 1;
            val = (val << 7) + (b & 0x7F);
        } while (b & 0x80);
    }
    return val;
}
