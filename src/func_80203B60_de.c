#include "common/types_06e4f7ef1f9e.h"
#include "span_1000/code_802022E0.h"
#include "types.h"

extern s32 func_802170A0_de(void *arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4);
extern void func_80285DB0_de(void *, void *, s32);
extern void func_80278D78_de(void *arg0, s32 arg1, void *arg2);

extern s32 D_8011FE88;








void func_80203B60_de(void *arg0, void *arg1) {
    char *o0 = (char *) arg0;
    char *o1 = (char *) arg1;
    char *tmp;
    s32 masked;
    s32 *pFlag;

    tmp = ((func_80203B60_S1 *)(o0))->unk18 + 0x14;
    func_802170A0_de(arg0, arg1, 4, ((func_80203B60_S2 *)(tmp))->unkC, ((func_80203B60_S2 *)(tmp))->unk10);
    pFlag = &D_8011FE88;
    ((func_80203B60_S3 *)(o1))->unk110 = 0;
    func_80285DB0_de(pFlag, arg0, 1);
    func_80278D78_de(arg0, 1, arg0);
    masked = ((func_80203B60_S1 *)(o0))->unk100 & 0xFFFEFFFF;
    ((func_80203B60_S1 *)(o0))->unk100 = masked;
    if (*pFlag != 4) {
        ((func_80203B60_S1 *)(o0))->unk100 = masked | 0x08000000;
    }
}
