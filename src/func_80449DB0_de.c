#include "span_16E000/code_80447BB0.h"
#include "types.h"

/* Resets a 0x44-byte record: clears it through func_802A001C_de, initialises the two lists at offsets
   0xC and 0x20 through func_80255CA0_de with 0x16DC and 0x16E0, and clears the words at 0 to 8 and
   0x34 to 0x40. */
extern void func_802A001C_de(void *, s32, s32);
extern void func_80255CA0_de(void *, s32, s32);

void func_80449DB0_de(s32 *record) {
    func_802A001C_de(record, 0, 0x44);
    func_80255CA0_de(record + 3, 0x16DC, 0x16E0);
    func_80255CA0_de(record + 8, 0x16DC, 0x16E0);
    record[0] = 0;
    record[1] = 0;
    record[2] = 0;
    record[13] = 0;
    record[14] = 0;
    record[15] = 0;
    record[16] = 0;
}
