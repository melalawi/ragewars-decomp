#include "span_16E000/code_804434BC.h"
#include "span_16E000/types.h"
#include "types.h"

/* Sets bit 24 of the flag word at offset 0x120 of the object at offset 0xC of a record when
   D_801468F4 is set, and clears it otherwise. */




extern s32 D_80142834;

void func_80443BD4_de(struct Record_func_8040AB54_de *record) {
    if (D_80142834 != 0) {
        record->target->flags |= 0x01000000;
    } else {
        record->target->flags &= ~0x01000000;
    }
}
