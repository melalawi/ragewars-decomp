#include "span_1000/code_80242BE0.h"
#include "types.h"

extern void func_8026F620_de(void *, void *, void *);
extern char *func_8028FDB4_de(s32 *, s32);
extern void func_80242FE8_de(void *arg0, void *arg1);






void func_80243874_de(void *arg0) {
    void *temp_a1;
    void **temp_s0;
    void *temp_s0_2;
    s32 *temp_v0;
    s32 temp_s1;
    s32 var_s0;

    temp_a1 = ((func_80243864_S1 *)(arg0))->unk58;
    temp_s0 = ((func_80243864_S2 *)(temp_a1))->unkB4;
    if (temp_s0 != 0) {
        func_8026F620_de(&((func_80243864_S1 *)(arg0))->unk64, &((func_80243864_S2 *)(temp_a1))->unk68, (char *) arg0 + 0xC);
        temp_s0_2 = *temp_s0;
        ((func_80243864_S1 *)(arg0))->unkA4 = func_8028FDB4_de(temp_s0_2, 0);
        temp_v0 = func_8028FDB4_de(temp_s0_2, 2);
        temp_s1 = *temp_v0;
        var_s0 = 0;
        if (temp_s1 > 0) {
            do {
                func_80242FE8_de(arg0, func_8028FDB4_de((void *) temp_v0, var_s0));
                var_s0 += 1;
            } while (var_s0 < temp_s1);
        }
    }
}
