#include "span_16E000/code_80403BCC.h"
#include "types.h"

/* Reports the address of the field at offset 0xA of entry j in record i of the table D_800E2854
   points to, returning zero, or returns -2 when record i's state in D_801534F0 is not 3. */




extern s32 D_8014D260[];
extern struct Record_func_80405338_de *D_800DE804;

s32 func_8040538C_de(s32 index, s32 entry, char **out) {
    if (D_8014D260[index] != 3) {
        return -2;
    }
    *out = D_800DE804[index].entries[entry].data + 0xA;
    return 0;
}
