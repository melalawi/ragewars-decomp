#include "span_1000/code_8029FF18.h"
#include "span_C76B0/data.h"
#include "types.h"



s32 func_802A01E8_de(void) {
    s32 temp_v0;

    temp_v0 = (D_800CD900 * 0x343FD) + 0x269EC3;
    D_800CD900 = temp_v0;
    return (temp_v0 >> 0x10) & 0x7FFF;
}
