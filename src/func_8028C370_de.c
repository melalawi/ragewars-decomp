#include "span_1000/code_8028B64C.h"
#include "types.h"

extern void func_80278E7C_de(void *arg0);








void func_8028C370_de(void *arg0, s32 arg1) {
    s32 var_s0;
    s32 var_s0_2;
    void *var_s1;
    void *var_s1_2;

    var_s0 = ((func_8028C34C_S1 *)(arg0))->unk11C0;
    var_s1 = ((func_8028C34C_S1 *)(arg0))->unk11D0;
    var_s0 -= 1;
    if (var_s0 != -1) {
        do {
            if (((func_8028C34C_S2 *)(var_s1))->unkF == arg1) {
                func_80278E7C_de(var_s1);
            }
            var_s0 -= 1;
            var_s1 = &((func_8028C34C_S2 *)(var_s1))->unk14;
        } while (var_s0 != -1);
    }
    var_s1_2 = ((func_8028C34C_S1 *)(arg0))->unk11D4;
    var_s0_2 = ((func_8028C34C_S1 *)(arg0))->unk11C4;
    var_s0_2 -= 1;
    if (var_s0_2 != -1) {
        do {
            if (((func_8028C34C_S2 *)(var_s1_2))->unkF == arg1) {
                func_80278E7C_de(var_s1_2);
            }
            var_s0_2 -= 1;
            var_s1_2 = &((func_8028C34C_S2 *)(var_s1_2))->unk14;
        } while (var_s0_2 != -1);
    }
}
