#include "span_1000/code_80204A68.h"



/** Update the floating state at offsets 0x40 and 0x64 under its range rules. */
void func_80204F78_de(void *unused, char *object, float value) {
    if (value == 0.0f || ((func_80204F78_S1 *)(object))->unk64 < value) {
        if (((func_80204F78_S1 *)(object))->unk64 == 0.0f) {
            ((func_80204F78_S1 *)(object))->unk40 = 0.0f;
        }
        ((func_80204F78_S1 *)(object))->unk64 = value;
    }
}
