#include "span_1000/code_802508E0.h"





/** Select one of two signed bytes according to a doubled nested count. */
int func_80250DE0_de(void *object) {
    void *nested = ((func_80250D88_S1 *)(object))->unk18;
    if (((func_80250D88_S1 *)(object))->unkDC <
        ((func_80250D88_S2 *)(nested))->unk24 * 2) {
        return ((func_80250D88_S2 *)(nested))->unkE;
    }
    return ((func_80250D88_S2 *)(nested))->unkF;
}
