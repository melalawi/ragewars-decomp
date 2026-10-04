#include "span_1000/code_8025C67C.h"
#include "types.h"

extern s32 func_8025E0F4_de(s32 arg0);






void func_8025CB88_de(void *arg0) {
    void *var_s0;

    if (((func_8025CAD0_S1 *)(arg0))->unk28 == 0) {
        var_s0 = ((func_8025CAD0_S1 *)(arg0))->unk14;
        if (var_s0 != 0) {
            do {
                if (func_8025E0F4_de(((func_8025CBA8_S2 *)(var_s0))->unk8) == 0) {
                    ((func_8025CBA8_S2 *)(var_s0))->unkC = -1;
                    ((func_8025CBA8_S2 *)(var_s0))->unk8 = -1;
                }
                var_s0 = ((func_8025CBA8_S2 *)(var_s0))->unk4;
            } while (var_s0 != 0);
        }
    }
}
