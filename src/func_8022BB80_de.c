#include "common/types.h"
#include "span_1000/code_8022B500.h"
#include "span_C76B0/data.h"
#include "types.h"

extern void func_8028B274_de(void *arg0, void *arg1, s32 arg2, s32 arg3);
extern u8 D_80142208_de[];


extern char D_8011BDC8;










void func_8022BB80_de(void *arg0) {
    s32 var_a2;
    u8 *base;

    base = D_80142208_de;
    if (base[0x1D] == 0) {
        var_a2 = 0x66;
    } else if (((func_8022BB70_S1 *)(base))->unk62C != 0 && ((func_8021C9B4_S2 *)(((func_8022BB70_S2 *)(arg0))->unk5D8))->unk8F != 0) {
        var_a2 = D_800C922C;
    } else {
        var_a2 = D_800C91E0_de[((func_8021C9B4_S3 *)(((func_8022BB70_S2 *)(arg0))->unk18))->unkC];
        ((func_8022BB70_S2 *)(arg0))->unk3 = ((func_8021C9B4_S2 *)(((func_8022BB70_S2 *)(arg0))->unk5D8))->unk81;
    }
    func_8028B274_de(&D_8011BDC8, arg0, var_a2, ((func_8022BB70_S2 *)(arg0))->unk86C);
}
