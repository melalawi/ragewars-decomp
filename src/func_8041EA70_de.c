#include "span_16E000/code_8041DBA0.h"
#include "types.h"

/* Resets the three 28-byte entries of D_80153F80: -1 in the first word and zero in the next
   three. */


extern struct Request_func_8041E100_de D_8014DCF0[];

void func_8041EA70_de(void) {
    s32 i;

    for (i = 0; i < 3; i++) {
        D_8014DCF0[i].id = -1;
        D_8014DCF0[i].variant = 0;
        D_8014DCF0[i].word8 = 0;
        D_8014DCF0[i].variantC = 0;
    }
}
