#include "basetypes.h"

/* Stores three values into words 1 to 3 of a record; func_8043C4D0 stores word 0. */
void func_8043C4D8(s32 *record, s32 first, s32 second, s32 third) {
    record[1] = first;
    record[2] = second;
    record[3] = third;
}
