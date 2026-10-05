#include "common/types_8fd754e1e915.h"
#include "span_1000/code_8024E130.h"





/** Return a nested float field when the nested record type is one, else zero. */
float func_8024E544_de(void *object) {
    void *nested = ((func_80205314_S1 *)(object))->unk18;
    if (*(int *)nested == 1) {
        return ((func_8024E534_S2 *)(nested))->unk50;
    }
    return 0.0f;
}
