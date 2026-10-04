#include "span_16E000/code_80408E1C.h"
#include "span_16E000/types.h"
#include "types.h"

/* Returns D_800E28C8 when D_8015375C is set, otherwise the signed byte at offset 4 of the object
   at offset 0x20 of a record. */




extern s32 D_8014D4CC;
extern s32 D_800DE878;

s32 func_80409BDC_de(struct Record_func_80409BDC_de *record) {
    if (D_8014D4CC != 0) {
        return D_800DE878;
    }
    return record->inner->unk4;
}
