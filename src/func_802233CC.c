/* Updates player forward, strafe and impulse velocities, accumulates movement and plays the impulse sound. */
extern float D_800D2988[];
#include "basetypes.h"
#include "../splat/types/shared/movement.h"
typedef struct Vec { f32 x,y,z; } Vec;
typedef struct Player {
 char pad0[0x66c];
 f32 unk66C;
 char pad670[0x34];
 f32 unk6A4;
 f32 unk6A8;
 char pad6ac[0x4];
 s32 unk6B0;
 char pad6b4[0x4];
 s32 unk6B8;
 char pad6bc[0x4];
 f32 unk6C0;
 f32 unk6C4;
 char pad6c8[0xc];
 f32 unk6D4;
 f32 unk6D8;
 f32 unk6DC;
 char pad6e0[0x8];
 Vec unk6E8;
 char pad6f4[0xf4];
 s32 unk7E8;
 char pad7ec[0x9cc];
 s32 unk11B8;
} Player;
typedef struct Actor {
 char pad0[0x8];
 Vec unk8;
 char pad14[0x58];
 f32 unk6C;
} Actor;
typedef SharedMovement Movement;
extern s32 func_80245774(void);
extern void func_8025DE74(s16,Vec,s32,s32),func_80271FA4(Vec *,Vec *,Vec *),func_8027200C(Vec *,Vec *,f32),func_802727B8(Vec *,f32);
extern f32 func_80274710(f32,f32,f32),func_80274810(f32,f32),func_802BB630(f32),func_802BC200(f32);
void func_802233CC(Player *arg0, Actor *arg1, Movement *arg2) {
    Vec motion;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    f32 temp_f1_5;
    f32 temp_f1_6;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 var_a1;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f0_3;
    f32 var_f0_4;
    f32 var_f14;
    f32 var_f14_2;
    f32 var_f1;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_s3;
    s32 var_s4;
    Vec *temp_a0;

    if (func_80245774() == 0) {
        var_s3 = 0;
        if (arg0->unk11B8 == 0) {
            temp_f1 = arg0->unk6DC;
            var_s4 = 1;
            if (!(temp_f1 <= 0.0f)) {
                var_s4 = 0;
                arg0->unk6DC = (f32) (temp_f1 - D_800D2988[0]);
            }
            temp_f0=arg0->unk6C0; temp_f1_2=arg2->unk4;
            if (temp_f0 < 0.0f ? temp_f1_2 < -temp_f0 : temp_f1_2 < temp_f0) {
                arg0->unk6C0=func_80274810(arg0->unk6C0,arg2->unk8*0.5f);
            } else if(arg0->unk6A8 != 0.0f && arg0->unk7E8 != 2) {
                arg0->unk6C0=func_80274710(arg0->unk6C0,arg0->unk6A8*arg2->unk0,(arg0->unk6A8<0.0f?-arg0->unk6A8:arg0->unk6A8)*arg2->unk4);
            } else {
                arg0->unk6C0=func_80274810(arg0->unk6C0,arg2->unk8);
            }
            temp_f1_4 = arg0->unk6C0 * func_802BC200(arg1->unk6C + 3.1415927f);
            motion.y = 0;
            motion.x = temp_f1_4;
            motion.z = arg0->unk6C0 * func_802BB630(arg1->unk6C + 3.1415927f);
            temp_f1_5=arg0->unk6C4; temp_f2_2=arg2->unk10;
            if (temp_f1_5 < 0.0f ? temp_f2_2 < -temp_f1_5 : temp_f2_2 < temp_f1_5) {
                arg0->unk6C4=func_80274810(arg0->unk6C4,arg2->unk14*0.5f);
            } else if(arg0->unk6A4 != 0.0f) {
                arg0->unk6C4=func_80274710(arg0->unk6C4,arg0->unk6A4*arg2->unkC,(arg0->unk6A4<0.0f?-arg0->unk6A4:arg0->unk6A4)*arg2->unk10);
            } else {
                arg0->unk6C4=func_80274810(arg0->unk6C4,arg2->unk14);
            }
            motion.x += arg0->unk6C4 * func_802BC200(arg1->unk6C - 1.5707964f);
            motion.z += arg0->unk6C4 * func_802BB630(arg1->unk6C - 1.5707964f);
            var_f1 = arg0->unk6C4;
            if (var_f1 < 0.0f) {
                var_f1 = -var_f1;
            }
            temp_f0_2 = arg0->unk6C0;
            if (temp_f0_2 < 0.0f) {
                if (-temp_f0_2 < var_f1) {
                    goto block_35;
                }
                goto block_36;
            }
            if (temp_f0_2 < var_f1) {
block_35:
                func_802727B8(&motion,arg2->unk10);
            } else {
block_36:
                func_802727B8(&motion,arg2->unk4);
            }
            if (var_s4 != 0) {
                temp_v1 = arg0->unk6B0;
                if (temp_v1 & 8) {
                    var_f0_3 = arg2->unk18;
                    var_s3 = 1;
                } else if (temp_v1 & 4) {
                    var_f0_3 = -arg2->unk18 * 0.5f;
                    var_s3 = 1;
                } else {
                    goto block_42;
                }
            } else {
block_42:
                var_f0_3 = func_80274810(arg0->unk6D4, arg2->unk1C);
            }
            arg0->unk6D4 = var_f0_3;
            motion.x += arg0->unk6D4 * func_802BC200(arg1->unk6C + 3.1415927f);
            motion.z += arg0->unk6D4 * func_802BB630(arg1->unk6C + 3.1415927f);
            if (var_s4 && (arg0->unk6B8 & 1)) {
                arg0->unk6D8 = arg2->unk18;
                arg0->unk6D8 *= 0.75f;
                var_s3=1;
            } else if (var_s4 && (arg0->unk6B8 & 2)) {
                arg0->unk6D8 = -arg2->unk18*0.75f;
                var_s3=1;
            } else {
                arg0->unk6D8=func_80274810(arg0->unk6D8,arg2->unk1C*0.75f);
            }
            motion.x += arg0->unk6D8 * func_802BC200(arg1->unk6C - 1.5707964f);
            motion.z += arg0->unk6D8 * func_802BB630(arg1->unk6C - 1.5707964f);
            func_8027200C(&motion, &motion, arg0->unk66C);
            temp_a0 = &arg0->unk6E8;
            func_80271FA4(temp_a0, temp_a0, &motion);
            if (var_s3 != 0) {
                arg0->unk6DC = (f32) (arg0->unk6DC + 7.5f);
                func_8025DE74(arg2->unk22, arg1->unk8, 0, -1);
            }
        }
    }
}
