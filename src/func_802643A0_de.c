#include "span_1000/code_802636D0.h"



/** Report whether any selected status bit is set. */
int func_802643A0_de(void *object) {
    return (((func_802643A8_S1 *)(object))->unkC0 & 0x40101) != 0;
}
