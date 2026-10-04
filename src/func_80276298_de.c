#include "span_1000/code_80274A24.h"
#include "types.h"




void func_80276298_de(void *arg0, u16 arg1) {
    u16 temp_s0;
    u16 temp_v1;
    void *temp_a0;

    temp_s0 = ((func_80276284_S1 *)(arg0))->unk0;
    if (temp_s0 == arg1) {
        temp_v1 = ((func_80276284_S1 *)(arg0))->unk2;
        if (temp_v1 & 4) {
            temp_a0 = ((func_80276284_S1 *)(arg0))->unk10;
            ((func_80276284_S1 *)(arg0))->unk2 = temp_v1 & 0xFFFB;
            if (temp_a0 != 0) {
                func_80276298_de(temp_a0, temp_s0);
            }
            temp_a0 = ((func_80276284_S1 *)(arg0))->unk14;
            if (temp_a0 != 0) {
                func_80276298_de(temp_a0, temp_s0);
            }
            temp_a0 = ((func_80276284_S1 *)(arg0))->unk18;
            if (temp_a0 != 0) {
                func_80276298_de(temp_a0, temp_s0);
            }
        }
    }
}
