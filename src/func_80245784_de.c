#include "span_1000/code_80242BE0.h"
#include "span_1000/types.h"
/** Read the word at offset 0x38 from the globally selected record. */
extern void *D_800DE7E0;




int func_80245784_de(void) {
    void *record = D_800DE7E0;
    return ((func_8020D1FC_S1 *)(record))->unk38;
}
