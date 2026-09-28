/* Points the active table at D_801041F0 and runs the setup routine on the fixed record D_44B4A0. */
#include "basetypes.h"

extern u8 D_801041F0[];
extern void *D_80103FCC;
extern u8 D_44B4A0[];

extern void func_8023EE50(void *);

void func_8023EDF0(void) {
    D_80103FCC = D_801041F0;
    func_8023EE50(D_44B4A0);
}
