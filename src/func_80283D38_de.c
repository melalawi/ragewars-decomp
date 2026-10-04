#include "span_1000/code_8027ED40.h"
#include "types.h"

/** Return arg0, but treat the sentinel value 0xA as 0. */
s32 func_80283D38_de(s32 arg0) {
    if (arg0 == 0xA) {
        return 0;
    }
    return arg0;
}
