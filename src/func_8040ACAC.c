#include "basetypes.h"

/* Sets the state word D_80153788 to 0xE; this is one of a run of functions that each store one
   state number there, and func_8040AB38 clears it. */
extern s32 D_80153788;

void func_8040ACAC(void) {
    D_80153788 = 0xE;
}
