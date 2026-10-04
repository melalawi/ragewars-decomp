#include "common/types.h"
#include "span_1000/code_80299FC4.h"
/* Looks up an id among the 64 twenty-byte entries at 0x1C of the table D_8014D080 and returns the
   entry's override value when set, otherwise its default value, or 0 when the id is absent. */





extern func_8029A7E4_S1 *D_80146E00;

int func_802997E4_de(int id) {
    int i;
    int *key;
    Rec_func_8024C92C_de *entry;

    key = &D_80146E00->unk1C;
    entry = &D_80146E00->unk20;
    for (i = 0; i < 64; i++) {
        if (*key == id) {
            if (entry->y != 0) {
                return entry->y;
            }
            return entry->x;
        }
        entry++;
        key += 5;
    }
    return 0;
}
