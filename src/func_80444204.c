#include "basetypes.h"

/* Resets the byte fields from offset 0x78 of a record, sets 0x79 to 0x86, 0x7A to 0x84 and 0x7D to
   one, stores the second argument at 0x7F, and calls func_80444260 on the record. */
extern void func_80444260(u8 *);

void func_80444204(u8 *record, u8 value) {
    record[0x79] = 0x86;
    record[0x7A] = 0x84;
    record[0x78] = 0;
    record[0x7C] = 0;
    record[0x7B] = 0;
    record[0x7D] = 1;
    record[0x7E] = 0;
    record[0x7F] = value;
    record[0x80] = 0;
    record[0x82] = 0;
    record[0x83] = 0;
    record[0x81] = 0;
    record[0x94] = 0;
    record[0x95] = 0;
    func_80444260(record);
}
