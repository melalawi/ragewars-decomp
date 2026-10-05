#include "common/types_8fd754e1e915.h"
#include "span_1000/code_8025D948.h"
#include "types.h"

extern void func_802AFF60_de(s32 arg0, s16 arg1);
extern void func_802AFF90_de(s32 arg0);







void func_8025D928_de(void *arg0) {
    char *o = (char *) arg0;
    f32 temp_f1;
    f32 temp_f2;
    f32 var_f0;
    s32 temp_f3;

    if (((func_8025D948_S1 *)(o))->unk1C & 2) {
        func_802AFF60_de(((func_8025D948_S1 *)(o))->unk14, ((func_8025D948_S1 *)(o))->unk22);
        temp_f3 = (s32) ((f32) ((func_8022A404_S1 *)(o))->unk20 - ((func_8025D948_S1 *)(o))->unk34);
        ((func_8022A404_S1 *)(o))->unk20 = temp_f3;
        if (temp_f3 <= 0) {
            ((func_8022A404_S1 *)(o))->unk20 = 0;
            func_802AFF90_de(((func_8025D948_S1 *)(o))->unk14);
            ((func_8025D948_S1 *)(o))->unk1C |= 4;
        }
    } else if (((func_8025D948_S1 *)(o))->unk38 != 0) {
        temp_f1 = ((func_8025D948_S1 *)(o))->unk3C;
        temp_f2 = ((func_8025D948_S1 *)(o))->unk40;
        if (temp_f2 < temp_f1) {
            var_f0 = temp_f1 - D_800C4000_de;
            if (temp_f2 <= var_f0) {
                goto store;
            }
            goto clamp;
        }
        if (temp_f1 < temp_f2) {
            var_f0 = temp_f1 + (0.01666666753590107f);
            if (var_f0 <= temp_f2) {
                goto store;
            }
clamp:
            var_f0 = temp_f2;
store:
            ((func_8025D948_S1 *)(o))->unk3C = var_f0;
        }
    }
}
