#include "span_1000/code_8023D370.h"
#include "types.h"

extern void *jtbl_800C36A0[];











extern Output *D_800FFFCC;

void func_8023E45C_de(Input *arg0) {
    {
        static void *sw_type_labels[0] __attribute__((section(".sdata"))) = {
            &&sw_type_1, &&sw_type_2, &&sw_type_3, &&sw_type_4, &&sw_type_5, &&sw_type_6, &&sw_type_7, &&sw_type_8, &&sw_type_9, &&sw_type_default
        };
        s32 type = arg0->type;
        s32 sw_type_value = type - 1;
        if ((unsigned int)sw_type_value > 8) {
            goto sw_type_default;
        }
        goto *jtbl_800C36A0[sw_type_value];
    }
    do {
    sw_type_1:
        D_800FFFCC->instance0 = arg0->instance104;
        if (arg0->instance104 != 0) {
            D_800FFFCC->instanceValue4 = arg0->instance104->field14;
        } else {
            D_800FFFCC->instanceValue4 = 0;
        }
        D_800FFFCC->vec8 = arg0->vec180;
        D_800FFFCC->field14 = -1;
        break;
    sw_type_2:
        if (arg0->instance104 != 0) {
            D_800FFFCC->fieldC4 = arg0->instance104->field14;
        } else {
            D_800FFFCC->fieldC4 = 0;
        }
        D_800FFFCC->vecC8 = arg0->vec180;
        D_800FFFCC->fieldD4 = arg0->fieldBC;
        break;
    sw_type_3:
        D_800FFFCC->instance0 = arg0->instance104;
        D_800FFFCC->instanceValue4 = arg0->instance104->field14;
        D_800FFFCC->vec8 = arg0->vec180;
        D_800FFFCC->field14 = -1;
        break;
    sw_type_4:
        D_800FFFCC->instance0 = arg0->instance104;
        D_800FFFCC->instanceValue4 = arg0->instance104->field14;
        D_800FFFCC->vec8 = arg0->vec180;
        D_800FFFCC->field14 = arg0->field108;
        D_800FFFCC->block18 = arg0->block10C;
        break;
    sw_type_5:
        D_800FFFCC->instance88 = arg0->instance104;
        D_800FFFCC->instanceValue8C = arg0->instance104->field14;
        D_800FFFCC->vec90 = arg0->vec180;
        break;
    sw_type_6:
    sw_type_7:
    sw_type_8:
    sw_type_9:
        break;
    
    sw_type_default:;
    } while (0);
    D_800FFFCC->vecF0 = arg0->vecF8;
    D_800FFFCC->vecE4 = arg0->vec180;
    D_800FFFCC->typeFC = arg0->type;
    D_800FFFCC->field100 = arg0->fieldC0;
}
