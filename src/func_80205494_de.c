#include "span_1000/code_80204A68.h"
#include "span_1000/types.h"







/** Clear two flags when the controlling byte and nested flag are set. */
void func_80205494_de(void *arg0, void *arg1) {
    char *nested = ((func_80205494_S1 *)(arg0))->unk18;
    if (((func_80205494_S2 *)(arg1))->unkCB != 0 &&
        (((func_80205494_S3 *)(nested))->unk14 & 0x4) != 0) {
        unsigned int flags = ((func_80205494_S1 *)(arg0))->unk100;
        flags &= ~0x2000;
        flags &= ~0x100;
        ((func_80205494_S1 *)(arg0))->unk100 = flags;
    }
}
