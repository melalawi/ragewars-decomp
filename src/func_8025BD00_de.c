#include "common/types.h"
#include "span_1000/code_8025AE3C.h"
#include "span_1000/types.h"
#include "span_C76B0/data.h"
#include "types.h"

extern s32 D_800CBAFC;


extern void func_8025AE1C_de(void *arg0);








void func_8025BD00_de(void **arg0) {
    s32 var_s0;
    s32 var_s2;
    char *var_s1;

    var_s2 = 0;
    var_s1 = &((func_8025BD20_S1 *)(arg0))->unk4;
    var_s0 = 0;
    do {
        if (((func_80254D70_S2 *)(var_s1))->unk8 != -1 && ((Header_func_8025B5F0_de *)(*arg0))->local != var_s0) {
            func_8025AE1C_de(var_s1);
            var_s2 += 1;
        }
        var_s0 += 1;
        var_s1 += 0xCC;
    } while (var_s0 < 0x10);
    D_800CBAFC = var_s2;
    if (D_800CBB00 < var_s2) {
        D_800CBB00 = var_s2;
    }
}
