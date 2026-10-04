#include "common/types.h"
#include "span_1000/code_80283D24.h"





/** Return offset 0x180 only when the nested state word is zero. */
float func_8028489C_de(void *arg0) {
    void *inner = ((func_80284870_S1 *)(arg0))->unk118;
    if (((func_80204468_S3 *)(inner))->unk14 != 0) {
        return 0.0f;
    }
    return ((func_80284870_S1 *)(arg0))->unk180;
}
