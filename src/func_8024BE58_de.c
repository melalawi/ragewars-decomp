#include "span_1000/code_8024BA6C.h"



/** Set or clear status bit two according to the supplied boolean. */
void func_8024BE58_de(void *object, int enabled) {
    unsigned int *flags = &((func_8024BE48_S1 *)(object))->unk2E0;
    if (enabled) {
        *flags |= 2;
    } else {
        *flags &= ~2U;
    }
}
