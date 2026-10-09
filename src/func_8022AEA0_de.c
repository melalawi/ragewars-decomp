#include "common/types_8fd754e1e915.h"
#include "span_1000/code_8022AE90.h"
#include "types.h"

extern void *func_8025CC6C_de(void);
extern s32 func_8025CA24_de(void *, void *);
extern void *func_8025C95C_de(void *, s32, void *, void *, s32);

extern s32 D_80146894;




void func_8022AEA0_de(void *arg0, s32 arg1) {
    s32 field5DC;
    void *var_s1;

    field5DC = ((func_8022AE90_S1 *)(arg0))->unk5DC;
    if (field5DC != 0) {
        var_s1 = (void *)(field5DC + 0x128);
    } else {
        var_s1 = &((func_8022AE90_S1 *)(arg0))->unk8;
    }
    if (D_801371DC == 0 && D_80146894 == 0) {
        func_8025CA24_de(func_8025CC6C_de(), ((func_8022AE90_S1 *)(arg0))->unk11BC);
        ((func_8022AE90_S1 *)(arg0))->unk11BC = (s32)func_8025C95C_de((void *)func_8025CC6C_de(), arg1, var_s1, var_s1, (s32)arg0);
    }
}
