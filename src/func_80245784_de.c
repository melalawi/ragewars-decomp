#include "common/types_8fd754e1e915.h"
#include "span_1000/code_80243A80.h"
/** Read the word at offset 0x38 from the globally selected record. */
extern void *D_800E2830;




int func_80245784_de(void) {
    void *record = D_800E2830;
    return ((func_8020D1FC_S1 *)(record))->unk38;
}
