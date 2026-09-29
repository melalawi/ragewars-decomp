#include "basetypes.h"

extern void func_802BF2A0(s32 arg0);

/* Spins forever unless arg0 is 5, calling func_802BF2A0 with bit 20 of a running counter each pass. */
void func_80415CA0(s32 arg0) {
    s32 i = 0;

    while (arg0 != 5) {
        s32 bit = i & 0x100000;

        i++;
        func_802BF2A0(bit != 0);
    }
}
