#include "basetypes.h"

extern void *jtbl_800C8790[];

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} Vec3i;

typedef struct {
    s32 w[28];
} Block70;

typedef struct {
    u8 pad0[0x14];
    s32 field14;
} Instance;

typedef struct {
    u8 pad0[0xB0];
    s32 type;
    u8 padB4[8];
    s32 fieldBC;
    s32 fieldC0;
    u8 padC4[0x34];
    Vec3i vecF8;
    Instance *instance104;
    s32 field108;
    Block70 block10C;
    s32 field17C;
    Vec3i vec180;
} Input;

typedef struct {
    Instance *instance0;
    s32 instanceValue4;
    Vec3i vec8;
    s32 field14;
    Block70 block18;
    Instance *instance88;
    s32 instanceValue8C;
    Vec3i vec90;
    u8 pad9C[0x28];
    s32 fieldC4;
    Vec3i vecC8;
    s32 fieldD4;
    u8 padD8[0xC];
    Vec3i vecE4;
    Vec3i vecF0;
    s32 typeFC;
    s32 field100;
} Output;

extern Output *D_80103FCC;

void func_8023E44C(Input *arg0) {
    {
        static void *sw_type_labels[0] __attribute__((section(".sdata"))) = {
            &&sw_type_1, &&sw_type_2, &&sw_type_3, &&sw_type_4, &&sw_type_5, &&sw_type_6, &&sw_type_7, &&sw_type_8, &&sw_type_9, &&sw_type_default
        };
        s32 type = arg0->type;
        s32 sw_type_value = type - 1;
        if ((unsigned int)sw_type_value > 8) {
            goto sw_type_default;
        }
        goto *jtbl_800C8790[sw_type_value];
    }
    do {
    sw_type_1:
        D_80103FCC->instance0 = arg0->instance104;
        if (arg0->instance104 != 0) {
            D_80103FCC->instanceValue4 = arg0->instance104->field14;
        } else {
            D_80103FCC->instanceValue4 = 0;
        }
        D_80103FCC->vec8 = arg0->vec180;
        D_80103FCC->field14 = -1;
        break;
    sw_type_2:
        if (arg0->instance104 != 0) {
            D_80103FCC->fieldC4 = arg0->instance104->field14;
        } else {
            D_80103FCC->fieldC4 = 0;
        }
        D_80103FCC->vecC8 = arg0->vec180;
        D_80103FCC->fieldD4 = arg0->fieldBC;
        break;
    sw_type_3:
        D_80103FCC->instance0 = arg0->instance104;
        D_80103FCC->instanceValue4 = arg0->instance104->field14;
        D_80103FCC->vec8 = arg0->vec180;
        D_80103FCC->field14 = -1;
        break;
    sw_type_4:
        D_80103FCC->instance0 = arg0->instance104;
        D_80103FCC->instanceValue4 = arg0->instance104->field14;
        D_80103FCC->vec8 = arg0->vec180;
        D_80103FCC->field14 = arg0->field108;
        D_80103FCC->block18 = arg0->block10C;
        break;
    sw_type_5:
        D_80103FCC->instance88 = arg0->instance104;
        D_80103FCC->instanceValue8C = arg0->instance104->field14;
        D_80103FCC->vec90 = arg0->vec180;
        break;
    sw_type_6:
    sw_type_7:
    sw_type_8:
    sw_type_9:
        break;
    
    sw_type_default:;
    } while (0);
    D_80103FCC->vecF0 = arg0->vecF8;
    D_80103FCC->vecE4 = arg0->vec180;
    D_80103FCC->typeFC = arg0->type;
    D_80103FCC->field100 = arg0->fieldC0;
}
