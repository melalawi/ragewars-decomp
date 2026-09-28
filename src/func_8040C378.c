#include "basetypes.h"

/* Gives D_800E28E0 the value 0x14 when it is still zero. */
extern s32 D_800E28E0;

void func_8040C378(void) {
    if (D_800E28E0 == 0) {
        D_800E28E0 = 0x14;
    }
}
