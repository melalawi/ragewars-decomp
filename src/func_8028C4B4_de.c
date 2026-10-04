#include "common/types.h"
#include "span_1000/code_8028B64C.h"
#include "types.h"



extern void func_80278F00_de(Rec_func_8024C92C_de *arg0);








void func_8028C4B4_de(void *arg0, s32 arg1) {
    Rec_func_8024C92C_de *var_s1;
    Rec_func_8024C92C_de *var_s1_2;
    s32 var_s0;
    s32 var_s0_2;

    var_s0 = ((func_8028C490_S1 *)(arg0))->unk11C0;
    var_s1 = ((func_8028C490_S1 *)(arg0))->unk11D0;
    var_s0 -= 1;
    if (var_s0 != -1) {
        do {
            if (((func_8028C490_S2 *)(var_s1))->unkF == arg1) {
                func_80278F00_de(var_s1);
            }
            var_s0 -= 1;
            var_s1 += 1;
        } while (var_s0 != -1);
    }

    var_s0_2 = ((func_8028C490_S1 *)(arg0))->unk11C4;
    var_s1_2 = ((func_8028C490_S1 *)(arg0))->unk11D4;
    var_s0_2 -= 1;
    if (var_s0_2 != -1) {
        do {
            if (((func_8028C490_S2 *)(var_s1_2))->unkF == arg1) {
                func_80278F00_de(var_s1_2);
            }
            var_s0_2 -= 1;
            var_s1_2 += 1;
        } while (var_s0_2 != -1);
    }
}
