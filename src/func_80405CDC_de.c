#include "common/types.h"
#include "span_16E000/code_80405454.h"
#include "types.h"
/* Releases object resources and clears their handles. */
#define NULL ((void *)0)

void func_80253838_de(s32, s32);                            




/* extern */

void func_80405CDC_de(struct Shape_typemap_110 *arg0) {
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a1_3;
    s32 temp_a1_4;
    s32 temp_a1_5;
    s32 var_s1;
    s32 var_v1;
    struct Shape_typemap_110 *var_s0;
    struct Shape_typemap_110 *var_v0;

    temp_a1 = arg0->field_4;
    if (temp_a1 != 0) {
        func_80253838_de(0, temp_a1);
    }
    temp_a1_2 = arg0->field_8;
    if (temp_a1_2 != 0) {
        func_80253838_de(0, temp_a1_2);
    }
    temp_a1_3 = arg0->field_18;
    if (temp_a1_3 != 0) {
        func_80253838_de(0, temp_a1_3);
    }
    temp_a1_4 = arg0->field_1C;
    if (temp_a1_4 != 0) {
        func_80253838_de(0, temp_a1_4);
    }
    var_s1 = 0;
    var_s0 = arg0;
    do {
        temp_a1_5 = var_s0->field_C;
        if (temp_a1_5 != 0) {
            func_80253838_de(0, temp_a1_5);
        }
        var_s1 += 1;
        var_s0 = &((func_80405CDC_S1 *)(var_s0))->unk4;
    } while (var_s1 < 3);
    var_v1 = 2;
    var_v0 = &((func_80405CDC_S2 *)(arg0))->unk8;
    arg0->field_0 = 0;
    arg0->field_4 = 0;
    arg0->field_8 = 0;
    arg0->field_18 = 0;
    arg0->field_1C = 0;
    do {
        var_v0->field_C = 0;
        var_v1 -= 1;
        var_v0 = (struct Shape_typemap_110 *)((s32 *)var_v0 - 1);
    } while (var_v1 >= 0);
}
