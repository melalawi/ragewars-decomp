#ifdef NON_MATCHING
/* Selects and advances an actor navigation target using route and distance checks. */
typedef signed char s8;
typedef unsigned char u8;
typedef signed short s16;
typedef unsigned short u16;
typedef signed int s32;
typedef unsigned int u32;
typedef signed long long s64;
typedef unsigned long long u64;
typedef float f32;
typedef double f64;
#define NULL ((void *)0)
/* The values func_80208410 loads by address:
 * 0x800C6CA8 = 50.0 (float, D_800C6CA8 in this cartridge's tables)
 * 0x800C6CAC = 0.26179942 (float, unnamed in this cartridge's tables)
 * 0x800C6CB0 = 0.26179942 (float, D_800C6CB0 in this cartridge's tables)
 * 0x800C6CB4 = 50.0 (float, unnamed in this cartridge's tables)
 * 0x800C6CB8 = 50.0 (float, D_800C6CB8 in this cartridge's tables)
 * 0x800C6CBC = 50.0 (float, D_800C6CBC in this cartridge's tables)
 * 0x800C6CC0 = 50.0 (float, D_800C6CC0 in this cartridge's tables)
 * 0x800C6CC4 = 100.0 (float, D_800C6CC4 in this cartridge's tables)
 * 0x800C6CC8 = 30.0 (float, D_800C6CC8 in this cartridge's tables)
 */
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

typedef struct func_80208410_S1 func_80208410_S1;
typedef struct func_80208410_S2 func_80208410_S2;
typedef struct func_80208410_S3 func_80208410_S3;
typedef struct func_80208410_S4 func_80208410_S4;
typedef struct func_80208410_S5 func_80208410_S5;
typedef struct func_80208410_S6 func_80208410_S6;
typedef struct func_80208410_S7 func_80208410_S7;
typedef struct func_80208410_S8 func_80208410_S8;
typedef struct func_80208410_S9 func_80208410_S9;
typedef struct func_80208410_S10 func_80208410_S10;
typedef struct func_80208410_S11 func_80208410_S11;
typedef struct func_80208410_S12 func_80208410_S12;
typedef struct func_80208410_S13 func_80208410_S13;
typedef struct func_80208410_S14 func_80208410_S14;
typedef struct func_80208410_S15 func_80208410_S15;
typedef struct func_80208410_S16 func_80208410_S16;
typedef union func_80208410_S1_U2C { s32 v0; s8 v1; } func_80208410_S1_U2C;
typedef union func_80208410_S3_UC { s32 v0; u16 v1; } func_80208410_S3_UC;
typedef union func_80208410_S12_U40 { s32 v0; func_80208410_S13 *v1; } func_80208410_S12_U40;
typedef struct { f32 x, y, z; } func_80208410_Vec3;
typedef struct { s32 x, y, z; } func_80208410_Pos;
struct func_80208410_S1 {
    func_80208410_S2 * unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    char padC[0x4];
    s32 unk14;
    s32 unk18;
    char pad18[0x10];
    func_80208410_Pos pos;
    char pad34[0x178];
    func_80208410_Pos home;
    char pad1B8[0x144];
    s32 unk300;
    s32 unk304;
    s32 unk308;
    s32 unk30C;
    s32 unk310;
    s32 unk314;
    char pad314[0x14];
    s32 unk32C;
};
struct func_80208410_S2 {
    char pad0[0x8];
    f32 unk8;
    char pad8[0x2C];
    s32 unk38;
};
struct func_80208410_S3 {
    func_80208410_Pos pos;
    func_80208410_S3_UC unkC;
};
struct func_80208410_S4 {
    char pad0[0x4];
    u8 unk4;
};
struct func_80208410_S5 {
    func_80208410_Pos pos;
};
struct func_80208410_S6 {
    char pad0[0x6B0];
    s32 unk6B0;
};
struct func_80208410_S7 {
    func_80208410_Pos pos;
};
struct func_80208410_S8 {
    char pad0[0x40];
    func_80208410_S9 * unk40;
    func_80208410_Pos pos;
};
struct func_80208410_S9 {
    char pad0[0x8];
    s8 unk8;
};
struct func_80208410_S10 {
    char pad0[0x8];
    func_80208410_Pos pos;
};
struct func_80208410_S11 {
    char pad0[0x18];
    s32* unk18;
};
struct func_80208410_S12 {
    char pad0[0x40];
    func_80208410_S12_U40 unk40;
};
struct func_80208410_S13 {
    char pad0[0x8];
    func_80208410_Pos pos;
};
struct func_80208410_S14 {
    char pad0[0x18];
    s32* unk18;
};
struct func_80208410_S15 {
    char pad0[0x40];
    s32 unk40;
};
struct func_80208410_S16 {
    func_80208410_Pos pos;
    u16 unkC;
};

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x20, 0x24, 0x28, 0x2c, 0x30, 0x34, 0x38, 0x3c, 0x40, 0x50, 0x54], gap at: 0x44. */
void func_80208410(func_80208410_S1 *arg0) {
    /* FAKEMATCH: Keep the navigation table base live across route lookups. */
    char *world = &D_8013B364;
    /* FAKEMATCH: Keep the route-ready flag live independently of stage comparisons. */
    s32 route_ready;
    func_80208410_Vec3 delta;
    f32 *temp_s4;
    f32 *var_s0;
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
    s32 stage_two;
    func_80208410_S5 *temp_s2;
    func_80208410_S6 *temp_s6;
    func_80208410_S16 *temp_v0_10;
    func_80208410_S4 *temp_v0_2;
    func_80208410_S8 *temp_v0_4;
    func_80208410_S10 *temp_v0_5;
    func_80208410_S11 *temp_v0_6;
    func_80208410_S13 *temp_v0_7;
    func_80208410_S14 *temp_v0_8;
    func_80208410_S8 *temp_v0_9;

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
        temp_s4 = &arg0->unk0->unk8;
        temp_f21 = func_80272768(temp_s4, var_s3);
        /* FAKEMATCH: Preserve the flag, destination, and source load order. */
        temp_v0_3 = ((volatile func_80208410_S3 *)var_s3)->unkC.v0;
        temp_a2 = ((volatile func_80208410_S1 *)arg0)->unk14;
        var_a1 = ((volatile func_80208410_S1 *)arg0)->unk4;
        arg0->unk304 = (s32)((temp_v0_3 & 0x300000) != 0);
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
                    var_s0 = func_8020C994(world, arg0->unk4);
                    func_80271FD8(&delta, temp_s4, var_s0);
                    if (func_802BC380((delta.x * delta.x) + (delta.z * delta.z)) < 50.0f) {
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
                    arg0->pos = temp_s2->pos;
                    temp_f0 = func_80209308(arg0, &arg0->pos, 2.0f, 0.0f);
                    if (temp_f0 < 0.0f) {
                        if (-temp_f0 > 0.26179942f) {
                            goto angle_far;
                        }
                        goto angle_done;
                    } else if (temp_f0 > 0.26179942f) {
angle_far:
                        var_v0 = 1;
                        arg0->unk310 = var_v0;
                        return;
                    }
angle_done:
                    var_v0 = 2;
                    arg0->unk314 = var_v0;
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
                arg0->pos = temp_s2->pos;
                arg0->unk314 = var_v0;
                return;
block_24:
                if (arg0->unk314 == 5) {
                    arg0->pos = temp_s2->pos;
                    temp_s6->unk6B0 = (s32) (temp_s6->unk6B0 | 0x10);
                    arg0->unk314 = 6;
                    return;
                }
                if (arg0->unk314 == 6) {
                    regpart_temp_v0_3 = arg0->unk0->unk38;
                    temp_v0_3 = regpart_temp_v0_3 & 0x2000;
                    if (temp_v0_3 || (regpart_temp_v0_3 & 0x1000)) {
                        /* FAKEMATCH: Keep the state write after both flag tests. */
                        ((volatile func_80208410_S1 *)arg0)->unk314 = 2;
                    }
                    arg0->pos = temp_s2->pos;
                }
                goto block_58;
            }
            if (temp_v0_2->unk4 == 5) {
                if (arg0->unk314 == 0) {
                    var_s0 = func_8020C994(world, arg0->unk4);
                    if (!(func_80272768(temp_s4, var_s0) < 50.0f)) {
block_35:
                        arg0->pos = ((func_80208410_S7 *)var_s0)->pos;
                        return;
                    }
                    arg0->unk314 = 1;
                    goto block_37;
                }
block_37:
                temp_s2_2 = arg0->unk314;
                if (temp_s2_2 == 1) {
                    temp_v0_4 = func_8020CFE0(world, arg0->unk4);
                    if (func_80272768((f32 *)&temp_v0_4->unk40->unk8, (f32 *)&temp_v0_4->pos) < 50.0f) {
                        temp_v0_5 = temp_v0_4->unk40;
                        arg0->pos = temp_v0_5->pos;
                        temp_s6->unk6B0 = (s32) (temp_s6->unk6B0 | 0x10);
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
                    func_80271FD8(&delta, temp_s4, (f32 *)&((func_80208410_S12 *)(func_8020CFE0(world, arg0->unk4)))->unk40.v1->pos);
                    temp_f1 = func_802BC380((delta.x * delta.x) + (delta.z * delta.z));
                    if ((var_s0_2 != 0) && (temp_f1 < 50.0f)) {
                        arg0->unk314 = 3;
                        goto block_49;
                    }
                    temp_v0_7 = (((func_80208410_S12 *)(func_8020CFE0(world, arg0->unk4)))->unk40.v1);
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
                    if (func_80272768((f32 *)&temp_v0_4->unk40->unk8, (f32 *)&temp_v0_4->pos) < 50.0f) {
                        arg0->pos = ((func_80208410_S3 *)var_s3)->pos;
                        temp_s6->unk6B0 = (s32) (temp_s6->unk6B0 | 0x10);
                        goto block_58;
                    }
                    arg0->pos = ((func_80208410_S3 *)var_s3)->pos;
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
        if ((arg0->unk18 == -1) || (var_f0 = 100.0f, (((((func_80208410_S3 *)(var_s3))->unkC.v1) & 0x100) != 0))) {
            var_f0 = 30.0f;
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
        if (((func_80208410_S16 *)var_s3)->unkC & 2) {
            arg0->pos = arg0->home;
            return;
        }
        arg0->pos = ((func_80208410_S3 *)var_s3)->pos;
    }
}

#endif
