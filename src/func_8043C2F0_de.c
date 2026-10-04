#include "span_16E000/code_8043BD50.h"
#include "types.h"

/* Stores a value into the first word of a record; func_8043C2F8_de, which follows it, fills the
   words after it. */
void func_8043C2F0_de(s32 *record, s32 value) {
    record[0] = value;
}
