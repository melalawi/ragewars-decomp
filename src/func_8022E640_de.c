#include "span_1000/code_8022D944.h"
#include "types.h"




/* Returns whether a record in state 3 carries type 0x5E29 or 0x5E59, or a type in the range 0x7DA to 0x7DE. Adapted from func_8022E5EC_de with the type constants changed. */

s32 func_8022E640_de(void *arg0) {
    s32 type;

    if (((func_8022E5DC_S1 *)(arg0))->unk650 == 3) {
        type = ((func_8022E5DC_S1 *)(arg0))->unk86C;
        if (type == 0x5E29 || type == 0x5E59) {
            return 1;
        }
    }
    return ((func_8022E5DC_S1 *)(arg0))->unk650 == 3 && ((func_8022E5DC_S1 *)(arg0))->unk86C >= 0x7DA && ((func_8022E5DC_S1 *)(arg0))->unk86C < 0x7DF;
}
