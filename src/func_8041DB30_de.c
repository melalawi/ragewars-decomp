#include "span_16E000/code_8041DBA0.h"
/* Advances a cursor over four 400-byte entries, wrapping to 0, until it reaches one whose flag byte in
   D_80102B0D is not negative; after six steps without one it sets the cursor to -1. */
extern signed char D_800FEB0D[];

void func_8041DB30_de(int *cursor) {
    int steps;

    steps = 0;
    do {
        (*cursor)++;
        if (*cursor >= 4) {
            *cursor = 0;
        }
        steps++;
        if (steps >= 6) {
            *cursor = -1;
            return;
        }
    } while (D_800FEB0D[*cursor * 400] < 0);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800FCB0D_1[] = {0x8F};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800FEB0D_1[] = {0xB3};
#endif
