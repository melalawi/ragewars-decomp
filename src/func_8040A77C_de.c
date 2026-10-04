#include "span_16E000/code_8040A4BC.h"
#include "types.h"

/* Clears bits 23 and 24 of the flag words at offsets 0xA8 and 0xD0 of the object at offset 0xC
   of a record, clearing D_80153730 and setting D_80153774 between the two. */




extern s32 D_8014D4A0;
extern s32 D_8014D4E4;

void func_8040A77C_de(struct Record_func_8040A77C_de *record) {
    record->target->first &= ~0x01800000;
    D_8014D4A0 = 0;
    D_8014D4E4 = 1;
    record->target->second &= ~0x01800000;
}
