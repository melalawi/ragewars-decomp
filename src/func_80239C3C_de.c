#include "common/types_1dc8418c21db.h"
#include "span_1000/code_802393F4.h"
#include "span_1000/code_80255BEC.h"
#include "types.h"

extern void func_80239CE0_de(void *arg0);
extern void func_80255ED8_de(void *, s32);







void *func_80239C3C_de(void *arg0, s32 arg1) {
    void *temp_s0;

    temp_s0 = ((func_80239C2C_S1 *)(arg0))->unkF24.head;
    if (temp_s0 != 0) {
        func_80239CE0_de(temp_s0);
        func_80255ED8_de(&((func_80239C2C_S1 *)(arg0))->unkF24, (s32)temp_s0);
        func_80255D14_de(&((func_80239760_S2 *)(arg1))->unkE40, temp_s0);
    }
    return temp_s0;
}
