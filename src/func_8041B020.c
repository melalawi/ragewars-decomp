#include "basetypes.h"

/* Calls func_8025DF54 with 0xE74 and sets the byte at 0x10 of every child in the list at 0x8 of arg0 whose halfword at 0xE is not 8 to 100, returning zero. Adapted from func_802A2E5C with both stores to 0x5C and 0x48 removed. */

extern s32 func_8025DF54(s32);

s32 func_8041B020(void *arg0) {
    void *p;

    func_8025DF54(0xE74);
    p = *(void **)((char *)arg0 + 8);
    if (p != 0) {
        do {
            if (*(u16 *)((char *)p + 0xE) != 8) {
                *(s8 *)((char *)p + 0x10) = 0x64;
            }
            p = *(void **)((char *)p + 4);
        } while (p != 0);
    }
    return 0;
}
