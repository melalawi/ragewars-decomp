#include "span_16E000/code_8044239C.h"
#include "types.h"

/* Sets the word at offset 0x478 of the second argument when the halfword the first starts with
   is 3. */


void func_80442CF4_de(s16 *record, struct Object_func_80442CF4_de *object) {
    if (*record == 3) {
        object->flag = 1;
    }
}
