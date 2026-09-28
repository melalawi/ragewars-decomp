#include "basetypes.h"

/* Stores 1 in D_80153730 and 0 in D_80153774. */
extern s32 D_80153730;
extern s32 D_80153774;

void func_8040A774(void) {
    D_80153730 = 1;
    D_80153774 = 0;
}
