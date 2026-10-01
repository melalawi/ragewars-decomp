#ifdef NON_MATCHING
/* Updates the actor movement state and selects its animation from velocity and action flags. */
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
typedef s32 M2C_UNK;
/* The values func_802246E8 loads by address:
 * 0x800C7AB0 = 5.12 (float, D_800C7AB0 in this cartridge's tables)
 * 0x800C7AB4 = 5.12 (float, D_800C7AB4 in this cartridge's tables)
 * 0x800C7AB8 = 11.25 (float, D_800C7AB8 in this cartridge's tables)
 * 0x800D2988 = 1.0 (float, D_800D2988 in this cartridge's tables; not a literal: a variable, its value in the image, since D_800D2988: `swc1` at %lo(D_800D2988) in func_80213ED4.s)
 * 0x800C7ABC = 5.12 (float, D_800C7ABC in this cartridge's tables)
 * 0x800C7AC0 = 6.0 (float, D_800C7AC0 in this cartridge's tables)
 * 0x800C7AC4 = 10.0 (float, D_800C7AC4 in this cartridge's tables)
 * 0x800C7AC8 = 8.0 (float, D_800C7AC8 in this cartridge's tables)
 * 0x800C7ACC = 12.0 (float, D_800C7ACC in this cartridge's tables)
 * 0x800C7AD0 = 8.0 (float, D_800C7AD0 in this cartridge's tables)
 * 0x800C7AD4 = 23.0 (float, D_800C7AD4 in this cartridge's tables)
 * 0x800C7AD8 = 8.0 (float, D_800C7AD8 in this cartridge's tables)
 * 0x800C7ADC = 23.0 (float, D_800C7ADC in this cartridge's tables)
 * 0x800C7AE0 = 8.0 (float, D_800C7AE0 in this cartridge's tables)
 * 0x800C7AE4 = 23.0 (float, D_800C7AE4 in this cartridge's tables)
 * 0x800C7AE8 = 7.0 (float, D_800C7AE8 in this cartridge's tables)
 * 0x800C7AEC = 23.0 (float, D_800C7AEC in this cartridge's tables)
 */
s32 func_802227D0(void *, void *, s32);
void func_802233CC(void *, void *, void *);
void func_80224028(void *);
void func_802748E0(f32 *, f32, f32);
M2C_UNK func_802231B0();   /* extern */
typedef struct { s32 first; s32 second; s32 current; } ActorKindGroup;
extern ActorKindGroup D_800CE474;
extern M2C_UNK D_800CE730;                          /* unable to generate initializer: unknown type */
extern M2C_UNK D_800CE7C0;                          /* unable to generate initializer: unknown type */
extern M2C_UNK D_800CE7E4;                          /* unable to generate initializer: unknown type */
extern M2C_UNK D_800CE7FC;                          /* unable to generate initializer: unknown type */
extern M2C_UNK D_800CED30;                          /* unable to generate initializer: unknown type */
extern f32 D_800D2988[2];
#if defined(VERSION_US)
#define D_800C7AB0 D_800C28F0
#define D_800C7AB4 D_800C28F4
#define D_800C7AB8 D_800C28F8
#define D_800C7ABC D_800C28FC
#define D_800C7AC0 D_800C2900
#define D_800C7AC4 D_800C2904
#define D_800C7AC8 D_800C2908
#define D_800C7ACC D_800C290C
#define D_800C7AD0 D_800C2910
#define D_800C7AD4 D_800C2914
#define D_800C7AD8 D_800C2918
#define D_800C7ADC D_800C291C
#define D_800C7AE0 D_800C2920
#define D_800C7AE4 D_800C2924
#define D_800C7AE8 D_800C2928
#define D_800C7AEC D_800C292C
#elif defined(VERSION_EU)
#define D_800C7AB0 D_800C2C60
#define D_800C7AB4 D_800C2C64
#define D_800C7AB8 D_800C2C68
#define D_800C7ABC D_800C2C6C
#define D_800C7AC0 D_800C2C70
#define D_800C7AC4 D_800C2C74
#define D_800C7AC8 D_800C2C78
#define D_800C7ACC D_800C2C7C
#define D_800C7AD0 D_800C2C80
#define D_800C7AD4 D_800C2C84
#define D_800C7AD8 D_800C2C88
#define D_800C7ADC D_800C2C8C
#define D_800C7AE0 D_800C2C90
#define D_800C7AE4 D_800C2C94
#define D_800C7AE8 D_800C2C98
#define D_800C7AEC D_800C2C9C
#elif defined(VERSION_EU_X)
#define D_800C7AB0 D_800C2CA0
#define D_800C7AB4 D_800C2CA4
#define D_800C7AB8 D_800C2CA8
#define D_800C7ABC D_800C2CAC
#define D_800C7AC0 D_800C2CB0
#define D_800C7AC4 D_800C2CB4
#define D_800C7AC8 D_800C2CB8
#define D_800C7ACC D_800C2CBC
#define D_800C7AD0 D_800C2CC0
#define D_800C7AD4 D_800C2CC4
#define D_800C7AD8 D_800C2CC8
#define D_800C7ADC D_800C2CCC
#define D_800C7AE0 D_800C2CD0
#define D_800C7AE4 D_800C2CD4
#define D_800C7AE8 D_800C2CD8
#define D_800C7AEC D_800C2CDC
#elif defined(VERSION_DE)
#define D_800C7AB0 D_800C29C0
#define D_800C7AB4 D_800C29C4
#define D_800C7AB8 D_800C29C8
#define D_800C7ABC D_800C29CC
#define D_800C7AC0 D_800C29D0
#define D_800C7AC4 D_800C29D4
#define D_800C7AC8 D_800C29D8
#define D_800C7ACC D_800C29DC
#define D_800C7AD0 D_800C29E0
#define D_800C7AD4 D_800C29E4
#define D_800C7AD8 D_800C29E8
#define D_800C7ADC D_800C29EC
#define D_800C7AE0 D_800C29F0
#define D_800C7AE4 D_800C29F4
#define D_800C7AE8 D_800C29F8
#define D_800C7AEC D_800C29FC
#endif
extern f32 D_800C7AB0, D_800C7AB4, D_800C7AB8, D_800C7ABC;
extern f32 D_800C7AC0, D_800C7AC4, D_800C7AC8, D_800C7ACC;
extern f32 D_800C7AD0, D_800C7AD4, D_800C7AD8, D_800C7ADC;
extern f32 D_800C7AE0, D_800C7AE4, D_800C7AE8, D_800C7AEC;

typedef struct func_802246E8_S1 func_802246E8_S1;
typedef struct func_802246E8_S2 func_802246E8_S2;
typedef struct func_802246E8_S3 func_802246E8_S3;
typedef struct func_802246E8_S4 func_802246E8_S4;
struct func_802246E8_S1 {
    char pad0[0xE4];
    u16 unkE4;
    char padE4[0x1E];
    f32 unk104;
    char pad104[0x5A8];
    s32 unk6B0;
    char pad6B0[0xC];
    f32 unk6C0;
    f32 unk6C4;
    f32 unk6C8;
    char pad6C8[0x4];
    s32 unk6D0;
    char pad6D0[0x10];
    f32 unk6E4;
    char pad6E4[0x30];
    f32 unk718;
    char pad718[0x10];
    f32 unk72C;
    char pad72C[0xB8];
    s32 unk7E8;
    char pad7E8[0x80];
    s32 unk86C;
    char pad86C[0x954];
    f32 unk11C4;
    char pad11C4[0x10];
    f32 unk11D8;
    char pad11D8[0x1D8];
    void *unk13B4;
};
struct func_802246E8_S2 {
    char pad0[0x18];
    func_802246E8_S3 * unk18;
    char pad18[0x1C];
    s32 unk38;
};
struct func_802246E8_S3 {
    char pad0[0x14];
    s32 unk14;
};
struct func_802246E8_S4 {
    s32 unk0;
};

void func_802246E8(func_802246E8_S1 *arg0, func_802246E8_S2 *arg1) {
    M2C_UNK *var_a2;
    M2C_UNK *var_a2_2;
    f32 temp_f0;
    f32 temp_f2;
    f32 var_f1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 temp_v1_5;
    s32 temp_v1_6;
    s32 var_v0; /* FAKEMATCH: retain the explicit comparison-result flag. */
    s32 var_v0_2; /* FAKEMATCH: retain the second comparison-result flag. */
    s32 var_v0_3;
    s32 var_v0_4;
    u16 temp_v1;

    func_80224028(arg0);
    func_802748E0(&arg0->unk72C, 0.0f, 0.25f);
    var_v0 = 1;
    if (!(arg0->unk718 > D_800C7AB0)) {
        var_v0 = 0;
    }
    if (var_v0 != 0) {
        func_802231B0(arg0, arg1, &D_800CE7FC);
    } else {
        func_802231B0(arg0, arg1, &D_800CE7E4);
    }
    var_v0_2 = 1;
    if (!(arg0->unk718 > D_800C7AB4)) {
        var_v0_2 = 0;
    }
    if (var_v0_2 != 0) {
        func_802233CC(arg0, arg1, &D_800CE7C0);
    } else {
        func_802233CC(arg0, arg1, &D_800CE730);
    }
    /* FAKEMATCH: each failed jump guard has its own result assignment. */
    if (arg0->unk7E8 != 0) {
        var_v0_3 = 0;
    } else if (arg0->unk6E4 > D_800C7AB8) {
        var_v0_3 = 0;
    } else if (arg1->unk38 & 0xC0000) {
        var_v0_3 = 0;
    } else if (!(arg1->unk18->unk14 & 2)) {
        var_v0_3 = 0;
    } else if (!(arg0->unk6B0 & 0x10)) {
        var_v0_3 = 0;
    } else if (arg0->unk11D8 <= 0.0f) {
        func_802227D0(arg0, arg1, 5);
        var_v0_3 = 1;
    } else {
        var_v0_3 = 0;
    }
    if (var_v0_3 == 0) {
        if ((arg0->unk6C0 == 0.0f) && (arg0->unk6C4 == 0.0f)) {
            func_802227D0(arg0, arg1, 2);
        }
        if (((arg1->unk38 & 0x5000) == 0x4000) && (arg0->unk6D0 != 0)) {
            temp_f2 = arg0->unk11C4 + *D_800D2988;
            arg0->unk11C4 = temp_f2;
            if ((arg0->unk6C8 > D_800C7ABC) && (temp_f2 >= D_800C7AC0)) {
                arg0->unk11C4 = (f32) (temp_f2 - D_800C7AC0);
            }
        }
        temp_v1 = arg0->unkE4;
        var_v0_4 = 0x7DA;
        if (temp_v1 == D_800CE474.current) {
            if (arg0->unk86C == 0x7DA) {
                var_v0_4 = 0x7DB;
                if (!(arg0->unk104 >= D_800C7AC4)) {
                    var_v0_4 = 0x7DA;
                }
            }
            goto block_73;
        }
        if ((temp_v1 != D_800CE474.first) || (((temp_v1_2 = arg0->unk86C, (temp_v1_2 != 0xFA0)) || !(arg0->unk104 < D_800C7AC8)) && ((temp_v1_2 != 0x1004) || !(arg0->unk104 < D_800C7ACC)))) {
            if (arg1->unk38 & 0xC0000) {
                var_v0_4 = 0xA32;
                if (!(arg0->unk6C0 >= 0.0f)) {
                    var_v0_4 = 0xA37;
                }
                goto block_73;
            }
            var_f1 = arg0->unk6C0;
            if (var_f1 < 0.0f) {
                var_f1 = -var_f1;
            }
            temp_f0 = arg0->unk6C4;
            if (temp_f0 < 0.0f) {
                if (var_f1 < -temp_f0) {
                    goto block_44;
                }
                goto block_59;
            }
            if (var_f1 < temp_f0) {
block_44:
                if (arg0->unk6C4 < 0.0f) {
                    var_v0_4 = 0x802;
                    if (arg0->unk13B4 == &D_800CED30) {
                        temp_v1_3 = arg0->unk86C;
                        if ((u32) (temp_v1_3 - 0x5E56) < 7U) {
                            if (arg0->unk104 >= D_800C7AD0) {
                                arg0->unk86C = 0x5E2B;
                            }
                        } else {
                            if (temp_v1_3 == 0x5E5E) {
                                if (arg0->unk104 >= D_800C7AD4) {
                                    arg0->unk86C = 0x5E2B;
                                }
                                return;
                            } else {
                                var_v0_4 = 0x5E2B;
                                goto block_73;
                            }
                        }
                    } else {
                        goto block_73;
                    }
                } else {
                    var_v0_4 = 0x80C;
                    if (arg0->unk13B4 == &D_800CED30) {
                        temp_v1_4 = arg0->unk86C;
                        if ((u32) (temp_v1_4 - 0x5E56) < 7U) {
                            if (arg0->unk104 >= D_800C7AD8) {
                                arg0->unk86C = 0x5E2C;
                            }
                        } else {
                            if (temp_v1_4 == 0x5E5E) {
                                if (arg0->unk104 >= D_800C7ADC) {
                                    arg0->unk86C = 0x5E2C;
                                }
                                return;
                            } else {
                                var_v0_4 = 0x5E2C;
                                goto block_73;
                            }
                        }
                    } else {
                        goto block_73;
                    }
                }
            } else {
block_59:
                if (arg0->unk6C0 >= 0.0f) {
                    var_v0_4 = 0x7DA;
                    if (arg0->unk13B4 == &D_800CED30) {
                        temp_v1_5 = arg0->unk86C;
                        if ((u32) (temp_v1_5 - 0x5E56) < 9U) {
                            if (arg0->unk104 >= D_800C7AE0) {
                                arg0->unk86C = 0x5E29;
                            }
                        } else {
                            if (temp_v1_5 == 0x5E5E) {
                                if (arg0->unk104 >= D_800C7AE4) {
                                    arg0->unk86C = 0x5E29;
                                }
                                return;
                            } else {
                                var_v0_4 = 0x5E29;
                                goto block_73;
                            }
                        }
                    } else {
                        goto block_73;
                    }
                } else {
                    var_v0_4 = 0x7DF;
                    if (arg0->unk13B4 == &D_800CED30) {
                        temp_v1_6 = arg0->unk86C;
                        if ((u32) (temp_v1_6 - 0x5E56) < 7U) {
                            if (arg0->unk104 >= D_800C7AE8) {
                                arg0->unk86C = 0x5E2A;
                            }
                        } else {
                            var_v0_4 = 0x5E2A;
                            if ((temp_v1_6 != 0x5E5E) || (arg0->unk104 >= D_800C7AEC)) {
                                goto block_73;
                            }
                        }
                    } else {
block_73:
                        arg0->unk86C = var_v0_4;
                    }
                }
            }
        }
    }
}

#endif
