#include "span_1000/code_8023ECAC.h"
#include "types.h"
/* Points the active table at D_801041F0 and runs the setup routine on the fixed record D_44B4A0. */

extern u8 D_801001F0[];
extern void *D_800FFFCC;
extern u8 D_0044A850[];

extern void func_8023EE60_de(void *);

void func_8023EE00_de(void) {
    D_800FFFCC = D_801001F0;
    func_8023EE60_de(D_0044A850);
}
