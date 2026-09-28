#include "basetypes.h"

/* Resets a 0x44-byte record: clears it through func_802A101C, initialises the two lists at offsets
   0xC and 0x20 through func_80255C40 with 0x16DC and 0x16E0, and clears the words at 0 to 8 and
   0x34 to 0x40. */
extern void func_802A101C(void *, s32, s32);
extern void func_80255C40(void *, s32, s32);

void func_8044AA00(s32 *record) {
    func_802A101C(record, 0, 0x44);
    func_80255C40(record + 3, 0x16DC, 0x16E0);
    func_80255C40(record + 8, 0x16DC, 0x16E0);
    record[0] = 0;
    record[1] = 0;
    record[2] = 0;
    record[13] = 0;
    record[14] = 0;
    record[15] = 0;
    record[16] = 0;
}
