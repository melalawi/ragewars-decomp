#include "span_1000/code_802A208C.h"



/** Apply state two for event class three when the subcode is six or seven. */
int func_802A1FB8_de(void *object, int unused, unsigned int event, int subcode) {
    if ((event >> 16) == 3 && subcode < 8 && subcode >= 6) {
        ((func_802A2EC0_S1 *)(object))->unk5C = 2;
        ((func_802A2EC0_S1 *)(object))->unk48 = 0;
    }
    return 0;
}
