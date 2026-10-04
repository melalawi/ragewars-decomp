#include "span_16E000/code_8043E364.h"
#include "span_16E000/types.h"
#include "types.h"
/* Returns 1 if any of D_801468A0's unk1C, unk20 or unk28 fields is nonzero, otherwise 0. */



extern State_func_8043E254_de D_801427E0;

s32 func_8043E5D8_de(void) {
    State_func_8043E254_de *s = &D_801427E0;
    s32 result;

    result = 0;
    if ((s->unk28 != 0) || (s->unk1C != 0) || (s->unk20 != 0)) {
        result = 1;
    }
    return result;
}
