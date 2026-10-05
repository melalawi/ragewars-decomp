#include "common/types_8fd754e1e915.h"
#include "span_1000/code_80243A80.h"
/* Calls func_80402BA0_de when the globally selected record's word at 0x38 is non-zero. */
extern void *D_800DE7E0;
extern void func_80402BA0_de(void);




void func_80245894_de(void) {
    void *record = D_800DE7E0;
    if (((func_8020D1FC_S1 *)(record))->unk38 != 0) {
        func_80402BA0_de();
    }
}
