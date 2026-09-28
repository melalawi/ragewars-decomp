#include "basetypes.h"

/* Clears the words at offsets 0x10 to 0x18 of a record, then stores the first value through
   func_8043C4D0 and the next three through func_8043C4D8. */
extern void func_8043C4D0(s32 *, s32);
extern void func_8043C4D8(s32 *, s32, s32, s32);

void func_8043C3F0(s32 *record, s32 first, s32 second, s32 third, s32 fourth) {
    record[4] = 0;
    record[5] = 0;
    record[6] = 0;
    func_8043C4D0(record, first);
    func_8043C4D8(record, second, third, fourth);
}
