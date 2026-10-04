#include "span_1000/code_8027230C.h"
#include "span_1000/types.h"
#include "span_C76B0/data.h"
#include "types.h"








void func_8027310C_de(void *arg0, void *arg1, f32 arg2) {
    char *o = (char *)arg0;
    f32 zero = 0.0f;
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f3;

    temp_f0 = D_800C48E0_de;
    ((func_80272848_S1 *)(o))->unk3C = temp_f0;
    ((func_80272848_S1 *)(o))->unk28 = temp_f0;
    ((func_80272848_S1 *)(o))->unk0 = temp_f0;
    ((func_80272848_S1 *)(o))->unk38 = zero;
    ((func_80272848_S1 *)(o))->unk34 = zero;
    ((func_80272848_S1 *)(o))->unk30 = zero;
    ((func_80272848_S1 *)(o))->unk2C = zero;
    ((func_80272848_S1 *)(o))->unk24 = zero;
    ((func_80272848_S1 *)(o))->unk20 = zero;
    ((func_80272848_S1 *)(o))->unk1C = zero;
    ((func_80272848_S1 *)(o))->unkC = zero;
    ((func_80272848_S1 *)(o))->unk8 = zero;
    ((func_80272848_S1 *)(o))->unk4 = zero;
    temp_f3 = temp_f0 / ((func_8024C864_S1 *)(arg1))->unk4;
    temp_f2 = ((func_8024C864_S1 *)(arg1))->unk0 * temp_f3;
    temp_f1 = ((func_8024C864_S1 *)(arg1))->unk8 * temp_f3;
    ((func_80272848_S1 *)(o))->unk34 = arg2;
    ((func_80272848_S1 *)(o))->unk14 = zero;
    ((func_80272848_S1 *)(o))->unk10 = -temp_f2;
    ((func_80272848_S1 *)(o))->unk18 = -temp_f1;
    ((func_80272848_S1 *)(o))->unk30 = arg2 * temp_f2;
    ((func_80272848_S1 *)(o))->unk38 = arg2 * temp_f1;
}
