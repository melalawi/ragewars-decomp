#include "basetypes.h"

/* Calls func_802656A8 on D_80154018 for each index from 0 to 0x27 with zero. */
extern char D_80154018[];
extern void func_802656A8(void *, s32, s32);

void func_8042B530(void) {
    s32 i;

    for (i = 0; i < 0x28; i++) {
        func_802656A8(D_80154018, i, 0);
    }
}
