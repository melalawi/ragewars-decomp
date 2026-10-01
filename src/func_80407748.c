#ifdef NON_MATCHING
/* Validates Controller Pak save data and loads the selected player profile. */
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
void * func_802533DC(s32, s32, u32, void *);
void func_802537D8(void *, void *);
void func_802538A8(s32);
void * func_802A101C(void *, int, u32);
s32 func_802A1238(u8 *);
u8 * func_802A125C(u8 *, u8 *);
s32 func_8040458C(s32, s32, s32 *, u8 *, u8 *, s32 *, u8 *, u8 *);
s32 func_80404F58(s32, s32, s32, s32);
s32 func_804057BC(u8 *, s32);
u32 func_804057F8(u8 *, u32, u32);
void func_80405F48(void *);
void * func_804426E4(void *, void *, s32, s32, s32);
s32 func_802A137C(u8 *, s32);                       /* extern */
s32 func_80406178();            /* extern */
#if defined(VERSION_US)
#define D_44F2D4 D_44E7F4
#define D_44F2F8 D_44E818
#define D_44F460 D_44E980
#define D_44F484 D_44E9A4
#define D_44F4A8 D_44E9C8
#define D_44FB68 D_44F088
#define D_80153718 D_8014B488
#elif defined(VERSION_DE)
#define D_44F2D4 D_44E684
#define D_44F2F8 D_44E6A8
#define D_44F460 D_44E810
#define D_44F484 D_44E834
#define D_44F4A8 D_44E858
#define D_44FB68 D_44EF18
#define D_800D77FC D_800D37D0
#define D_80153718 D_8014D488
#endif
extern s32 D_44F2D4;
extern s32 D_44F2F8;
extern s32 D_44F460;
extern s32 D_44F484;
extern s32 D_44F4A8;
extern s32 D_44FB68;
extern s32 D_44F100;
extern s32 D_44F0B8;
extern s32 D_8011FECC;
extern s32 D_8014561C;
extern s32 D_80153754;
extern s32 D_8015375C;
extern s32 D_80153760;
extern s32 D_8015376C;
extern s32 D_8015377C;
extern s32 D_80153784;
extern s32 D_8015378C;
extern s32 D_800D7700;
extern s32 D_800D7704;
extern s32 D_800D7708;
extern s32 D_800D770C;
extern u8 *D_800D7784;
extern s32 D_800E0D90;                          /* unable to generate initializer: unknown type */
extern void *D_800E28B0;
extern u8 **D_800E28B4;
extern s32 D_800E28B8;
extern u8 *D_800E28BC;
extern s32 D_800E28C8;

typedef struct func_80407748_S1 func_80407748_S1;
typedef struct func_80407748_S2 func_80407748_S2;
typedef struct func_80407748_S3 func_80407748_S3;
typedef struct func_80407748_S4 func_80407748_S4;
typedef struct func_80407748_S5 func_80407748_S5;
typedef struct func_80407748_S6 func_80407748_S6;
typedef struct func_80407748_S7 func_80407748_S7;
struct func_80407748_S1 {
    s16 unk0;
    char pad0[0x12];
    s32 unk14;
    char pad18[4];
    s32 unk1C;
    func_80407748_S2 * unk20;
};
struct func_80407748_S2 {
    char pad0[0x4];
    s8 unk4;
};
struct func_80407748_S3 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
};
struct func_80407748_S4 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
};
typedef struct SaveChecksum { s32 checksum; } SaveChecksum;
struct func_80407748_S5 {
    s32 unk0;
    s32 unk4;
};
struct func_80407748_S6 {
    u8 unk0;
    u8 unk1;
};
struct func_80407748_S7 {
    u8 unk0;
    u8 unk1;
};

extern func_80407748_S3 D_80153718;
extern func_80407748_S3 D_80153738;
extern func_80407748_S6 *D_800D77FC;

/* Validates Controller Pak save data and loads the selected player profile. */
s32 func_80407748(s32 *arg0, func_80407748_S1 *arg1) {
    u8 sp20[4];
    u8 sp28[8];
    u8 sp30[8];
    u8 sp38[16];
    s32 sp48;
    s32 sp4C;
    /* FAKEMATCH: reuse the length temporary for the later string-loop flag to match allocation. */
    s32 temp_a1;
    s32 temp_s5;
    s32 temp_s7;
    s32 temp_v0;
    /* FAKEMATCH: reuse the first string-loop flag as the later save length to match allocation. */
    s32 var_a1_2;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s0_4;
    s32 var_s2;
    /* FAKEMATCH: reuse the completed profile flag as the later name-loop index to match allocation. */
    s32 var_s3;
    s32 var_s4;
    s32 var_v0;
    s32 var_v1;
    s32 var_v1_3;
    u8 **temp_v0_2;
    u8 **temp_v0_3;
    u8 *temp_a0;
    u8 *temp_a0_2;
    func_80407748_S6 *var_s1;
    func_80407748_S7 *var_s1_2;
    u8 var_s0_3;

    /* FAKEMATCH: copy the reset value to preserve delay-slot allocation. */
    s32 regvalue_var_s0;
    var_s2 = 0;
    temp_s5 = *arg0 - 3;
    temp_s7 = D_8011FECC + 0x610;
    if (D_8015375C != 0) {
        var_s4 = D_800E28C8;
    } else {
        var_s4 = (s32) arg1->unk20->unk4;
    }
    if (func_80406178(arg1, var_s4, 0) != 0) {
        D_80153784 = 1;
        return 1;
    }
    if (D_8015376C != 0) {
        temp_v0 = func_8040458C(var_s4, temp_s5, &sp48, sp38, sp20, &sp4C, sp28, sp30);
        if ((temp_v0 == 0) && (sp48 == 0)) {
            arg1->unk0 = 0x14;
            func_80405F48(arg1);
            return 0;
        }
        if (func_802A1238(sp30) == 4 &&
            func_802A1238(sp28) == 2 &&
            func_802A137C(sp30, D_800D770C) == 0 &&
            func_802A137C(sp28, D_800D7708) == 0) {
            var_v1 = 1;
        } else {
            var_v1 = 0;
        }
        if (var_v1 != 0) {
            var_s3 = func_802A137C(sp38, D_800D7700) == 0;
            var_s0 = func_802A137C(sp38, D_800D7704) == 0;
        } else {
            var_s3 = 0;
            var_s0 = 0;
        }
        if ((temp_v0 == 0) && (sp48 != 0)) {
            if (var_s3 != 0) {
                if (func_80404F58(var_s4, temp_s5, (s32) &D_80153738, 0x18) == 0) {
                    var_s3 = 0;
                    if (func_804057F8((u8 *)&D_80153738, 0x14U, 4U) == (((func_80407748_S3 *)(&D_80153738))->unk14)) {
                        D_80153718 = D_80153738;
                        D_8015378C = temp_s5;
                        func_804426E4(&D_8014561C, &D_44F484, arg1->unk1C, (s32)arg1->unk20, (void *)arg1->unk14);
                        return 1;
                    }
                }
                var_s3 = 0;
                var_s2 = 1;
                goto block_24;
            }
block_24:
            if ((var_s0 != 0) && (var_s2 == 0)) {
                var_s0_2 = sp4C;
                if (D_800E28B4 != NULL) {
                    func_802538A8(0);
                    func_802537D8(NULL, D_800E28B4);
                }
                if (var_s0_2 != 0) {
                    var_s0_2 <<= 8;
                } else {
                    var_s0_2 = D_8011FECC + 0x610;
                }
                temp_v0_2 = (u8 **) func_802533DC(0, var_s0_2, 0x33U, &D_800E0D90);
                temp_a0 = *temp_v0_2;
                D_800E28B4 = temp_v0_2;
                D_800E28BC = temp_a0;
                func_802A101C(temp_a0, 0, (u32) var_s0_2);
                if (func_80404F58(var_s4, temp_s5, (s32) D_800E28BC, sp4C << 8) != 0) {
                    var_s0 = 0;
                    goto block_39;
                }
                temp_a1 = (((func_80407748_S5 *)(D_800E28BC))->unk0);
                if (temp_a1 != temp_s7) {
                    regvalue_var_s0 = 0;
                    var_s0 = regvalue_var_s0;
                    goto block_39;
                }
                var_s0 = 0;
                if (func_804057F8(D_800E28BC, temp_a1 - 4, 0xBU) == ((SaveChecksum *)&D_800E28BC[(((func_80407748_S5 *)(D_800E28BC))->unk0) - (s32)sizeof(SaveChecksum)])->checksum) {
                    var_s2 = 1;
                    if (D_8011FECC == (((func_80407748_S5 *)(D_800E28BC))->unk4)) {
                        D_8015378C = temp_s5;
                        func_804426E4(&D_8014561C, &D_44F2F8, arg1->unk1C, (s32)arg1->unk20, (void *)arg1->unk14);
                        return 1;
                    }
                    goto block_40;
                }
block_39:
                var_s2 = 1;
                goto block_40;
            }
block_40:
            if (var_s3 == 0) {
                var_s0_3 = 0;
                if (var_s0 == 0) {
                    var_s1 = D_800D77FC;
                    D_8015378C = temp_s5;
                    if (func_804057BC(sp38, 0x10) != 0) {
                        func_802A125C(sp38, D_800D7784);
                    }
                    var_a1_2 = 1;
                    var_s3 = 0;
                    do {
                        if (var_a1_2 != 0) {
                            var_s0_3 = (sp38)[var_s3];
                        }
                        if (var_s0_3 == 0) {
                            var_a1_2 = 0;
                            var_s0_3 = 0x20;
                        }
                        var_s1->unk0 = var_s0_3;
                        var_s3 += 1;
                        var_s1 = (func_80407748_S6 *)&var_s1->unk1;
                    } while (var_s3 < 0x10);
                    temp_a1 = 1;
                    var_s1 = (func_80407748_S6 *)&var_s1->unk1;
                    var_v1_3 = 0;
                    do {
                        if (temp_a1 != 0) {
                            var_s0_3 = (sp20)[var_v1_3];
                        }
                        if (var_s0_3 == 0) {
                            temp_a1 = 0;
                            var_s0_3 = 0x20;
                        }
                        var_s1->unk0 = var_s0_3;
                        var_v1_3 += 1;
                        var_s1 = (func_80407748_S6 *)&var_s1->unk1;
                    } while (var_v1_3 < 4);
                    func_804426E4(&D_8014561C, &D_44F4A8, arg1->unk1C, (s32)arg1->unk20, (void *)arg1->unk14);
                    return 1;
                }
            }
            goto block_89;
        }
        goto block_89;
    }
    if (D_80153760 != 0) {
        if ((D_8015377C != 0) && (var_s2 == 0)) {
            if ((func_8040458C(var_s4, temp_s5, &sp48, sp38, sp20, &sp4C, sp28, sp30) == 0) && (sp48 != 0) && (func_802A137C(sp38, D_800D7700) == 0)) {
                if (func_80404F58(var_s4, temp_s5, (s32) &D_80153738, 0x18) == 0) {
                    var_s2 = 1;
                    if (func_804057F8((u8 *)&D_80153738, 0x14U, 4U) == (((func_80407748_S3 *)(&D_80153738))->unk14)) {
                        D_80153718 = D_80153738;
                        func_804426E4(&D_8014561C, &D_44F460, arg1->unk1C, (s32)arg1->unk20, NULL);
                        return 1;
                    }
                }
            }
            goto block_89;
        }
        if ((D_80153760 != 0) && (D_8015377C == 0)) {
            if (var_s2 == 0) {
                if ((func_8040458C(var_s4, temp_s5, &sp48, sp38, sp20, &sp4C, sp28, sp30) == 0) && (sp48 != 0) && (func_802A137C(sp38, D_800D7704) == 0)) {
                    var_s0_4 = sp4C;
                    if (D_800E28B4 != NULL) {
                        func_802538A8(0);
                        func_802537D8(NULL, D_800E28B4);
                    }
                    if (var_s0_4 != 0) {
                        var_s0_4 <<= 8;
                    } else {
                        var_s0_4 = D_8011FECC + 0x610;
                    }
                    temp_v0_3 = (u8 **) func_802533DC(0, var_s0_4, 0x33U, &D_800E0D90);
                    temp_a0_2 = *temp_v0_3;
                    D_800E28B4 = temp_v0_3;
                    D_800E28BC = temp_a0_2;
                    func_802A101C(temp_a0_2, 0, (u32) var_s0_4);
                    if (func_80404F58(var_s4, temp_s5, (s32) D_800E28BC, sp4C << 8) == 0) {
                        var_a1_2 = (((func_80407748_S5 *)(D_800E28BC))->unk0);
                        if ((var_a1_2 == temp_s7) && (func_804057F8(D_800E28BC, var_a1_2 - 4, 0xBU) == ((SaveChecksum *)&D_800E28BC[(((func_80407748_S5 *)(D_800E28BC))->unk0) - (s32)sizeof(SaveChecksum)])->checksum) && (D_8011FECC == (((func_80407748_S5 *)(D_800E28BC))->unk4))) {
                            func_804426E4(&D_8014561C, &D_44F2D4, arg1->unk1C, (s32)arg1->unk20, NULL);
                            return 1;
                        }
                    }
                    var_s2 = 1;
                    if ((D_800E28B0 != NULL) || (D_800E28B4 != NULL)) {
                        func_802538A8(0);
                    }
                    if (D_800E28B0 != NULL) {
                        func_802537D8(NULL, D_800E28B0);
                    }
                    if (D_800E28B4 != NULL) {
                        func_802537D8(NULL, D_800E28B4);
                    }
                    D_800E28B0 = NULL;
                    D_800E28B4 = NULL;
                    D_800E28B8 = 0;
                    D_800E28BC = NULL;
                    goto block_89;
                }
                goto block_89;
            }
            goto block_91;
        }
        goto block_89;
    }
block_89:
    var_v0 = 0;
    if (var_s2 != 0) {
block_91:
        if (D_8015377C != 0) {

        }
        D_80153754 = temp_s5;
        func_804426E4(&D_8014561C, &D_44FB68, arg1->unk1C, (s32)arg1->unk20, D_8015377C ? (void *)&D_44F0B8 : (void *)&D_44F100);
        var_v0 = 1;
    }
    return var_v0;
}

#endif
