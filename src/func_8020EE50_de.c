#include "span_1000/code_8020EAE0.h"
#include "types.h"






void func_8020EE50_de(void) {
    void *var_a0;
    f32 k;

    var_a0 = D_801372C8;
    if (var_a0 != 0) {
        k = D_800C1EE0_de;
        do {
            ((func_8020EE50_S1 *)(var_a0))->unk18 =
                ((func_8020EE50_S1 *)(var_a0))->unk18 +
                (f32) (((func_8020EE50_S1 *)(var_a0))->unk38 * 0x1E) * k;
            var_a0 = ((func_8020EE50_S1 *)(var_a0))->unk10;
        } while (var_a0 != 0);
    }
}
