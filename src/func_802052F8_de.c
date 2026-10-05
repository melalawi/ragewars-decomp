#include "common/types_06e4f7ef1f9e.h"
#include "common/types_1dc8418c21db.h"
#include "span_1000/code_80204E78.h"
#include "common/types_8fd754e1e915.h"

typedef struct Owner Owner;



/** Return the nested record's field, or a fallback constant when zero. */
int func_802052F8_de(void *arg0) {
    int temp = ((struct func_80207B5C_S2 *) ((Owner *) arg0)->track)->unk24;
    if (temp != 0) {
        return temp;
    }
    return 0x5334;
}

int func_80205314_de(void *arg0) {
    return ((func_80205314_S2 *)((((func_80205314_S1 *)(arg0))->unk18)))->unk2C;
}
