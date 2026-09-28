#include "basetypes.h"

extern u32 D_80000318;

u32 func_80265370(void) {
    if (D_80000318 > 0x7FFFFFU) {
        return 0x700000;
    }
    return D_80000318;
}
