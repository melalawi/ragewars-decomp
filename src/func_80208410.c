#ifdef NON_MATCHING
/* Selects and advances an actor navigation target using route and distance checks. */
#include "basetypes.h"
/* Table views retain the cartridge constant references and array addends. */
f32 func_80209308(void *, void *, f32, f32);
s32 func_80209828(void *);
void * func_8020C994(void *, int);
void * func_8020C9B0(void *, int);
int func_8020CC0C(void *, int, int);
void * func_8020CFE0(char *, s32);
void * func_8024E690(void *);
void func_80271FD8(void *, void *, void *);
f32 func_80272768(f32 *, f32 *);
f32 func_802BC380(f32);
extern s8 D_8013B364;
extern f32 D_800C6CA8[];
extern f32 D_800C6CB0[];
extern f32 D_800C6CB8;
extern f32 D_800C6CBC;
extern f32 D_800C6CC0;
extern f32 D_800C6CC4;
extern f32 D_800C6CC8;

#include "shared/actor_navigation.h"

void func_80208410(NavigationState *arg0) {
    /* FAKEMATCH: Keep the navigation table base live across route lookups. */
    char *world = &D_8013B364;
    /* FAKEMATCH: Keep the route-ready flag live independently of stage comparisons. */
    s32 route_ready;
    Vec3 delta;
    f32 *temp_s4;
    f32 *var_s0;
    f32 *lookup_point;
    f32 *lookup_second;
    f32 *var_s3;
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f21;
    f32 var_f0;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a2;
    s32 temp_s2_2;
    s32 temp_v0;
    s32 temp_v0_3;
    /* FAKEMATCH: Split actor flags and recycle the dead node-flags local for stage tests. */
    s32 regpart_temp_v0_3;
    s32 var_a1;
    s32 var_s0_2;
    s32 var_s0_3;
    s32 var_v0;
    /* FAKEMATCH: Split the angle-complete value from the later stage constants. */
    s32 regpart_var_v0;
    /* FAKEMATCH: Separate node flags from later stage values to keep the initial mask operands in their target registers. */
    s32 node_flags;
    Triple *temp_s2;
    SharedPlayer *temp_s6;
    NavigationLink *temp_v0_2;
    NavigationEndpoint *temp_v0_4;
    NavigationWaypoint *temp_v0_5;
    NavigationStatus *temp_v0_6;
    NavigationWaypoint *temp_v0_7;
    NavigationStatus *temp_v0_8;

    temp_s6 = arg0->unk0;
    if (arg0->unkC == -1) goto invalid;
    temp_a1 = arg0->unk14;
    arg0->unk300 = 0;
    arg0->unk310 = 0;
    arg0->unk304 = 0;
    arg0->unk308 = 0;
    arg0->unk30C = 0;
    if (temp_a1 == -1) goto invalid;
    {
        var_s3 = func_8020C994(world, temp_a1);
        temp_s4 = &arg0->unk0->views0.view8_3.pos.x;
        temp_f21 = func_80272768(temp_s4, var_s3);
        /* FAKEMATCH: Preserve the flag, destination, and source load order. */
        node_flags = ((volatile NavigationNode *)var_s3)->unkC.v0;
        temp_a2 = ((volatile NavigationState *)arg0)->unk14;
        var_a1 = ((volatile NavigationState *)arg0)->unk4;
        arg0->unk304 = (s32)((node_flags & 0x300000) != 0);
        if (temp_a2 == var_a1) {
            var_a1 = arg0->unk8;
        }
        temp_v0 = func_8020CC0C(world, var_a1, temp_a2);
        if (temp_v0 > 0) {
            temp_v0_2 = func_8020C9B0(world, temp_v0);
            if (temp_v0_2->unk4 == 4) {
                arg0->unk30C = 1;
            }
            if (temp_v0_2->unk4 == 8) {
                func_80272768(temp_s4, func_8020C994(world, arg0->unk4));
                temp_s2 = func_8020C994(world, arg0->unk14);
                route_ready = 1;
                arg0->unk308 = route_ready;
                if (temp_v0 != arg0->unk32C) {
                    arg0->unk314 = 0;
                    arg0->unk32C = temp_v0;
                }
                if (arg0->unk314 == 0) {
                    lookup_point = func_8020C994(world, arg0->unk4);
                    func_80271FD8(&delta, temp_s4, lookup_point);
                    /* FAKEMATCH: Retain the lookup pointer after the vector call for the shared position copy. */
                    var_s0 = lookup_point;
                    if (func_802BC380((delta.x * delta.x) + (delta.z * delta.z)) < D_800C6CA8[0]) {
                        arg0->unk314 = route_ready;
                        goto block_13;
                    }
                    goto block_35;
                }
block_13:
                /* FAKEMATCH: Reuse explicit constants across the stage comparisons. */
                temp_v0_3 = arg0->unk314;
                var_v0 = 1;
                if (temp_v0_3 == var_v0) {
                    arg0->pos = *temp_s2;
                    temp_f0 = func_80209308(arg0, &arg0->pos, 2.0f, 0.0f);
                    if (temp_f0 < 0.0f) {
                        if (-temp_f0 > D_800C6CA8[1]) {
                            goto angle_far;
                        }
                        goto angle_done;
                    } else if (temp_f0 > D_800C6CB0[0]) {
angle_far:
                        temp_v0_3 = 1;
                        arg0->unk310 = temp_v0_3;
                        return;
                    }
angle_done:
                    regpart_var_v0 = 2;
                    arg0->unk314 = regpart_var_v0;
                    goto block_21;
                }
block_21:
                var_v0 = 3;
                if (arg0->unk314 == 2) goto advance_state;
                if (arg0->unk314 == var_v0) {
                    var_v0 = 4;
                    goto advance_state;
                }
                var_v0 = 4;
                if (arg0->unk314 == var_v0) {
                    var_v0 = 5;
                    goto advance_state;
                }
                goto block_24;
advance_state:
                arg0->pos = *temp_s2;
                arg0->unk314 = var_v0;
                return;
block_24:
                if (arg0->unk314 == 5) {
                    arg0->pos = *temp_s2;
                    temp_s6->views5E8.view6B0_46.unk6B0 = (s32) (temp_s6->views5E8.view6B0_46.unk6B0 | 0x10);
                    arg0->unk314 = 6;
                    return;
                }
                if (arg0->unk314 == 6) {
                    regpart_temp_v0_3 = arg0->unk0->views1C.view38_3.flags;
                    temp_v0_3 = regpart_temp_v0_3 & 0x2000;
                    if (temp_v0_3 || (regpart_temp_v0_3 & 0x1000)) {
                        /* FAKEMATCH: Keep the state write after both flag tests. */
                        ((volatile NavigationState *)arg0)->unk314 = 2;
                    }
                    arg0->pos = *temp_s2;
                }
                goto block_58;
            }
            if (temp_v0_2->unk4 == 5) {
                if (arg0->unk314 == 0) {
                    lookup_second = func_8020C994(world, arg0->unk4);
                    temp_f1 = func_80272768(temp_s4, lookup_second);
                    /* FAKEMATCH: Save this lookup independently after the distance call. */
                    var_s0 = lookup_second;
                    if (!(temp_f1 < D_800C6CB0[1])) {
block_35:
                        arg0->pos = *(Triple *)var_s0;
                        return;
                    }
                    arg0->unk314 = 1;
                    goto block_37;
                }
block_37:
                temp_s2_2 = arg0->unk314;
                if (temp_s2_2 == 1) {
                    temp_v0_4 = func_8020CFE0(world, arg0->unk4);
                    if (func_80272768((f32 *)&temp_v0_4->unk40->pos, (f32 *)&temp_v0_4->pos) < D_800C6CB8) {
                        temp_v0_5 = temp_v0_4->unk40;
                        arg0->pos = temp_v0_5->pos;
                        temp_s6->views5E8.view6B0_46.unk6B0 = (s32) (temp_s6->views5E8.view6B0_46.unk6B0 | 0x10);
                        arg0->unk314 = 2;
                        return;
                    }
                    arg0->pos = temp_v0_4->pos;
                    arg0->unk310 = temp_s2_2;
                    goto block_41;
                }
block_41:
                if (arg0->unk314 == 2) {
                    var_s0_2 = 0;
                    temp_v0_6 = func_8024E690(arg0->unk0);
                    if (temp_v0_6 != NULL) {
                        var_s0_2 = *temp_v0_6->unk18 == 2;
                    }
                    func_80271FD8(&delta, temp_s4, (f32 *)&((NavigationEndpoint *)(func_8020CFE0(world, arg0->unk4)))->unk40->pos);
                    temp_f1 = func_802BC380((delta.x * delta.x) + (delta.z * delta.z));
                    if ((var_s0_2 != 0) && (temp_f1 < D_800C6CBC)) {
                        arg0->unk314 = 3;
                        goto block_49;
                    }
                    temp_v0_7 = (((NavigationEndpoint *)(func_8020CFE0(world, arg0->unk4)))->unk40);
                    arg0->pos = temp_v0_7->pos;
                    return;
                }
block_49:
                if (arg0->unk314 == 3) {
                    var_s0_3 = 0;
                    temp_v0_8 = func_8024E690(arg0->unk0);
                    if (temp_v0_8 != NULL) {
                        var_s0_3 = *temp_v0_8->unk18 == 2;
                    }
                    if (var_s0_3 == 0) {
                        arg0->unk314 = 0;
                    }
                    var_s3 = func_8020C994(world, arg0->unk14);
                    temp_v0_4 = func_8020CFE0(world, arg0->unk14);
                    if (func_80272768((f32 *)&temp_v0_4->unk40->pos, (f32 *)&temp_v0_4->pos) < D_800C6CC0) {
                        arg0->pos = ((NavigationNode *)var_s3)->pos;
                        temp_s6->views5E8.view6B0_46.unk6B0 = (s32) (temp_s6->views5E8.view6B0_46.unk6B0 | 0x10);
                        goto block_58;
                    }
                    arg0->pos = ((NavigationNode *)var_s3)->pos;
                    arg0->unk310 = 1;
                    return;
                }
                goto block_58;
            }
            goto block_57;
        }
block_57:
        arg0->unk314 = 0;
block_58:
        if ((arg0->unk18 == -1) || (var_f0 = D_800C6CC4, (((((NavigationNode *)(var_s3))->unkC.v1) & 0x100) != 0))) {
            var_f0 = D_800C6CC8;
        }
        if ((temp_f21 < var_f0) && (arg0->unk4 == arg0->unk14)) {
            if (func_80209828(arg0) == 0) return;
        }
        goto block_66;
    }
invalid:
    arg0->unk300 = 1;
    return;
block_66:
    temp_a1_2 = arg0->unk14;
    if (temp_a1_2 != -1) {
        var_s3 = func_8020C994(world, temp_a1_2);
        if (((NavigationNode *)var_s3)->unkC.v1 & 2) {
            arg0->pos = arg0->home;
            return;
        }
        arg0->pos = ((NavigationNode *)var_s3)->pos;
    }
}
#endif
