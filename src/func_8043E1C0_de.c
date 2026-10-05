#include "span_16E000/code_8043DF84.h"
#include "types.h"

extern s32 D_801427E0;




/** True if any of three flags inside the D_801468A0 record are set. */
s32 func_8043E1C0_de(void) {
    char *base = (char *)&D_801427E0;
    s32 result;

    result = 0;
    if ((((func_8043E5BC_S1 *)(base))->unk28 != 0) || (((func_8043E5BC_S1 *)(base))->unk1C != 0) || (((func_8043E5BC_S1 *)(base))->unk20 != 0)) {
        result = 1;
    }
    return result;
}
