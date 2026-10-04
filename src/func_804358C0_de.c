#include "span_16E000/code_80435010.h"
#include "types.h"

/* Returns the index of the first of four 400-byte records in D_80102B08 whose byte at offset 4
   equals the second argument and whose first word equals the first, or -1 when none does. */


extern struct Record_func_804358C0_de D_800FEB08[];

s32 func_804358C0_de(s32 id, s32 kind) {
    s32 i;

    for (i = 0; i < 4; i++) {
        if (D_800FEB08[i].kind == kind && D_800FEB08[i].id == id) {
            return i;
        }
    }
    return -1;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800FCB0C_1[] = {0x00};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800FEB0C_1[] = {0xD4};
#endif
