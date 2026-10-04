#include "span_1000/code_8024DF4C.h"
#include "span_1000/types.h"





/** Return a nested float field when the nested record type is one, else zero. */
float func_8024E570_de(void *object) {
    void *nested = ((func_80205314_S1 *)(object))->unk18;
    if (*(int *)nested == 1) {
        return ((func_8024E560_S2 *)(nested))->unk3C;
    }
    return 0.0f;
}
