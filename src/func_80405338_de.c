#include "common/types_1dc8418c21db.h"
#include "span_16E000/code_80403BCC.h"
#include "types.h"

/* Reports the address of the field at offset 0xE of entry j in record i of the table D_800E2854
   points to, returning zero, or returns -2 when record i's state in D_801534F0 is not 3. */





extern struct Record_func_80405338_de *D_800DE804;

s32 func_80405338_de(s32 index, s32 entry, char **out) {
    if (D_8014D260[index] != 3) {
        return -2;
    }
    *out = D_800DE804[index].entries[entry].data + 0xE;
    return 0;
}
