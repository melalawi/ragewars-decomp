#include "span_1000/code_8022B500.h"
#include "span_1000/types.h"





/** Report whether the nested pointer's word at 0x564 is nonzero. */
int func_8022BAA0_de(void *object) {
    void *nested = ((func_80228774_S5 *)(object))->unk5DC;
    if (nested != 0) {
        return ((func_8021CD70_S4 *)(nested))->unk564 != 0;
    }
    return 0;
}
