#include "common/types_1dc8418c21db.h"
#include "span_1000/code_8025C544.h"
#include "span_1000/code_8025D948.h"
#include "span_1000/code_80255BEC.h"
#include "types.h"


extern void func_80255ED8_de(void *, s32);








s32 func_8025CA24_de(void *arg0, void *arg1) {
    void *var_s0;

    if (arg1 == 0) {
        return 0;
    }

    var_s0 = ((func_8025CA44_S1 *)(arg0))->unk14.head;
    if (var_s0 != 0) {
        do {
            if (var_s0 == arg1) {
                func_8025E174_de(((func_8025CA44_S2 *)(var_s0))->unk8);
                D_800CBB14 = ((func_8025CA44_S2 *)(var_s0))->unk8;
                func_80255ED8_de(&((func_8025CA44_S1 *)(arg0))->unk14, (s32)var_s0);
                func_80255D14_de(arg0, var_s0);
                return 1;
            }
            var_s0 = ((func_8025CA44_S2 *)(var_s0))->unk4;
        } while (var_s0 != 0);
    }
    return 0;
}
