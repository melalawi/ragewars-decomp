#include "basetypes.h"

/* Stores a value into the first word of a record; func_8043C4D8, which follows it, fills the
   words after it. */
void func_8043C4D0(s32 *record, s32 value) {
    record[0] = value;
}
