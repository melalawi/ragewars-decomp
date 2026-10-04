#include "common/types.h"
#include "span_1000/code_80204A68.h"
#include "types.h"

extern void func_8026DC24_de(void * *, s32, s32, void *, s32, s32);
extern s32 D_800CD72C;








void func_80205628_de(void *arg0, void *arg1, void *arg2) {
    ((func_80205628_S1 *)(arg0))->unk17C = 1 << ((func_80205628_S2 *)(arg1))->unk124;
    if (*(s32 *) arg2 != 0) {
        func_8026DC24_de(((func_80205628_S3 *)(arg2))->unkC, ((func_80205628_S1 *)(arg0))->unkB4, 1,
                      (char *) arg0 + (D_800CD72C * 0x18 + 0x140), 0, ((func_80205628_S2 *)(arg1))->unk128);
    }
}
