#include "span_1000/code_8022E938.h"
/* FAKEMATCH: retains inherited numeric field accesses because a verified live shared layout for those accesses is not available; the old access widths and evaluation order are preserved. */
#include "types.h"
extern u8 D_801462E5;




void func_8022E948_de(void *arg0) {
    u8 *ptr;

    ptr = &D_801462E5;
    if (*ptr != 0) {
        return;
    }
    if (*(s32 *)(ptr - 0x55) != 0) {
        if (((func_8022E938_S1 *)(arg0))->unk6AC & 0x20) {
            return;
        }
    }
    if (!(((func_8022E938_S1 *)(arg0))->unk6B0 & 0x800)) {
        return;
    }
    if (((func_8022E938_S1 *)(arg0))->unk13D4 != 0) {
        ((func_8022E938_S1 *)(arg0))->unk13D4 = 0;
        return;
    }
    ((func_8022E938_S1 *)(arg0))->unk13D4 = 1;
}
