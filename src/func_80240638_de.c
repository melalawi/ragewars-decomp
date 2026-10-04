#include "common/types.h"
#include "span_1000/code_8023ECAC.h"





/** Order two records by their scalar at offset four. */
int func_80240638_de(void *left, void *right) {
    return ((func_802077F4_S2 *)(left))->unk4 < ((func_802077F4_S2 *)(right))->unk4 ? -1 : 1;
}
