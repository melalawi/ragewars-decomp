#include "common/types.h"
#include "span_1000/code_80233C78.h"




/** Copy the three-word vector at source offset 0x260. */
void *func_802390D0_de(void *destination, void *source) {

    *(struct Triple *)destination =
        ((func_802390C0_S1 *)(source))->unk260;
    return destination;
}
