#include "basetypes.h"

/* Calls func_802A3224 and func_802A338C, then func_80299368 with 0x11. */
extern void func_802A3224();
extern void func_802A338C();
extern void func_80299368(s32);

void func_8042D190(void) {
    func_802A3224();
    func_802A338C();
    func_80299368(0x11);
}
