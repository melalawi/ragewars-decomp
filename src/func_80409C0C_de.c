#include "span_16E000/code_80408E1C.h"
#include "span_16E000/types.h"
#include "types.h"

/* Latches D_80153784 to one when the record's team value (D_800E28C8 when D_8015375C is set, otherwise the signed byte at offset 4 of the object at 0x20) is not -1 and both func_802645D0_de and func_80406178_de accept it, then returns D_80153784. */




extern s32 D_8014D4F4;
extern s32 D_8014D4CC;
extern s32 D_800DE878;
extern s32 func_802645D0_de(s32);
extern s32 func_80406178_de(struct Record_func_80409BDC_de *, s32, s32);

static inline s32 func_80409BDC_de(struct Record_func_80409BDC_de *record) {
    if (D_8014D4CC != 0) {
        return D_800DE878;
    }
    return record->inner->unk4;
}

s32 func_80409C0C_de(struct Record_func_80409BDC_de *record) {
    if (D_8014D4F4 == 0) {
        if (func_80409BDC_de(record) != -1) {
            if (func_802645D0_de(func_80409BDC_de(record)) != 0) {
                if (func_80406178_de(record, func_80409BDC_de(record), 0) != 0) {
                    D_8014D4F4 = 1;
                }
            }
        }
    }
    return D_8014D4F4;
}
