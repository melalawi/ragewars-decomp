#include "span_1000/code_80243A80.h"
/* Returns the globally selected record's word at 0xAC while its word at 0x38 is non-zero, and 0
   otherwise. */
extern void *D_800DE7E0;




int func_80245940_de(void) {
    void *record = D_800DE7E0;
    int cond = ((func_80245930_S1 *)(record))->unk38 != 0;
    if (cond) {
        if (record) {
            return ((func_80245930_S1 *)(record))->unkAC;
        } else {
            return ((func_80245930_S1 *)(record))->unkAC;
        }
    }
    return 0;
}
