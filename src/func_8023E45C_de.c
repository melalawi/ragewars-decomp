#include "span_1000/code_8023CBB0.h"
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

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned int unbake_rodata_800C35D0_24[] = {0x0023E464U, 0x0023E464U, 0x0023E464U, 0x0023E464U, 0x0023E4B8U, 0x0023E618U, 0x0023E518U, 0x0023E560U, 0x0023E5E4U};
#elif defined(VERSION_US_REV1)
const unsigned int unbake_rodata_800C8790_24[] = {0x0023E474U, 0x0023E474U, 0x0023E474U, 0x0023E474U, 0x0023E4C8U, 0x0023E628U, 0x0023E528U, 0x0023E570U, 0x0023E5F4U};
#elif defined(VERSION_EU)
const unsigned int unbake_rodata_800C3950_24[] = {0x0023E494U, 0x0023E494U, 0x0023E494U, 0x0023E494U, 0x0023E4E8U, 0x0023E648U, 0x0023E548U, 0x0023E590U, 0x0023E614U};
#elif defined(VERSION_EU_X)
const unsigned int unbake_rodata_800C3990_24[] = {0x0023E4C4U, 0x0023E4C4U, 0x0023E4C4U, 0x0023E4C4U, 0x0023E518U, 0x0023E678U, 0x0023E578U, 0x0023E5C0U, 0x0023E644U};
#elif defined(VERSION_DE)
const unsigned int unbake_rodata_800C36A0_24[] = {0x0023E484U, 0x0023E484U, 0x0023E484U, 0x0023E484U, 0x0023E4D8U, 0x0023E638U, 0x0023E538U, 0x0023E580U, 0x0023E604U};
#endif
