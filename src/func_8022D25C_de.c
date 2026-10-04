#include "span_1000/code_8022D1FC.h"
#include "types.h"




/** Reset two object fields and replace the control word's mode bit. */
void func_8022D25C_de(void *arg0) {
    ((func_8022D204_S1 *)(arg0))->unk100 &= 0xFF7FFFFF;
    ((func_8022D204_S1 *)(arg0))->unk11D8 = 0;
    ((func_8022D204_S1 *)(arg0))->unk11FC = 0;
    ((func_8022D204_S1 *)(arg0))->unk100 |= 0x01000000;
}
