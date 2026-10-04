#include "common/types.h"
#include "span_1000/code_80263754.h"



/** Report whether flag 0x1000 is set in the word at offset 0xB4. */
int func_8026435C_de(void *object) {
    int flags = ((Shared_Effect *)(object))->state & 0x1000;
    return flags != 0;
}
