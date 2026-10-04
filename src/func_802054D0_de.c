#include "common/types.h"
#include "span_1000/code_80204A68.h"
typedef struct Owner Owner;



/** Return the word at offset 0x40 through the pointer stored at offset 0x18. */
int func_802054D0_de(void *object) {
    return ((struct Access_s32_40 *) ((Owner *) object)->track)->field;
}
