#include "span_1000/code_802647BC.h"
#include "types.h"

extern u32 D_80000318;

u32 func_80265350_de(void) {
    if (D_80000318 > 0x7FFFFFU) {
        return 0x700000;
    }
    return D_80000318;
}
