#include "span_16E000/code_8043BD50.h"
#include "types.h"

/* Advances the counter at offset 0x14 of a record by the step at 0x10; once it reaches 0xD both
   are cleared and the state word at 0x18 becomes 2. */
void func_8043C2A4_de(s32 *record) {
    record[5] += record[4];
    if (record[5] >= 0xD) {
        record[5] = 0;
        record[4] = 0;
        record[6] = 2;
    }
}
