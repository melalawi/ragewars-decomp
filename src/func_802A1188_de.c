#include "span_1000/code_802A1ED4.h"
/** Clear the global word at VRAM 0x800D2BBC. */
extern int D_800CD94C_de;

void func_802A1188_de(void) {
    D_800CD94C_de = 0;
}
