#include "common/types_1dc8418c21db.h"
#include "span_16E000/code_8041A4B0.h"
#include "types.h"

/* Sets the word at 0x54 of arg0 to 2, calls func_8025DF34_de with 0xE74, and sets the byte at 0x10 of every child in the list at 0x8 whose halfword at 0xE is not 8 to 100, returning zero. Adapted from func_802A1E5C_de with the two stores to 0x5C and 0x48 replaced by a single store of 2 to 0x54. */

extern s32 func_8025DF34_de(s32);






s32 func_8041A9B0_de(void *arg0) {
    void *p;

    ((func_8041AA30_S1 *)(arg0))->unk54 = 2;
    func_8025DF34_de(0xE74);
    p = ((func_8041AA30_S1 *)(arg0))->unk8;
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
