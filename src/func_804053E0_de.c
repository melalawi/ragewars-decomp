#include "span_16E000/code_80403BCC.h"
#include "types.h"

/* Reports through the third argument the size in 256-byte units, per func_804057EC_de, of entry j of
   record i in the table D_800E2854 points to, returning zero, or returns -2 when record i's state in
   D_801534F0 is not 3. */




extern s32 D_8014D260[];
extern struct Record_func_804053E0_de *D_800DE804;
extern s32 func_804057EC_de(s32);

s32 func_804053E0_de(s32 index, s32 entry, s32 *out) {
    if (D_8014D260[index] != 3) {
        return -2;
    }
    *out = func_804057EC_de(D_800DE804[index].entries[entry].size);
    return 0;
}
