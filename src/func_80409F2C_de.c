#include "span_16E000/code_80408E1C.h"
#include "span_16E000/types.h"
#include "types.h"

/* Passes func_80404E28_de D_800E28C8 when D_8015375C is set, otherwise the signed byte at offset 4 of
   the object at offset 0x20 of a record. */




extern s32 D_8014D4CC;
extern s32 D_800DE878;
extern void func_80404E28_de(s32);

void func_80409F2C_de(struct Record_func_80409BDC_de *record) {
    s32 value;

    if (D_8014D4CC != 0) {
        value = D_800DE878;
    } else {
        value = record->inner->unk4;
    }
    func_80404E28_de(value);
}
