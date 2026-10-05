#include "span_1000/code_8022C894.h"
#include "types.h"

extern void func_8044A07C_de(s32 arg0);




void func_8022D214_de(void *arg0) {
    ((func_8022D204_S1 *)(arg0))->unk100 &= 0xFF7FFFFF;
    ((func_8022D204_S1 *)(arg0))->unk11D8 = 0;
    ((func_8022D204_S1 *)(arg0))->unk11FC = 0;
    ((func_8022D204_S1 *)(arg0))->unk100 |= 0x01000000;
    func_8044A07C_de((s32) arg0);
}
