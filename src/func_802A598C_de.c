#include "common/types.h"
#include "span_1000/code_802A6488.h"
#include "types.h"
















void func_802A598C_de(Owner802A697C *owner, int object) {
    float temp_f1;
    u8 temp_v0;
    u8 temp_v0_2;
    void *temp_a0;
    void *temp_a0_2;
    void *var_v1;

    var_v1 = owner->head;
    if (var_v1 != 0) {
        do {
            temp_a0 = ((func_802A697C_S1 *)(var_v1))->unk1C;
            if ((int)temp_a0 == object) {
                if (temp_a0 != 0) {
                    if (((func_802A697C_S1 *)(var_v1))->unk3C & 1) {
                        temp_v0 = ((func_802A697C_S2 *)(temp_a0))->unk13B;
                        if (temp_v0 != 0) {
                            ((func_802A697C_S2 *)(temp_a0))->unk13B = (u8)(temp_v0 - 1);
                        }
                    }
                    if (((func_802A697C_S1 *)(var_v1))->unk3C & 2) {
                        temp_a0_2 = ((func_802A697C_S1 *)(var_v1))->unk1C;
                        temp_v0_2 = ((func_802A697C_S3 *)(temp_a0_2))->unk1D9;
                        if (temp_v0_2 != 0) {
                            ((func_802A697C_S3 *)(temp_a0_2))->unk1D9 = (u8)(temp_v0_2 - 1);
                        }
                    }
                }
                ((func_802A697C_S1 *)(var_v1))->unk1C = 0;
                temp_f1 = ((func_802077F4_S2 *)(((func_802A697C_S1 *)(var_v1))->unk8))->unk4;
                if (((func_802A697C_S1 *)(var_v1))->unk24 < temp_f1) {
                    ((func_802A697C_S1 *)(var_v1))->unk24 = temp_f1;
                }
            }
            var_v1 = ((func_802A697C_S1 *)(var_v1))->unk4;
        } while (var_v1 != 0);
    }
}
