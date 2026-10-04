#include "span_16E000/code_80439930.h"
#include "types.h"

/* Counts how many of the four 0x4D0-byte entries D_800E59E0 points to have the word at offset
   0x4B0 equal to one. */


extern struct Entry_func_8043BA24_de *D_800E1990;

s32 func_8043BA24_de(void) {
    s32 count = 0;
    s32 i;

    for (i = 0; i < 4; i++) {
        if (D_800E1990[i].state == 1) {
            count++;
        }
    }
    return count;
}
