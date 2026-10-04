#include "span_16E000/code_8040A4BC.h"
#include "types.h"

/* Loads a text into the block D_8014561C through func_80442574_de from the record's words at 0x1C and
   0x20: from the resource D_44F100 when D_80153780 is set, otherwise from the record's word at 0x24.
   Returns one. */


extern s32 D_8014D4F0;
extern char D_8014155C[];
extern char D_0044E4B0[];
extern void func_80442574_de(void *, void *, s32, s32, s32);

s32 func_8040A6DC_de(void *unused, struct Record_func_8040A6DC_de *record) {
    do {
        if (D_8014D4F0 != 0) {
            func_80442574_de(D_8014155C, D_0044E4B0, record->first, record->second, 0);
        } else {
            func_80442574_de(D_8014155C, record->resource, record->first, record->second, 0);
        }
    } while (0);
    return 1;
}
