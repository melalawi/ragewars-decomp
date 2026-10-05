#include "span_1000/code_8025C544.h"
#include "types.h"

extern s32 func_8025DE54_de(s16 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);







void func_8025CB0C_de(void *arg0) {
    s32 temp_v0;
    void *var_s0;

    var_s0 = ((func_8025CAD0_S1 *)(arg0))->unk14;
    if (var_s0 != 0) {
        do {
            temp_v0 = func_8025DE54_de(((func_8025CB2C_S2 *)(var_s0))->unkE,
                                     ((func_8025CB2C_S2 *)(var_s0))->unk10,
                                     ((func_8025CB2C_S2 *)(var_s0))->unk14,
                                     ((func_8025CB2C_S2 *)(var_s0))->unk18,
                                     ((func_8025CB2C_S2 *)(var_s0))->unk1C,
                                     -1);
            ((func_8025CB2C_S2 *)(var_s0))->unk8 = temp_v0;
            var_s0 = ((func_8025CB2C_S2 *)(var_s0))->unk4;
            D_800CBB1C = temp_v0;
        } while (var_s0 != 0);
    }
    ((func_8025CAD0_S1 *)(arg0))->unk28 = 0;
}
