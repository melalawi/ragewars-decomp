#include "span_16E000/code_8043BD50.h"
#include "types.h"

/* Clears the words at offsets 0x10 to 0x18 of a record, then stores the first value through
   func_8043C2F0_de and the next three through func_8043C2F8_de. */
extern void func_8043C2F0_de(s32 *, s32);
extern void func_8043C2F8_de(s32 *, s32, s32, s32);

void func_8043C210_de(s32 *record, s32 first, s32 second, s32 third, s32 fourth) {
    record[4] = 0;
    record[5] = 0;
    record[6] = 0;
    func_8043C2F0_de(record, first);
    func_8043C2F8_de(record, second, third, fourth);
}
