#include "span_1000/code_80242BE0.h"
/* Reports whether the globally selected record is active (its word at 0x38 is non-zero) and its
   value at 0x1C lies between the bounds at 0x30 and 0x34. */
extern void *D_800DE7E0;



int func_80245798_de(void) {
    void *record = D_800DE7E0;
    float temp_f1;
    int var_a0 = 0;

    if (((func_80245788_S1 *)(record))->unk38 != 0) {
        temp_f1 = ((func_80245788_S1 *)(record))->unk1C;
        if (((func_80245788_S1 *)(record))->unk30 <= temp_f1 && temp_f1 <= ((func_80245788_S1 *)(record))->unk34) {
            var_a0 = 1;
        }
    }
    return var_a0;
}
