#include "common/types.h"
#include "span_1000/code_8020570C.h"
#include "span_1000/types.h"
#include "types.h"

extern int D_00206018;
extern int D_800C854C;








void func_80205EC4_de(void *arg0, void *arg1) {
    void *inner = ((func_80203908_S1 *)(arg0))->unk18;

    ((func_80204BB4_S1 *)(arg1))->unk2C = &D_800C854C;
    ((func_80204BB4_S1 *)(arg1))->unk108 = &D_00206018;
    if ((((func_80203908_S1 *)(arg0))->unkE4 == 0x644) ||
        (((func_80204468_S3 *)(inner))->unk14 & 8)) {
        ((func_80203908_S1 *)(arg0))->unk100 &= ~0x2000;
    }
}
