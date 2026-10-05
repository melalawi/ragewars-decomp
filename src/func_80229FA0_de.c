#include "common/types_1dc8418c21db.h"
#include "common/types_8fd754e1e915.h"
#include "span_1000/code_80225D10.h"
#include "types.h"

/* Scales damage by ownership and player state and suppresses friendly damage when configured. */




extern func_80207B5C_S2 D_801427E0;
extern const f32 D_800C7DB0[],D_800C7DB8[],D_800C7DC0[],D_800C7DC8[],D_800C2CE0_de[];
void func_80229FA0_de(Obj_func_80229FA0_de *arg0, Damage_func_80229FA0_de *arg1) {
    f32 var_f0;
    f32 var_f1;
    u8 temp_v1;
    u8 temp_v1_2;
    Obj_func_80229FA0_de *temp_a2;
    Obj_func_80229FA0_de *temp_a2_2;
    Obj_func_80229FA0_de *var_a3;

    temp_a2 = arg1->unk0;
    var_a3 = 0;
    if (temp_a2 != 0) {
        temp_v1 = temp_a2->unk0;
        if (temp_v1 != 1) {
            if (temp_v1 == 2) {
                temp_a2_2 = temp_a2->unk12C;
                if ((temp_a2_2 != 0) && (temp_a2_2->unk0 == 1)) {
                    if (temp_a2_2->unk100 & 0x300000) {
                        var_a3 = temp_a2_2;
                        if (var_a3 == arg0) {
                            arg1->unk4 = (s32) ((f32) arg1->unk4 * 0.00390625f * 0.25f * 256.0f);
                        }
                    } else if (temp_a2_2->unkE4 == 0x40C) {
                        var_a3 = temp_a2_2->unk1D8;
                    }
                }
            }
        } else if (temp_a2->unk100 & 0x300000) {
            var_a3 = temp_a2->unk1D8;
        }
    } else {
        var_a3 = arg0;
    }
    if (var_a3 != 0) {
        if (var_a3->unk1450 != 0) {
            temp_v1_2 = var_a3->unk5D8->unk93;
            switch (temp_v1_2) {                    /* irregular */
            case 2:
                break;
            default:
                var_a3->unk5D8->unk93 = 0U;
                /* fallthrough */
            case 0:
                var_f1=(f32)arg1->unk4*0.00390625f; var_f1*= 0.6000000238418579f; arg1->unk4=(s32)(var_f1*256.0f);
                break;
            case 1:
                var_f1=(f32)arg1->unk4*0.00390625f; var_f1*= 0.800000011920929f; arg1->unk4=(s32)(var_f1*256.0f);
                break;
            }
        }
        { func_80207B5C_S2 *state=&D_801427E0;
        if ((state->unk24 != 0) && (((unsigned char *)state)[-0x5B0] == 0) && ((var_a3->unk1450 == 0) || (arg0->unk1450 == 0)) && (arg0->unk5D8->unk92 == var_a3->unk5D8->unk92)) {
            arg1->unk4 = 0;
        }}
    }
}

extern u8 D_80142208_de[];

extern void func_80253BBC_de(s32 arg0, void *arg1);
extern void func_8024B8C4_de(void *arg0);
extern void func_8022BC94_de(void *arg0, s32 arg1);
extern s32 func_8024B7E4_de(void *arg0, s32 arg1);






void func_8022A170_de(void *arg0) {
    void *node;

    if (*(void **)arg0 != 0) {
        func_80253BBC_de(0, *(void **)arg0);
    }

    node = ((func_80228774_S1 *)(arg0))->unk20;
    if (node != 0) {
        u8 *base = D_80142208_de;

        do {
            func_8024B8C4_de(node);
            func_8024B8C4_de((char *)node + 0x2E8);
            func_8022BC94_de(node, 0);
            if (base[0x1D] != 0) {
                func_8024B7E4_de(node, 1);
            }
            node = ((func_8022A5E4_S2 *)(node))->unk16E0;
        } while (node != 0);
    }
}

extern s32 func_8024D160_de(void *arg0);











void func_8022A1FC_de(void *arg0, void *arg1) {
    void *node;
    int scale;
    s32 count1;
    s32 count2;
    char *entry;

    node = ((func_80228774_S1 *)(arg0))->unk20;
    if (node != 0) {
        do {
            ((ObjectLinks16E4_2 *)(node))->unk_70 = 0;
            ((ObjectLinks16E4_2 *)(node))->unk_358 = 0;
            if (func_8024D160_de(node) != 0) {
                if (node) {
                    count1 = ((IntegerState948 *)(arg1))->unk_944;
                } else {
                    count1 = ((IntegerState948 *)(arg1))->unk_944;
                }
                if (count1 != 0x200) {
                    scale = 4;
                    ((ObjectLinks148 *)(((s32)arg1 + count1 * scale)))->unk_144 = node;
                    ((IntegerState948 *)(arg1))->unk_944 = count1 + 1;
                }
                count1 = 0xB48;
                count2 = ((IntegerStateB4C *)arg1)->unk_B48;
                if (count2 != 0x80) {
                    ((struct ObjectLinks94C *) (entry = (char *) (((s32) arg1) + (count2 * 4))))->unk_948 = node;
                    ((IntegerStateB4C *)arg1)->unk_B48 = count2 + 1;
                }
            }
            node = ((ObjectLinks16E4_2 *)(node))->unk_16E0;
        } while (node != 0);
    }
}
