#include "span_16E000/code_8043BD50.h"
#include "types.h"

/* Sets the words at offsets 0x10, 0x14 and 0x18 of a record to one, zero and one, then calls
   func_8025DF34_de with 0xE83. */
extern void func_8025DF34_de(s32);

void func_8043C278_de(s32 *record) {
    record[4] = 1;
    record[5] = 0;
    record[6] = 1;
    func_8025DF34_de(0xE83);
}
