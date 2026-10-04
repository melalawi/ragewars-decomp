#include "span_1000/code_802688AC.h"
#include "span_1000/types.h"
#include "types.h"

extern void func_80255ED8_de(void *, s32);
extern s32 func_80255CB8_de(void *, s32);







void *func_80268C1C_de(void *arg0, void *arg1) {
    void *temp_s0;

    temp_s0 = ((func_8025CA44_S1 *)(arg0))->unk14.v0;
    if (temp_s0 != 0) {
        func_80255ED8_de(&((func_8025CA44_S1 *)(arg0))->unk14.v1, (s32)temp_s0);
        func_80255CB8_de(arg0, (s32)temp_s0);
        ((func_80268C1C_S2 *)(temp_s0))->unk8 = arg1;
        ((func_80268C1C_S2 *)(temp_s0))->unk16 = 0;
    }
    return temp_s0;
}
