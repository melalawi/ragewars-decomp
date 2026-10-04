#include "span_1000/code_802301E4.h"
#include "span_1000/types.h"
#include "types.h"

extern s32 func_802744D4_de(void);
extern s32 func_8022EB0C_de(void *arg0, s32 arg1);




s32 func_80232ABC_de(void *arg0) {
    s32 var_s1;
    s32 var_s0;

    var_s1 = ((func_8022BECC_S1 *)(arg0))->unk62E;
    var_s0 = func_802744D4_de() % 22;
    if (var_s0 >= 0) {
        do {
            var_s1 += 1;
            if (var_s1 >= 0x10) {
                var_s1 = 0;
            }
            if (func_8022EB0C_de(arg0, var_s1) != 0) {
                var_s0 -= 1;
            }
        } while (var_s0 >= 0);
    }
    return var_s1;
}
