#include "common/types.h"
#include "span_16E000/code_8041ADB4.h"
#include "types.h"

/* Calls func_8025DF34_de with 0xE74 and sets the byte at 0x10 of every child in the list at 0x8 of arg0 whose halfword at 0xE is not 8 to 100, returning zero. Adapted from func_802A1E5C_de with both stores to 0x5C and 0x48 removed. */

extern s32 func_8025DF34_de(s32);






s32 func_8041B564_de(void *arg0) {
    void *p;

    func_8025DF34_de(0xE74);
    p = ((func_80255BEC_S1 *)(arg0))->unk8;
    if (p != 0) {
        do {
            if (((func_802A2E5C_S2 *)(p))->unkE != 8) {
                ((func_802A2E5C_S2 *)(p))->unk10 = 0x64;
            }
            p = ((func_802A2E5C_S2 *)(p))->unk4;
        } while (p != 0);
    }
    return 0;
}
