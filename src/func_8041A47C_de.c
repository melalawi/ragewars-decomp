#include "common/types.h"
#include "span_16E000/code_8041A0AC.h"
#include "types.h"

/* Sets the flag word at offset 0x5C that func_8041A488_de clears. */


void func_8041A47C_de(struct Access_s32_5C *object) {
    object->field = 1;
}
