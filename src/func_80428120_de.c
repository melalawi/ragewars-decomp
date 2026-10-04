#include "span_16E000/code_80425BC0.h"
#include "span_16E000/types.h"
#include "types.h"

/* Returns the index of the entry among the 0x24 28-byte entries of D_800E4694 whose identifier
   matches, or zero when none does. */


extern struct Entry_func_8041EB50_de D_800E0644[];

s32 func_80428120_de(s32 id) {
    s32 i;

    for (i = 0; i < 0x24; i++) {
        if (D_800E0644[i].value == id) {
            return i;
        }
    }
    return 0;
}
