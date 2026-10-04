#include "span_1000/code_8024F944.h"
#include "span_C76B0/data.h"


/** Advance the wrapping counter D_800D0910, resetting to 0x380000 at 0x3FFFFF. */
int func_80250BF0_de(void) {
    int temp_v0;

    temp_v0 = D_800CB6D0 + 1;
    D_800CB6D0 = temp_v0;
    if (temp_v0 == 0x3FFFFF) {
        D_800CB6D0 = 0x380000;
    }
    return D_800CB6D0;
}
