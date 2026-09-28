#include "basetypes.h"

/* Sets the words at offsets 0x10, 0x14 and 0x18 of a record to one, zero and one, then calls
   func_8025DF54 with 0xE83. */
extern void func_8025DF54(s32);

void func_8043C458(s32 *record) {
    record[4] = 1;
    record[5] = 0;
    record[6] = 1;
    func_8025DF54(0xE83);
}
