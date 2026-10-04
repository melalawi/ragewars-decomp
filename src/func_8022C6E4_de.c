#include "common/types.h"
#include "span_1000/code_8022C36C.h"
#include "span_1000/types.h"
#include "types.h"

extern void func_802227F4_de(void *, void *, s32);






s32 func_8022C6E4_de(void *arg0, void *arg1) {
    s16 state = ((func_8022C6D4_S1 *)(arg0))->unk650;
    s32 blocked;

    if ((state == 0x15) || (state == 0x13) || (state == 0x14)) {
        blocked = 1;
    } else {
        blocked = 0;
    }
    if (blocked == 0) {
        if ((((func_8020D1FC_S1 *)(arg1))->unk38 & 0x20000) == 0) {
            return 0;
        }
        if (((func_8022C6D4_S1 *)(arg0))->unk650 == 0xD) {
            return 0;
        }
        if (((func_8022C6D4_S1 *)(arg0))->unk650 == 0xE) {
            return 0;
        }
        func_802227F4_de(arg0, arg1, 0xD);
        return 1;
    }
    return 0;
}
