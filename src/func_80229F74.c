/* Scales damage by ownership and player state and suppresses friendly damage when configured. */
#include "basetypes.h"
typedef struct Player {
 char pad0[146];
 u8 unk92;
 u8 unk93;
} Player;
typedef struct Obj {
 u8 unk0;
 char pad1[227];
 unsigned short unkE4;
 char pade6[26];
 int unk100;
 char pad104[40];
 struct Obj * unk12C;
 char pad130[168];
 struct Obj * unk1D8;
 char pad1dc[1020];
 Player * unk5D8;
 char pad5dc[3700];
 int unk1450;
} Obj;
typedef struct { Obj *unk0; int unk4; } Damage;
typedef struct { char pad[0x24]; int unk24; } State;
extern State D_801468A0;
extern const f32 D_800C7DB0[],D_800C7DB8[],D_800C7DC0[],D_800C7DC8[],D_800C7DD0[];
void func_80229F74(Obj *arg0, Damage *arg1) {
    f32 var_f0;
    f32 var_f1;
    u8 temp_v1;
    u8 temp_v1_2;
    Obj *temp_a2;
    Obj *temp_a2_2;
    Obj *var_a3;

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
        { State *state=&D_801468A0;
        if ((state->unk24 != 0) && (((unsigned char *)state)[-0x5B0] == 0) && ((var_a3->unk1450 == 0) || (arg0->unk1450 == 0)) && (arg0->unk5D8->unk92 == var_a3->unk5D8->unk92)) {
            arg1->unk4 = 0;
        }}
    }
}
