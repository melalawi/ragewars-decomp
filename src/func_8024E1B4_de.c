#include "span_1000/code_8024DF4C.h"
#include "types.h"




s32 func_8024E1B4_de(void *arg0) {
    if (*(u8 *)arg0 != 1) {
        return 0;
    }
    if (!(((func_8024E1A4_S1 *)(arg0))->unk100 & 0x2000)) {
        return 0;
    }
    arg0 = ((func_8024E1A4_S1 *)(arg0))->unk1A0;
    if (arg0 == 0) {
        goto ret1;
    }
    if (((func_8024E1A4_S1 *)(arg0))->unk1C & 0x10000) {
        return 0;
    }
ret1:
    return 1;
}
