#include "span_1000/code_80258760.h"
extern int func_8025CED0_de(void *arg0, int arg1, float arg2, int arg3);




int func_80258F10_de(void *arg0, int arg1) {
    float var_f0 = (1.0f);
    float temp_f1 = ((func_80258F30_S1 *)(arg0))->unk2BA8;
    if (!(var_f0 < temp_f1)) {
        var_f0 = temp_f1;
    }
    return func_8025CED0_de(&((func_80258F30_S1 *)(arg0))->unk2BC0, arg1, var_f0, 0x40);
}
