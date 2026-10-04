#include "span_166000/code_80426234.h"
#include "types.h"
/* Checks whether the input matches the indexed, XOR-masked reference string. */


s32 func_802BD400_de(u8 *);
extern u8 D_800E1C5C[0x64];

s32 func_8043CD64_de(u8 *arg0) {
    /* FAKEMATCH: retain the input pointer across length and byte-check calls. */
    u8 *input = arg0;
    s32 index = 0;

    if (func_802BD400_de(input) != func_802BD400_de(D_800E1C5C)) {
        return 0;
    }
    for (; index < func_802BD400_de(input); index++) {
        if ((input[index] ^ index) != D_800E1C5C[index]) {
            return 0;
        }
    }
    return 1;
}
