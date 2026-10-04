#include "span_1000/code_80203B1C.h"
#include "span_C76B0/data.h"





/** Clear two flag groups when the object's 0x1B0 field exceeds a tunable. */
void func_80204738_de(void *object) {
    if (((func_80204738_S1 *)(object))->unk1B0 > D_800C1A70_de) {
        int flags = ((func_80204738_S1 *)(object))->unk100;
        flags &= ~0x2000;
        flags &= ~0x100;
        ((func_80204738_S1 *)(object))->unk100 = flags;
    }
}
