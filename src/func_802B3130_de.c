#include "span_1000/code_802B7C50.h"
#include "types.h"




extern void func_802B2450_de(void *arg0);
extern void func_802B2480_de(void *arg0, void **arg1);




s32 func_802B3130_de(void *arg0, void **arg1, s16 arg2) {
    s16 var_a2;
    s32 var_s2;
    s32 var_v0;
    void *var_s0;

    var_a2 = arg2;
    var_s0 = ((func_802B8200_S1 *)arg0)->unk14;
    var_s2 = 0;
    if ((var_s0 != 0) || (var_s0 = ((func_802B8200_S1 *)arg0)->unk4, (var_s0 != 0))) {
        *arg1 = var_s0;
        func_802B2450_de(var_s0);
        func_802B2480_de(var_s0, &((func_802B8200_S1 *)(arg0))->unkC);
    } else {
        var_s0 = ((func_802B8200_S1 *)arg0)->unkC;
        var_v0 = var_s2;
        if (var_s0 != 0) {
            do {
                if ((var_a2 >= ((Node_func_802B3130_de *)var_s0)->limit->limit) &&
                    (((Node_func_802B3130_de *)var_s0)->flags == 0)) {
                    *arg1 = var_s0;
                    var_s2 = 1;
                    var_a2 = (s16)(u16)((Node_func_802B3130_de *)var_s0)->limit->limit;
                }
                var_s0 = ((Node_func_802B3130_de *)var_s0)->next;
                var_v0 = var_s2;
            } while (var_s0 != 0);
        }
    }
    return var_s2;
}
