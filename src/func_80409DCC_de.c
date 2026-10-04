#include "span_16E000/code_80408E1C.h"
#include "span_16E000/types.h"
#include "span_C76B0/data.h"
#include "types.h"

/* Latches D_80146D60 and D_800E28CC to one the first time bit 12 of the word at offset 0xB0 of the
   object at 0x20 of a record is seen set, and returns D_80146D60. */




extern s32 D_80142CA0_de;


s32 func_80409DCC_de(struct Record_func_80409DCC_de *record) {
    if ((record->inner->unkB0 & 0x1000) && D_800DE87C_de == 0) {
        D_80142CA0_de = 1;
        D_800DE87C_de = 1;
    }
    return D_80142CA0_de;
}
