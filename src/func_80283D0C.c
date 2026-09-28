#include "basetypes.h"

/** Return arg0, but treat the sentinel value 0xA as 0. */
s32 func_80283D0C(s32 arg0) {
    if (arg0 == 0xA) {
        return 0;
    }
    return arg0;
}
