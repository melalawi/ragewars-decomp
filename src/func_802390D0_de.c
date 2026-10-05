#include "common/types_8a8189af7b05.h"
#include "span_1000/code_80233920.h"




/** Copy the three-word vector at source offset 0x260. */
void *func_802390D0_de(void *destination, void *source) {

    *(struct Triple *)destination =
        ((func_802390C0_S1 *)(source))->unk260;
    return destination;
}
