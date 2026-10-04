#include "span_16E000/code_8043BD50.h"
#include "types.h"

/* Stores three values into words 1 to 3 of a record; func_8043C2F0_de stores word 0. */
void func_8043C2F8_de(s32 *record, s32 first, s32 second, s32 third) {
    record[1] = first;
    record[2] = second;
    record[3] = third;
}
