#include "span_1000/code_802636D0.h"



/** Report whether any of the selected object flag bytes are set. */
int func_80264388_de(void *object) {
    return (((func_802643A8_S1 *)(object))->unkC0 & 0x20202) != 0;
}
