#include "span_1000/code_8020570C.h"
#include "span_1000/types.h"







/** Copy the source byte at offset 7 into two fields under object offset 0x18. */
void func_80206930_de(void *arg0, int arg1, void *arg2) {
    void *inner = ((func_80205314_S1 *)(arg0))->unk18;
    ((func_80206930_S2 *)(inner))->unkE = ((func_80206930_S3 *)(arg2))->unk7;
    inner = ((func_80205314_S1 *)(arg0))->unk18;
    ((func_80206930_S2 *)(inner))->unk10 = ((func_80206930_S3 *)(arg2))->unk7;
}
