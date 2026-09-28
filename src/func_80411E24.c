#include "basetypes.h"

/* Calls func_8040FA60 when the halfword D_80153C2C is non-zero. */
extern s16 D_80153C2C;
extern void func_8040FA60();

void func_80411E24(void) {
    if (D_80153C2C != 0) {
        func_8040FA60();
    }
}
