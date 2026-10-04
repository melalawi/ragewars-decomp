#include "common/types.h"
#include "span_1000/code_80204A68.h"
typedef struct Owner Owner;



/** Return the nested record's field, or a fallback constant when zero. */
int func_802052F8_de(void *arg0) {
    int temp = ((struct func_80207B5C_S2 *) ((Owner *) arg0)->track)->unk24;
    if (temp != 0) {
        return temp;
    }
    return 0x5334;
}
