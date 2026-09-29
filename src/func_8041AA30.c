#include "basetypes.h"

/* Sets the word at 0x54 of arg0 to 2, calls func_8025DF54 with 0xE74, and sets the byte at 0x10 of every child in the list at 0x8 whose halfword at 0xE is not 8 to 100, returning zero. Adapted from func_802A2E5C with the two stores to 0x5C and 0x48 replaced by a single store of 2 to 0x54. */

extern s32 func_8025DF54(s32);

typedef struct func_8041AA30_S1 func_8041AA30_S1;
typedef struct func_8041AA30_S2 func_8041AA30_S2;
struct func_8041AA30_S1 {
    char pad0[0x8];
    void* unk8;
    char pad8[0x54 - 0x8 - sizeof(void*)];
    s32 unk54;
};
struct func_8041AA30_S2 {
    char pad0[0x4];
    void* unk4;
    char pad4[0xE - 0x4 - sizeof(void*)];
    u16 unkE;
    char padE[0x10 - 0xE - sizeof(u16)];
    s8 unk10;
};

s32 func_8041AA30(void *arg0) {
    void *p;

    ((func_8041AA30_S1 *)(arg0))->unk54 = 2;
    func_8025DF54(0xE74);
    p = ((func_8041AA30_S1 *)(arg0))->unk8;
    if (p != 0) {
        do {
            if (((func_8041AA30_S2 *)(p))->unkE != 8) {
                ((func_8041AA30_S2 *)(p))->unk10 = 0x64;
            }
            p = ((func_8041AA30_S2 *)(p))->unk4;
        } while (p != 0);
    }
    return 0;
}
