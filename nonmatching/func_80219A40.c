/* Selects and records a player's reaction to an interaction. */
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
/* The values func_80219A40 loads by address:
 * 0x800C73C4 = 0.05 (float, unnamed in this cartridge's tables; not a literal: a variable, its value in the image, since D_800C73C0: func_80219490.c names it and does not declare it const)
 * 0x800C73C8 = 0.3 (float, D_800C73C8 in this cartridge's tables)
 * 0x800C73CC = -0.7071 (float, D_800C73CC in this cartridge's tables)
 * 0x800C73D0 = 0.7071 (float, D_800C73D0 in this cartridge's tables)
 */
#if defined(VERSION_US)
#define D_800C73C8 D_800C2208
#define D_800C73CC D_800C220C
#define D_800C73D0 D_800C2210
#define D_801468CC D_8014080C
#elif defined(VERSION_EU)
#define D_800C73C8 D_800C2578
#define D_800C73CC D_800C257C
#define D_800C73D0 D_800C2580
#define D_801468CC D_8015280C
#define func_8021BFBC func_8021C070
#elif defined(VERSION_EU_MUL)
#define D_800C73C8 D_800C25B8
#define D_800C73CC D_800C25BC
#define D_800C73D0 D_800C25C0
#define D_801468CC D_8014C80C
#define D_80102AE0 D_80108AE0
#define func_8021BFBC func_8021C078
#elif defined(VERSION_DE)
#define D_800C73C8 D_800C22D8
#define D_800C73CC D_800C22DC
#define D_800C73D0 D_800C22E0
#define D_801468CC D_8014280C
#define D_80102AE0 D_800FEAE0
#define func_8021BFBC func_8021BFC4
#endif
void * func_8020CFE0(char *, s32);
void func_80219688(char *, char *, void *);
void func_802297F0(void *, f32);
void func_80229F74(void *, void *);
s32 func_8022A590(void *, unsigned int);
s32 func_8022ABF0(void *);
int func_8022B168(void *);
int func_80245774(void);
int func_80245788(void);
void func_80282A18(void *, s32);
void func_802830A0(void *, s32);
void * func_8028B2D4(void *, u16 *);
s32 func_802A11E8(void);
float func_802BB630(float);
float func_802BC200(float);
s32 func_8021BFBC(); /* extern */
extern s32 D_80102AE0[];
extern s32 D_8011FE88;
extern s32 D_80121990;
extern s8 D_8013B364;
extern s32 D_80145040;
extern s32 D_801462C8;
extern s32 D_801468A0;
extern volatile s32 D_801468C4; /* FAKEMATCH: preserve the score-update ordering. */
extern volatile s32 D_801468CC[]; /* FAKEMATCH: retain distinct score reads in each branch. */
extern s32 D_801468F4;
extern s32 D_80146918;
extern f32 D_800C73C0;
extern f32 D_800C73C8;
extern f32 D_800C73CC;
extern f32 D_800C73D0;                          
typedef struct func_80219A40_S1 func_80219A40_S1;
typedef struct func_80219A40_S2 func_80219A40_S2;
typedef struct func_80219A40_S3 func_80219A40_S3;
typedef struct func_80219A40_S4 func_80219A40_S4;
typedef struct func_80219A40_S5 func_80219A40_S5;
typedef struct func_80219A40_S6 func_80219A40_S6;
typedef struct func_80219A40_S7 func_80219A40_S7;
typedef struct func_80219A40_S8 func_80219A40_S8;
typedef struct func_80219A40_S9 func_80219A40_S9;
typedef struct func_80219A40_S10 func_80219A40_S10;
typedef struct func_80219A40_S11 func_80219A40_S11;
typedef struct func_80219A40_S12 func_80219A40_S12;
typedef struct func_80219A40_S13 func_80219A40_S13;
typedef struct func_80219A40_S14 func_80219A40_S14;
typedef struct func_80219A40_S15 func_80219A40_S15;
typedef struct func_80219A40_S16 func_80219A40_S16;
typedef struct func_80219A40_S17 func_80219A40_S17;
typedef struct func_80219A40_S18 func_80219A40_S18;
typedef struct func_80219A40_S19 func_80219A40_S19;
typedef struct func_80219A40_S20 func_80219A40_S20;
typedef struct func_80219A40_S21 func_80219A40_S21;
typedef struct func_80219A40_S22 func_80219A40_S22;
typedef struct func_80219A40_S23 func_80219A40_S23;
typedef struct func_80219A40_S24 func_80219A40_S24;
typedef struct func_80219A40_S25 func_80219A40_S25;
typedef struct func_80219A40_S26 func_80219A40_S26;
typedef struct func_80219A40_S27 func_80219A40_S27;
typedef struct func_80219A40_S28 func_80219A40_S28;
typedef struct func_80219A40_S29 func_80219A40_S29;
typedef struct func_80219A40_S30 func_80219A40_S30;
typedef struct func_80219A40_S31 func_80219A40_S31;
typedef struct func_80219A40_S32 func_80219A40_S32;
typedef struct func_80219A40_S33 func_80219A40_S33;
typedef struct func_80219A40_S34 func_80219A40_S34;
typedef struct func_80219A40_S35 func_80219A40_S35;
struct func_80219A40_S1 {
    char pad0[0x6C];
    f32 unk6C;
    char pad6C[0x168];
    func_80219A40_S2 *unk1D8;
};
struct func_80219A40_S2 {
    u8 unk0;
    char pad0[0x7];
    f32 unk8;
    char pad8[0x4];
    f32 unk10;
    u16* unk14;
    char pad14[0xCC];
    u16 unkE4;
    char padE4[0x1A];
    s32 unk100;
    char pad100[0xD4];
    func_80219A40_S2 *unk1D8;
    char pad1D8[0x3F8];
    s32 unk5D4;
    func_80219A40_S19 * unk5D8;
    char pad5D8[0x8];
    s32 unk5E4;
    char pad5E4[0x68];
    s16 unk650;
    char pad650[0xB8E];
    f32 unk11E0;
    char pad11E0[0x48];
    s32 unk122C;
    char pad122C[0x94];
    func_80219A40_S2 *unk12C4;
    func_80219A40_S2 *unk12C8;
    func_80219A40_S2 *unk12CC[8];
    func_80219A40_S2 *unk12EC;
    s32 unk12F0;
    s32 unk12F4[8];
    char pad1314[0x24];
    s32 unk1338;
    char pad1338[0x88];
    s8 unk13C4;
    char pad13C4[0x8B];
    s32 unk1450;
    func_80219A40_S28 * unk1454;
};
struct func_80219A40_S3 {
    char pad0[0x52];
    u16 unk52;
};
struct func_80219A40_S4 {
    void* unk0;
    s32 unk4;
    char pad4[0x4];
    s32 unkC;
};
struct func_80219A40_S5 {
    u8 unk0;
    char pad0[0x3];
    u16 unk4;
};
struct func_80219A40_S6 {
    char pad0[0x4];
    f32 unk4;
};
struct func_80219A40_S7 {
    u8 unk0;
    char pad0[0x3];
    u16 unk4;
    char pad4[0x2];
    f32 unk8;
    char pad8[0x4];
    f32 unk10;
    char pad10[0xEC];
    s32 unk100;
    char pad100[0x28];
    func_80219A40_S2 *unk12C;
    char pad12C[0xA8];
    func_80219A40_S2 *unk1D8;
};
struct func_80219A40_S8 {
    char pad0[0xA];
    u16 unkA;
};
struct func_80219A40_S9 {
    u8 unk0;
    char pad0[0x3];
    u16 unk4;
    char pad4[0xFA];
    s32 unk100;
    char pad100[0xD4];
    func_80219A40_S10 * unk1D8;
};
struct func_80219A40_S10 {
    char pad0[0x5D4];
    s32 unk5D4;
};
struct func_80219A40_S11 {
    char pad0[0x4];
    s32 unk4;
    char pad4[0x31C];
    s32 unk324;
    s8* unk328;
};
struct func_80219A40_S12 {
    char pad0[0x8D];
    u8 unk8D;
};
struct func_80219A40_S13 {
    char pad0[0x8F];
    u8 unk8F;
};
struct func_80219A40_S14 {
    char pad0[0x18B4];
    s32 unk18B4;
};
struct func_80219A40_S15 {
    char unk0[1];
};
struct func_80219A40_S16 {
    char pad0[0xC];
    u16 unkC;
};
struct func_80219A40_S17 {
    char unk0[1];
};
struct func_80219A40_S18 {
    char pad0[0x2C];
    u16 unk2C;
};
struct func_80219A40_S19 {
    u16 deaths_self;
    u16 deaths_other;
    u16 score;
    u16 special_kills;
    u16 pad8;
    u16 special_hits;
    u16 kills_special[8];
    u16 deaths_special[8];
    u16 kills_normal[8];
    u16 deaths_normal[8];
    char pad4C[0x43];
    u8 unk8F;
    char pad8F[0x2];
    u8 unk92;
};
struct func_80219A40_S20 {
    char unk0[1];
};
struct func_80219A40_S21 {
    char pad0[0x1C];
    u16 unk1C;
};
struct func_80219A40_S22 {
    char pad0[0x3C];
    u16 unk3C;
};
struct func_80219A40_S23 {
    u16 unk0;
};
struct func_80219A40_S24 {
    char pad0[0x4];
    volatile u16 unk4; /* FAKEMATCH: preserve the counter-store order. */
};
struct func_80219A40_S25 {
    char unk0[1];
};
struct func_80219A40_S26 {
    char pad0[0x2];
    u16 unk2;
};
struct func_80219A40_S27 {
    char pad0[0x38];
    s32 unk38;
    s32 unk3C;
};
struct func_80219A40_S28 {
    char pad0[0x4];
    s32 unk4;
    char pad8[0x31C];
    s32 unk324;
    func_80219A40_S2 *unk328;
};
struct func_80219A40_S29 {
    char pad0[0x3C];
    s32 unk3C;
};
struct func_80219A40_S30 {
    char pad0[0x54];
    s32 unk54;
    char pad54[0x20];
    s32 unk78;
};
struct func_80219A40_S31 {
    char pad0[0x6];
    u16 unk6;
};
struct func_80219A40_S32 {
    char pad0[0x4];
    volatile u16 unk4; /* FAKEMATCH: preserve the counter-store order. */
};
struct func_80219A40_S33 {
    char pad0[0x92];
    u8 unk92;
};
struct func_80219A40_S34 {
    char pad0[0x4];
    u16 unk4;
    char pad4[0x8C];
    u8 unk92;
};
struct func_80219A40_S35 {
    char pad0[0x4];
    u16 unk4;
};

void func_80219A40(func_80219A40_S1 *arg0, s32 arg1, func_80219A40_S4 *arg2) {
    f32 temp_f20;
    f32 temp_f3;
    f32 var_f0;
    volatile s32 *var_v1_4;
    s32 temp_a0_5;
    s32 temp_s0;
    s32 temp_s3;
    s32 temp_s5;
    s32 temp_s6;
    s32 temp_v0_5;
    s32 temp_v1_2;
    s32 temp_v1_9;
    s32 var_s3;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    func_80219A40_S7 *temp_a0_2;
    func_80219A40_S2 *temp_s1;
    func_80219A40_S2 *var_s2;
    u16 *temp_a1;
    s32 temp_v1;
    u16 temp_v1_4;
    s32 temp_v1_6;
    s32 temp_a0_6;
    s32 temp_a0_8;
    s32 score_owner_6;
    s32 score_owner_8;
    s32 *first_score_slot; /* FAKEMATCH: apply ordering-only volatility to the shared score path, keeping this read distinct. */
    s32 temp_v1_12;
    u8 temp_v1_3;
    func_80219A40_S5 *temp_a0;
    func_80219A40_S2 *temp_a1_2;
    func_80219A40_S7 *reaction_source; /* FAKEMATCH: retain the source only for the directional reaction. */
    func_80219A40_S9 *temp_a0_3;
    func_80219A40_S10 *attributed_actor;
    s32 projectile_present; /* FAKEMATCH: keep the source-presence decision separate from the actor fallback. */
    func_80219A40_S19 *temp_a0_4;
    func_80219A40_S34 *temp_a0_7;
    func_80219A40_S3 *temp_v0;
    func_80219A40_S18 *temp_v0_2;
    func_80219A40_S21 *temp_v0_3;
    func_80219A40_S22 *temp_v0_4;
    func_80219A40_S27 *temp_v0_6;

    func_80219A40_S23 *temp_v1_10;
    func_80219A40_S24 *temp_v1_11;
    func_80219A40_S26 *temp_v1_13;
    func_80219A40_S31 *temp_v1_14;
    func_80219A40_S32 *temp_v1_15;
    func_80219A40_S35 *temp_v1_16;
    func_80219A40_S8 *temp_v1_5;
    func_80219A40_S12 *temp_v1_7;
    func_80219A40_S16 *temp_v1_8;

    var_s2 = NULL;
    var_s3 = -1;
    if ((func_80245788() == 0) && (func_80245774() == 0) && !(D_801462C8 & 1)) {
        temp_s1 = arg0->unk1D8;
        temp_a1 = temp_s1->unk14;
        temp_s6 = temp_s1->unk5E4 > 0;
        if ((temp_a1 == NULL) || ((temp_v0 = func_8028B2D4(&D_8011FE88, temp_a1), var_v1 = 0, (temp_v0 != NULL)) && (var_v1 = 1, ((temp_v0->unk52 & 0x40) == 0)))) {
            var_v1 = 0;
        }
        if (var_v1 != 0) {
            var_s3 = 0x17;
        }
        if (temp_s1->unk650 == 0x20) {
            var_s3 = 0x20;
        }
        if (arg2 != NULL) {
            temp_a0 = arg2->unk0;
            if ((temp_a0 != NULL) && (temp_a0->unk0 == 2)) {
                temp_v1 = temp_a0->unk4;
                if (temp_v1 == 0x432) {
                    goto block_45;
                }
                if (temp_v1 < 0x433) {
                    if (temp_v1 == 0x405) {
                        goto block_33;
                    }
                    if (temp_v1 < 0x406) {
                        if ((temp_v1 == 0x402) || (temp_v1 == 0x404)) {
                            goto block_38;
                        }
                        goto block_47;
                    }
                    if (temp_v1 < 0x41E) {
                        if (temp_v1 < 0x41B) {
                            goto block_47;
                        }
                        goto block_early_return;
                    }
                    goto block_46;
                }
                if (temp_v1 < 0x4E0) {
                    if (temp_v1 >= 0x4DD) {
                        goto block_early_return;
                    }
                    if (temp_v1 == 0x43C) {
                        goto block_38;
                    }
                    if (temp_v1 == 0x4DA) {
                        goto block_33;
                    }
                    goto block_47;
                }
                if (temp_v1 == 0x4E3) {
                    goto block_45;
                }
                goto block_47;
block_early_return:
                if (temp_s1->unk5E4 > 0) {
                    func_802297F0(temp_s1, 2.5f);
                }
                return;
block_33:
                if (temp_s1->unk5E4 > 0) {
                    var_f0 = temp_s1->unk11E0 + ((func_80219A40_S6 *)&D_800C73C0)->unk4;
                    temp_s1->unk11E0 = var_f0 < D_800C73C8 ? D_800C73C8 : var_f0;
                }
                arg2->unk4 = 0x100;
                goto block_46;
block_38:
                if (temp_s1->unk122C & 0x1000) {
                    temp_v1_2 = temp_s1->unk5E4;
                    if (temp_v1_2 <= 0) {
                        arg2->unk4 = 0;
                    } else {
                        temp_s0 = temp_v1_2 + arg2->unk4;
                        var_v1_2 = func_8022ABF0(temp_s1);
                        if (temp_s0 < var_v1_2) {
                            var_v1_2 = temp_s0;
                        }
                        temp_s1->unk5E4 = var_v1_2;
                        goto block_45;
                    }
                }
                goto block_47;
block_45:
                arg2->unk4 = 0;
                goto block_46;
            } else {
block_46:
                goto block_47;
            }
        } else {
block_47:
            func_80229F74(temp_s1, arg2);
            func_8021BFBC(temp_s1, arg0, arg2->unk4, arg2->unkC, var_s3);
            temp_a0_2 = arg2->unk0;
            if (temp_a0_2 != NULL) {
                temp_v1_3 = temp_a0_2->unk0;
                if (temp_v1_3 != 1) {
                    if (temp_v1_3 == 2) {
                        temp_a1_2 = temp_a0_2->unk12C;
                        reaction_source = temp_a0_2;
                        if (temp_a1_2 != NULL) {
                            if (temp_a1_2->unk0 == 1) {
                                if (temp_a1_2->unk100 & 0x300000) {
                                    var_s2 = temp_a1_2;
                                } else if (temp_a1_2->unkE4 == 0x40C) {
                                    var_s2 = temp_a1_2->unk1D8;
                                }
                            }
                            temp_v1_4 = reaction_source->unk4;
                            if (((temp_v1_4 == 0x3EB) || (temp_v1_4 == 0x416)) && (temp_s6 != 0) && (func_8022B168(temp_s1) != 0)) {
                                temp_v1_5 = (void *)var_s2->unk5D8;
                                temp_v1_5->unkA = (u16) (temp_v1_5->unkA + 1);
                            }
                            temp_f20 = func_802BC200(arg0->unk6C);
                            temp_f3 = ((temp_s1->unk8 - reaction_source->unk8) * -temp_f20) + ((temp_s1->unk10 - reaction_source->unk10) * -func_802BB630(arg0->unk6C));
                            if (temp_f3 < D_800C73CC) {
                                temp_s1->unk13C4 = 1;
                            } else if (temp_f3 > D_800C73D0) {
                                temp_s1->unk13C4 = 2;
                            } else {
                                goto block_69;
                            }
                        }
                    }
                } else {
                    if (temp_a0_2->unk100 & 0x300000) {
                        var_s2 = temp_a0_2->unk1D8;
                    }
block_69:
                    temp_s1->unk13C4 = 0;
                }
            } else {
                var_s2 = temp_s1;
            }
            if (var_s2 != NULL) {
                if (arg2 != NULL) {
                    temp_a0_3 = arg2->unk0;
                    projectile_present = temp_a0_3 != NULL;
                    do { /* FAKEMATCH: retain the separate projectile and actor decisions. */
                      if (!projectile_present) { break; }
                      if (temp_a0_3->unk0 == 2) {
                        temp_v1_6 = temp_a0_3->unk4;
                        switch (temp_v1_6) {
                            case 0x404:
                            case 0x40F:
                                goto block_88;
                            case 0x402:
                            case 0x427:
                                goto block_87;
                            default:
                                if (!(arg2->unkC & 0x100000)) {
                                    var_v1_3 = var_s2->unk5D4;
                                    goto block_86;
                                }
                                goto block_87;
                        }
                    }
                    } while (0);
                    if ((temp_a0_3 != NULL) && (temp_a0_3->unk0 == 1) && (temp_a0_3->unk100 & 0x300000)) {
                        attributed_actor = temp_a0_3->unk1D8;
                        if (!(arg2->unkC & 0x100000)) {
                            var_v1_3 = attributed_actor->unk5D4;
block_86:
                            ++D_80102AE0[var_v1_3];
                        }
                    }
                    goto block_87;
                }
block_87:
                if (var_s2 != NULL) {
block_88:
                    if ((var_s2 != temp_s1) && (temp_s1->unk1450 != 0)) {
                        temp_s1->unk1454->unk328 = var_s2;
                        temp_s1->unk1454->unk324 = 0x1F4;
                    }
                    if ((var_s2 != NULL) && (temp_s1->unk5E4 == 0)) {
                        temp_v1_7 = (void *)temp_s1->unk5D8;
                        if (temp_v1_7->unk8D == 0) {
                            temp_v1_7->unk8D = 1U;
                            temp_s5 = func_8022A590(&D_80145040, (u32) var_s2);
                            temp_a0_4 = (void *)temp_s1->unk5D8;
                            if ((temp_a0_4->unk8F == 1) && ((((func_80219A40_S14 *)(&D_80145040))->unk18B4) != 0)) {
                                temp_a0_4->kills_special[temp_s5]++;
                            } else {
                                temp_s1->unk5D8->kills_normal[temp_s5]++;
                            }
                            temp_s3 = func_8022A590(&D_80145040, (u32) temp_s1);
                            if ((temp_s1->unk5D8->unk8F == 1) && ((((func_80219A40_S14 *)(&D_80145040))->unk18B4) != 0)) {
                                var_s2->unk5D8->deaths_special[temp_s3]++;
                            } else {
                                var_s2->unk5D8->deaths_normal[temp_s3]++;
                            }
                            func_80219688((char *)temp_s1, (char *)var_s2, arg2);
                            if (var_s2 != NULL) {
                                temp_a0_5 = var_s2->unk1338;
                                temp_v1_9 = temp_a0_5 + 1;
                                var_v0_2 = temp_v1_9;
                                if (temp_v1_9 < 0) {
                                    var_v0_2 = temp_a0_5 + 8;
                                }
                                temp_v0_5 = temp_v1_9 - ((var_v0_2 >> 3) * 8);
                                var_s2->unk1338 = temp_v0_5;
                                var_s2->unk12CC[temp_v0_5] = temp_s1;
                                var_s2->unk12F4[var_s2->unk1338] = 0xFF;
                            }
                            if (temp_s1 != NULL) {
                                temp_s1->unk12EC = var_s2;
                                temp_s1->unk12F0 = (s32) (func_802A11E8() % 7);
                            }
                            if (temp_s5 == temp_s3) {
                                temp_v1_10 = (void *)temp_s1->unk5D8;
                                temp_v1_10->unk0 = (u16) (temp_v1_10->unk0 + 1);
                                temp_v1_11 = (void *)temp_s1->unk5D8;
                                temp_v1_11->unk4 = (u16) (temp_v1_11->unk4 - 1);
                                if (D_801468C4 != 0) {
                                    temp_v1_12 = temp_s1->unk5D8->unk92;
                                    /* FAKEMATCH: keep the signed bounds decisions separate. */
                                    if (temp_v1_12 >= 0) {
                                        if (temp_v1_12 < 5) {
                                        var_v1_4 = &D_801468CC[temp_v1_12];
                                        if (D_80146918 == 0) {
                                            if (D_801468F4 != 0) {

                                            } else {
                                                goto block_134;
                                            }
                                        }
                                        }
                                    }
                                }
                            } else {
                                temp_v1_13 = (void *)temp_s1->unk5D8;
                                temp_v1_13->unk2 = (u16) (temp_v1_13->unk2 + 1);
                                temp_v0_6 = func_8020CFE0(&D_8013B364, temp_s1->unk1454->unk4);
                                temp_v0_6->unk38 = (s32) (temp_v0_6->unk38 + 1);
                                temp_v0_6 = func_8020CFE0(&D_8013B364, var_s2->unk1454->unk4);
                                temp_v0_6->unk3C = (s32) (temp_v0_6->unk3C + 1);
                                if (temp_s1->unk5D8->unk8F == 1) {
                                    if ((((func_80219A40_S30 *)(&D_801468A0))->unk54) != 0) {
                                        temp_v1_14 = (void *)var_s2->unk5D8;
                                        var_s2->unk12C4 = temp_s1;
                                        temp_v1_14->unk6 = (u16) (temp_v1_14->unk6 + 1);
                                        temp_v1_15 = (void *)var_s2->unk5D8;
                                        temp_v1_15->unk4 = (u16) (temp_v1_15->unk4 + 1);
                                        if (D_801468C4 != 0) {
                                            temp_a0_6 = var_s2->unk5D8->unk92;
                                            score_owner_6 = temp_s1->unk5D8->unk92;
                                            /* FAKEMATCH: keep the signed bounds decisions separate. */
                                            if (temp_a0_6 >= 0) {
                                                if (temp_a0_6 < 5) {
                                                first_score_slot = (s32 *)&D_801468CC[temp_a0_6];
                                                var_v1_4 = first_score_slot;
                                                if (score_owner_6 != temp_a0_6) {
                                                    do { /* FAKEMATCH: retain the independent score update before its shared store. */
                                                        var_v0_3 = *first_score_slot + 1;
                                                        goto block_135;
                                                    } while (0);
                                                }
                                            }
                                            }
                                        }
                                    } else if ((((func_80219A40_S30 *)(&D_801468A0))->unk78) != 0) {
                                        var_s2->unk12C8 = temp_s1;
                                    } else {
                                        goto block_124;
                                    }
                                } else {
block_124:
                                    if (D_801468C4 != 0) {
                                        temp_a0_7 = (void *)var_s2->unk5D8;
                                        if (temp_a0_7->unk92 == temp_s1->unk5D8->unk92) {
                                            temp_a0_7->unk4 = (u16) (temp_a0_7->unk4 - 1);
                                        } else {
                                            temp_a0_7->unk4 = (u16) (temp_a0_7->unk4 + 1);
                                        }
                                    } else {
                                        temp_v1_16 = (void *)var_s2->unk5D8;
                                        temp_v1_16->unk4 = (u16) (temp_v1_16->unk4 + 1);
                                    }
                                    if (D_801468C4 != 0) {
                                        temp_a0_8 = var_s2->unk5D8->unk92;
                                            score_owner_8 = temp_s1->unk5D8->unk92;
                                        /* FAKEMATCH: keep the signed bounds decisions separate. */
                                            if (temp_a0_8 >= 0) {
                                                if (temp_a0_8 < 5) {
                                            var_v1_4 = &D_801468CC[temp_a0_8];
                                            if (score_owner_8 != temp_a0_8) {
                                                var_v0_3 = *var_v1_4 + 1;
                                            } else {
block_134:
                                                var_v0_3 = *var_v1_4 - 1;
                                            }
block_135:
                                            *var_v1_4 = var_v0_3;
                                            }
                                        }
                                    }
                                }
                            }
                            func_80282A18(&D_80121990, (s32) temp_s1);
                            func_802830A0(&D_80121990, (s32) temp_s1);
                        }
                    }
                }
            }
        }
    }
}
