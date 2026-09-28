#include "basetypes.h"

/* Sets D_80153780 to one; func_8040A4BC clears it. */
extern s32 D_80153780;

void func_8040A4A8(void) {
    D_80153780 = 1;
}
