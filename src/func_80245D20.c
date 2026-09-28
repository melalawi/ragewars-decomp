/* Applies material current and turning forces to an actor and adds their horizontal and vertical movement effects. */
#include "basetypes.h"
typedef struct Vec { f32 x,y,z; } Vec;
typedef struct Actor { u8 kind; char pad1[0x1f]; f32 vertical; char pad24[4]; Vec current; char pad34[4]; s32 flags; char pad3c[0x30]; f32 yaw; } Actor;
typedef struct Rider { char pad0[0x38]; s32 flags; char pad3c[0x30]; f32 yaw; } Rider;
typedef struct Material { char pad0[0x52]; u16 flags; char pad54[9]; u8 strength; char pad5e[1]; s8 x,y,z; } Material;
extern f32 D_800D0670[],D_800D2988[];
extern s32 func_8024E61C(Actor *);
extern f32 func_80271B18(Vec *);
extern void func_8027200C(Vec *,Vec *,f32),func_80272038(Vec *,f32,Vec *,Vec *),func_80274090(f32 *);
static inline s32 currentEnabled(Actor *actor) {
    if (actor->flags & 0x3000) return 1;
    if (actor->flags & 0x4000) return func_8024E61C(actor);
    return 0;
}
void func_80245D20(Actor *arg0, Material *arg1, Vec *arg2, s32 arg3) {
    Rider *rider;
    f32 speed;
    Vec v10,v20;
    f32 sp30;
    f32 sp34;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f1;
    f32 var_f20;
    f32 var_f3;
    f32 targetAngle,oldAngle;
    s32 temp_v1;
    s32 var_condition_bit;
    s32 var_v0;
    s32 var_v1;
    u16 temp_v1_2;
    Vec *var_a0;

    if (arg0->kind == 1) {
        rider=(Rider *)arg0;
        var_v1=currentEnabled(arg0);
        var_v0 = rider->flags & 3;
    } else {
        var_v1 = 0;
        var_v0 = 0;
    }
    if ((var_v0 != 0) || ((var_v1 == 0) && !(arg1->flags & 0x8000))) {
        arg0->current.x = 0.0f;
        arg0->current.y = 0.0f;
        arg0->current.z = 0.0f;
        return;
    }
    if ((arg1->flags & 0x100) && (arg3 != 0)) {
        v10.x = (f32) arg1->x * 0.007874016f;
        v10.y = (f32) arg1->y * 0.007874016f;
        v10.z = (f32) arg1->z * 0.007874016f;
        temp_f0 = (f32) arg1->strength;
        speed=temp_f0 * 3.0f;
        var_f20 = (temp_f0 + 1.0f) * 0.00872664712369442f;
        func_8027200C(&v10,&v10,speed);
        temp_v1_2 = arg1->flags;
        if (temp_v1_2 & 0x600) {
            if (temp_v1_2 & 0x400) {
                var_f20 = -var_f20;
            }
            if (arg0->kind == 1) {
                arg0->yaw = (f32) (arg0->yaw + var_f20);
            }
        }
        if ((arg1->flags & 0x2000) && (arg0->kind == 1)) {
            rider=(Rider *)arg0;
            v20=v10;
            v20.y = 0.0f;
            temp_f0_2 = func_80271B18(&v20);
            temp_f1 = arg0->yaw;
            sp34 = temp_f0_2;
            sp30 = temp_f1;
            if (temp_f0_2 != temp_f1) {
                func_80274090(&sp30);
                func_80274090(&sp34);
                if (sp30 > sp34) {
                    var_f3=sp34+6.2831855f;
                    if ((var_f3-sp30)<(sp30-sp34)) sp34=var_f3;
                } else {
                    var_f3=sp34-6.2831855f;
                    if ((sp30-var_f3)<(sp34-sp30)) sp34=var_f3;
                }
                targetAngle=sp34; oldAngle=sp30;
                if (oldAngle < targetAngle) {
                    sp30=oldAngle+((f32)arg1->strength*D_800D0670[1]*D_800D2988[0]*0.017453294f);
                    if (targetAngle<sp30) sp30=targetAngle;
                } else {
                    sp30=oldAngle-((f32)arg1->strength*D_800D0670[1]*D_800D2988[0]*0.017453294f);
                    if (sp30<targetAngle) sp30=targetAngle;
                }
                func_80274090(&sp30);
            }
            rider->yaw = sp30;
        }
    } else {
        v10.x = 0.0f;
        v10.y = 0.0f;
        v10.z = 0.0f;
    }
    var_f0_2 = (f32) arg1->strength * D_800D0670[0] * D_800D2988[0];
    var_f0_2 = ((var_f0_2 < 0.0f ? 0.0f : var_f0_2) > 1.0f ? 1.0f : (var_f0_2 < 0.0f ? 0.0f : var_f0_2));
    var_a0=&arg0->current;
    func_80272038(var_a0, var_f0_2, var_a0, &v10);
    arg2->x = (f32) (arg2->x + arg0->current.x);
    arg2->z = (f32) (arg2->z + arg0->current.z);
    if (arg1->flags & 0x100) {
        if (v10.y != 0.0f) {
            arg0->vertical = 0.0f;
        } else {
            temp_f0_5 = arg0->current.y;
            arg0->current.y = (f32) (temp_f0_5 + ((v10.y - temp_f0_5) * 0.2f));
        }
        arg0->vertical = (f32) (arg0->vertical + ((2.0f * (arg0->current.y * 10.24f)) + 4.0f));
        return;
    }
    arg0->current.y += (v10.y-arg0->current.y)*0.2f;
}
