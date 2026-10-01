#ifdef NON_MATCHING
/* Emit a clipped textured rectangle as display-list commands in texture-sized row strips. */
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
/* The values func_80418224 loads by address:
 * 0x800E1434 = 1024.0 (float, D_800E1434 in this cartridge's tables)
 * 0x800E1438 = 1024.0 (float, D_800E1438 in this cartridge's tables)
 * 0x800E143C = 1024.0 (float, unnamed in this cartridge's tables)
 */
typedef struct func_80418224_S1 func_80418224_S1;
typedef struct func_80418224_S2 func_80418224_S2;
typedef union func_80418224_S2_U8 { u8 v0; s32 v1; } func_80418224_S2_U8;
typedef union func_80418224_S2_U10 { u8 v0; s32 v1; } func_80418224_S2_U10;
typedef union func_80418224_S2_U18 { u8 v0; s32 v1; } func_80418224_S2_U18;
typedef union func_80418224_S2_U20 { u8 v0; s32 v1; } func_80418224_S2_U20;
typedef union func_80418224_S2_U28 { u8 v0; s32 v1; } func_80418224_S2_U28;
struct func_80418224_S1 {
    char pad0[0x4];
    s16 unk4;
    s16 unk6;
    s16 unk8;
    char pad8[0xE];
    s32 unk18;
};
struct func_80418224_S2 {
    s32 unk0;
    s32 unk4;
    func_80418224_S2_U8 unk8;
    char pad8[0x4];
    func_80418224_S2_U10 unk10;
    char pad10[0x4];
    func_80418224_S2_U18 unk18;
    char pad18[0x4];
    func_80418224_S2_U20 unk20;
    char pad20[0x4];
    func_80418224_S2_U28 unk28;
    char pad28[0x4];
    u8 unk30;
};

extern func_80418224_S2 *D_80110634;
extern func_80418224_S1 *D_800E32A4;
#if defined(VERSION_US_REV1)
extern f32 D_800E1434;
extern f32 D_800E1438;
extern f32 D_800E143C;
extern s32 D_800E32B0;
extern u32 D_800E32B4;
extern s32 D_800E32B8;
#elif defined(VERSION_US)
extern f32 D_800DC0B4;
#define D_800E1434 D_800DC0B4
extern f32 D_800DC0B8;
#define D_800E1438 D_800DC0B8
extern f32 D_800DC0BC;
#define D_800E143C D_800DC0BC
extern s32 D_800DDF10;
#define D_800E32B0 D_800DDF10
extern u32 D_800DDF14;
#define D_800E32B4 D_800DDF14
extern s32 D_800DDF18;
#define D_800E32B8 D_800DDF18
#elif defined(VERSION_EU_X)
extern f32 D_800E8C44;
#define D_800E1434 D_800E8C44
extern f32 D_800E8C48;
#define D_800E1438 D_800E8C48
extern f32 D_800E8C4C;
#define D_800E143C D_800E8C4C
extern s32 D_800EAA90;
#define D_800E32B0 D_800EAA90
extern u32 D_800EAA94;
#define D_800E32B4 D_800EAA94
extern s32 D_800EAA98;
#define D_800E32B8 D_800EAA98
#elif defined(VERSION_EU)
extern f32 D_800EDA84;
#define D_800E1434 D_800EDA84
extern f32 D_800EDA88;
#define D_800E1438 D_800EDA88
extern f32 D_800EDA8C;
#define D_800E143C D_800EDA8C
extern s32 D_800EF8D0;
#define D_800E32B0 D_800EF8D0
extern u32 D_800EF8D4;
#define D_800E32B4 D_800EF8D4
extern s32 D_800EF8D8;
#define D_800E32B8 D_800EF8D8
#elif defined(VERSION_DE)
extern f32 D_800DD404;
#define D_800E1434 D_800DD404
extern f32 D_800DD408;
#define D_800E1438 D_800DD408
extern f32 D_800DD40C;
#define D_800E143C D_800DD40C
extern s32 D_800DF260;
#define D_800E32B0 D_800DF260
extern u32 D_800DF264;
#define D_800E32B4 D_800DF264
extern s32 D_800DF268;
#define D_800E32B8 D_800DF268
#endif

void func_80418224(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7) {
    struct { s32 sp0, sp4, sp8, spC, sp10, sp14; } frame_prefix;
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    s32 sp24;
    s32 sp28;
    s32 sp2C;
    s32 sp30;
    s32 sp34;
    f32 temp_f1;
    f32 start_v; /* FAKEMATCH: load the starting V coordinate after the texture guards. */
    s32 temp_a0;
    s32 temp_t2;
    s16 temp_v0;
    s16 temp_v0_3;
    s16 temp_v0_4;
    s16 temp_v0_5;
    s16 temp_v1_2;
    s16 var_a0;
    s16 var_a0_5;
    s16 var_a1;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_5;
    s32 temp_a0_6;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a1_3;
    s32 temp_a2;
    s32 temp_f5;
    s32 f510_word; /* FAKEMATCH: stage the texture word before display-list pointer writes. */
    s32 temp_f5_2;
    s32 temp_lo;
    s32 temp_lo_2;
    s32 temp_lo_3;
    s32 temp_s2;
    s32 temp_t6;
    s32 temp_t7;
    s32 temp_v0_2;
    s32 temp_v1_3;
    s32 var_a0_2;
    s32 var_a0_4;
    s32 var_a0_6;
    s32 var_a0_7;
    s32 var_a1_2;
    s32 var_t3;
    s32 var_t4;
    s32 var_t7;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    s32 var_v1_4;
    s32 var_v1_5;
    u16 temp_v1;
    u32 temp_v1_shifted; /* FAKEMATCH: keep the unsigned format4 width bits across division. */
    s32 temp_v1_signed; /* FAKEMATCH: reuse the sign-extended format4 width. */
    func_80418224_S2 *temp_a0_10;
    func_80418224_S2 *temp_a0_11;
    func_80418224_S2 *temp_a0_4;
    func_80418224_S2 *temp_a0_7;
    func_80418224_S2 *temp_a0_8;
    func_80418224_S2 *temp_a0_9;
    func_80418224_S2 *temp_a1_4;
    func_80418224_S2 *temp_a1_5;
    func_80418224_S2 *temp_a1_6;
    func_80418224_S2 *temp_a1_7;
    func_80418224_S2 *temp_a1_8;
    func_80418224_S2 *temp_a2_2;
    func_80418224_S2 *temp_a2_3;
    func_80418224_S2 *temp_a2_4;
    func_80418224_S2 *temp_a2_5;
    func_80418224_S2 *temp_a2_6;
    func_80418224_S2 *temp_a2_7;
    func_80418224_S2 *temp_v0_10;
    func_80418224_S2 *temp_v0_11;
    func_80418224_S2 *temp_v0_12;
    func_80418224_S2 *temp_v0_13;
    func_80418224_S2 *temp_v0_14;
    func_80418224_S2 *temp_v0_15;
    func_80418224_S2 *temp_v0_16;
    func_80418224_S2 *temp_v0_17;
    func_80418224_S2 *temp_v0_18;
    func_80418224_S2 *temp_v0_19;
    func_80418224_S2 *temp_v0_6;
    func_80418224_S2 *temp_v0_7;
    func_80418224_S2 *temp_v0_8;
    func_80418224_S2 *temp_v0_9;
    func_80418224_S2 *temp_v1_10;
    func_80418224_S2 *temp_v1_11;
    func_80418224_S2 *temp_v1_12;
    func_80418224_S2 *temp_v1_13;
    func_80418224_S2 *temp_v1_14;
    func_80418224_S2 *temp_v1_4;
    func_80418224_S2 *temp_v1_5;
    func_80418224_S2 *temp_v1_6;
    func_80418224_S2 *temp_v1_7;
    func_80418224_S2 *temp_v1_8;
    func_80418224_S2 *temp_v1_9;
    func_80418224_S2 *var_a0_3;
    func_80418224_S2 **dl;

    sp1C = 0;
    temp_s2 = arg3; /* FAKEMATCH: keep ending Y live across setup. */
    temp_v0 = D_800E32A4->unk4;
    if (temp_v0 != 0) {
        temp_a0 = D_800E32A4->unk6;
        if ((temp_a0 != 0) && (arg0 != arg2) && (arg1 != temp_s2)) {
            start_v = arg5;
            temp_v0_2 = (arg2 - arg0) + 1;
            temp_f5 = (s32) ((arg6 - arg4) * (f32) temp_v0 * D_800E1434);
            if (temp_v0_2 == 0) {

            }
            if ((temp_v0_2 == -1) && ((temp_f5 / temp_v0_2) == 0x80000000)) {

            }
            temp_f1 = (arg7 - start_v) * (f32) temp_a0;
            temp_a0_2 = (temp_s2 - arg1) + 1;
            frame_prefix.sp4 = temp_f5 / temp_v0_2;
            temp_f5_2 = (s32) (temp_f1 * D_800E1434);
            if (temp_a0_2 == 0) {

            }
            if ((temp_a0_2 == -1) && ((temp_f5_2 / temp_a0_2) == 0x80000000)) {

            }
            temp_t2 = D_800E32A4->unk8;
            D_800E32B4 = 0;
            frame_prefix.sp8 = temp_f5_2 / temp_a0_2;
            if ((s32) temp_f1 == 0) {
                frame_prefix.sp0 = 0x3E8;
            } else {
                frame_prefix.sp0 = (s32) (((f32) temp_a0_2 * D_800E1434) / temp_f1);
            }
            temp_t6 = arg1 << 0xA; /* FAKEMATCH: start the scaled Y lifetime at setup completion. */
            arg0 <<= 0xA;
            arg2 <<= 0xA;
            sp18 = (s32) (start_v * (f32) temp_a0 * D_800E1438);
            temp_s2 <<= 0xA;
            if (D_800E32B8 != 8) {
                if (D_800E32B8 < 9) {
                    if (D_800E32B8 == 4) goto setup_format4;
                    goto block_38;
                }
                if (D_800E32B8 == 0x10) goto setup_format16;
                if (D_800E32B8 == 0x18) goto setup_format24;
                goto block_38;
            }
            goto setup_format8;
setup_format4:
            temp_v1 = (u16) D_800E32A4->unk8;
            temp_v1_shifted = (u32) temp_v1 << 0x10;
            temp_v1_signed = (s32) temp_v1_shifted >> 0x10;
            if (temp_v1_signed == 0) {

            }
            if ((temp_v1_signed == -1) && ((0x1000 / temp_v1_signed) == 0x80000000)) {

            }
            frame_prefix.spC = (s32) (temp_v1_signed + (temp_v1_shifted >> 0x1F)) >> 1;
            sp34 = (0x1000 / temp_v1_signed) & ~1;
            goto after_setup;
setup_format8:
            temp_v0_5 = D_800E32A4->unk8;
            if (temp_v0_5 == 0) {

            }
            if ((temp_v0_5 == -1) && ((0x800 / temp_v0_5) == 0x80000000)) {

            }
            var_v1 = 0x800 / temp_v0_5;
            var_v0 = temp_v0_5;
            goto block_36;
setup_format16:
            temp_v0_4 = D_800E32A4->unk8;
            if (temp_v0_4 == 0) {

            }
            if ((temp_v0_4 == -1) && ((0x800 / temp_v0_4) == 0x80000000)) {

            }
            var_v1 = 0x800 / temp_v0_4;
            frame_prefix.spC = temp_v0_4 * 2;
            goto block_37;
setup_format24:
            temp_v0_3 = D_800E32A4->unk8;
            if (temp_v0_3 == 0) {

            }
            if ((temp_v0_3 == -1) && ((0x400 / temp_v0_3) == 0x80000000)) {

            }
            var_v1 = 0x400 / temp_v0_3;
            var_v0 = temp_v0_3 * 4;
block_36:
            frame_prefix.spC = var_v0;
block_37:
            sp34 = var_v1 & ~1;
            goto after_setup;
block_38:
            frame_prefix.spC = 0;
            sp34 = 0;
after_setup:
            temp_v1_2 = D_800E32A4->unk6;
            if (temp_v1_2 < sp34) {
                sp34 = (s32) temp_v1_2;
            }
            sp30 = 0;
            frame_prefix.sp10 = (s32) temp_v1_2;
            frame_prefix.sp14 = (s32) (arg4 * (f32) temp_v0 * D_800E143C);
            if (temp_v1_2 >= 0) {
                dl = &D_80110634;
                sp20 = sp34 - 1;
                temp_lo = temp_t2 * sp34;
                sp28 = ((((s32) ((temp_t2 >> 1) + 7) >> 3) & 0x1FF) << 9) | 0xF5400000;
                sp24 = (s32) (temp_lo + 3) >> 2;
                sp2C = (s32) (temp_lo + 1) >> 1;
                do {
                    s32 tile_left; /* FAKEMATCH: split the oriented left edge from the initial edge. */
                    s32 tile_right; /* FAKEMATCH: split the oriented right edge from the initial edge. */
                    s32 old_row; /* FAKEMATCH: retain the row for the texture stride after advancing. */
                    old_row = sp30;
                    var_t7 = 0;
                    temp_v1_3 = old_row + sp34;
                    var_t3 = temp_t6 + ((s32) (frame_prefix.sp0 * ((sp30 << 0xA) - sp18)) >> 0xA);
                    var_t4 = (temp_t6 + ((s32) (frame_prefix.sp0 * ((temp_v1_3 << 0xA) - sp18)) >> 0xA)) - 0x400;
                    sp30 = temp_v1_3;
                    temp_lo_2 = old_row * frame_prefix.spC;
                    temp_a2 = D_800E32A4->unk18 + temp_lo_2;
                    if (var_t4 < var_t3) {
                        temp_t7 = var_t3;
                        var_t3 = var_t4;
                        var_t4 = temp_t7;
                        var_t7 = sp20 << 0xA;
                    }
                    tile_left = var_t3;
                    tile_right = var_t4;
                    if ((temp_s2 >= tile_left) && (tile_right >= temp_t6)) {
                        if (tile_left < temp_t6) {
                            temp_lo_3 = (temp_t6 - tile_left) * frame_prefix.sp8;
                            tile_left = temp_t6;
                            var_t7 += temp_lo_3 >> 0xA;
                        }
                        if (temp_s2 < tile_right) {
                            tile_right = temp_s2;
                        }
                        if (D_800E32B0 == 0) {
                            if (D_800E32B8 != 8) {
                                if (D_800E32B8 < 9) {
                                    if (D_800E32B8 == 4) goto mode0_format4;
                                    var_v0_2 = (tile_right >> 8) + 4;
                                    goto block_115;
                                }
                                if (D_800E32B8 == 0x10) goto mode0_format16;
                                var_v0_2 = (tile_right >> 8) + 4;
                                goto block_115;
                            }
                            goto mode0_format8;
mode0_format4:
                                        var_a0 = temp_t2;
                                        temp_v1_4 = (*dl);
                                        temp_v0_6 = temp_v1_4; /* FAKEMATCH: keep the old command while advancing the pointer. */
                                        temp_v1_4 = (void *)&temp_v1_4->unk8.v0;
                                        (*dl) = temp_v1_4;
                                        temp_v0_6->unk0 = 0xFD500000;
                                        temp_v0_6->unk4 = temp_a2;
                                        temp_v0_7 = (void *)&temp_v1_4->unk8;
                                        temp_a2_2 = (void *)&temp_v1_4->unk10.v0;
                                        (*dl) = temp_v0_7;
                                        temp_v1_4->unk0 = 0xF5500000;
                                        temp_v1_4->unk4 = 0x07080200;
                                        (*dl) = temp_a2_2;
                                        temp_v1_4->unk8.v1 = 0xE6000000;
                                        temp_v0_7->unk4 = 0;
                                        (*dl) = (void *)&temp_v1_4->unk18;
                                        temp_v1_4->unk10.v1 = 0xF3000000;
                                        if (temp_t2 < 0) {
                                            var_a0 = temp_t2 + 0xF;
                                        }
                                        temp_a1 = var_a0 >> 4;
                                        var_v1_2 = 0x800;
                                        if (temp_a1 > 0) {
                                            var_v1_2 = temp_a1 + 0x7FF;
                                        }
                                        var_a0_2 = sp24 - 1;
                                        if (var_a0_2 >= 0x800) {
                                            var_a0_2 = 0x7FF;
                                        }
                                        temp_a0_3 = ((var_a0_2 & 0xFFF) << 0xC) | 0x07000000;
                                        if (temp_a1 > 0) {
                                            if (temp_a1 == 0) {

                                            }
                                            if ((temp_a1 == -1) && ((var_v1_2 / temp_a1) == 0x80000000)) {

                                            }
                                            temp_a2_2->unk4 = (s32) (temp_a0_3 | ((var_v1_2 / temp_a1) & 0xFFF));
                                        } else {
                                            temp_a2_2->unk4 = (s32) (temp_a0_3 | (var_v1_2 & 0xFFF));
                                        }
                                        temp_v0_8 = (*dl);
                                        temp_v1_5 = (void *)&(*dl)->unk8.v0;
                                        var_a0_3 = (void *)&temp_v1_5->unk8.v0;
                                        (*dl) = temp_v1_5;
                                        temp_v0_8->unk0 = 0xE7000000;
                                        temp_v0_8->unk4 = 0;
                                        (*dl) = var_a0_3;
                                        temp_v1_5->unk4 = 0x80200;
                                        temp_v1_5->unk0 = sp28;
                                        (*dl) = (void *)&temp_v1_5->unk10.v0;
                                        temp_v1_5->unk8.v1 = 0xF2000000;
                                        goto block_114;
mode0_format8:
                                var_a0_5 = temp_t2;
                                temp_v1_8 = (*dl);
                                temp_v0_11 = temp_v1_8; /* FAKEMATCH: keep the old format8 command while advancing. */
                                temp_v1_8 = (void *)&temp_v1_8->unk8.v0;
                                (*dl) = temp_v1_8;
                                temp_v0_11->unk0 = 0xFD500000;
                                temp_v0_11->unk4 = temp_a2;
                                temp_v0_12 = (void *)&temp_v1_8->unk8.v0;
                                temp_a2_4 = (void *)&temp_v1_8->unk10.v0;
                                (*dl) = temp_v0_12;
                                temp_v1_8->unk0 = 0xF5500000;
                                temp_v1_8->unk4 = 0x07080200;
                                (*dl) = temp_a2_4;
                                temp_v1_8->unk8.v1 = 0xE6000000;
                                temp_v0_12->unk4 = 0;
                                (*dl) = (void *)&temp_v1_8->unk18;
                                temp_v1_8->unk10.v1 = 0xF3000000;
                                if (temp_t2 < 0) {
                                    var_a0_5 = D_800E32A4->unk8 + 7;
                                }
                                temp_a1_3 = var_a0_5 >> 3;
                                var_v1_4 = 0x800;
                                if (temp_a1_3 > 0) {
                                    var_v1_4 = temp_a1_3 + 0x7FF;
                                }
                                var_a0_6 = sp2C - 1;
                                if (var_a0_6 >= 0x800) {
                                    var_a0_6 = 0x7FF;
                                }
                                temp_a0_6 = ((var_a0_6 & 0xFFF) << 0xC) | 0x07000000;
                                if (temp_a1_3 > 0) {
                                    if (temp_a1_3 == 0) {

                                    }
                                    if ((temp_a1_3 == -1) && ((var_v1_4 / temp_a1_3) == 0x80000000)) {

                                    }
                                    temp_a2_4->unk4 = (s32) (temp_a0_6 | ((var_v1_4 / temp_a1_3) & 0xFFF));
                                } else {
                                    temp_a2_4->unk4 = (s32) (temp_a0_6 | (var_v1_4 & 0xFFF));
                                }
                                temp_v0_13 = (*dl);
                                temp_a0_7 = (void *)&(*dl)->unk8.v0;
                                temp_a1_4 = (void *)&temp_a0_7->unk8.v0;
                                (*dl) = temp_a0_7;
                                temp_v0_13->unk0 = 0xE7000000;
                                temp_v0_13->unk4 = 0;
                                (*dl) = temp_a1_4;
                                temp_a0_7->unk0 = (s32) (((((s32) (D_800E32A4->unk8 + 7) >> 3) & 0x1FF) << 9) | 0xF5480000);
                                temp_a0_7->unk4 = 0x80200;
                                (*dl) = (void *)&temp_a0_7->unk10.v0;
                                temp_a0_7->unk8.v1 = 0xF2000000;
                                temp_a1_4->unk4 = (((((temp_t2 - 1) * 4) & 0xFFF) << 0xC) | ((sp20 * 4) & 0xFFF));
                                goto block_115;
mode0_format16:
                                    var_a1 = temp_t2;
                                    temp_v1_6 = (*dl);
                                    temp_a0_4 = temp_v1_6; /* FAKEMATCH: keep the old format16 command while advancing. */
                                    temp_v1_6 = (void *)&temp_v1_6->unk8.v0;
                                    (*dl) = temp_v1_6;
                                    temp_a0_4->unk0 = 0xFD100000;
                                    temp_v0_9 = (void *)&temp_v1_6->unk8.v0;
                                    temp_a0_4->unk4 = temp_a2;
                                    temp_a2_3 = (void *)&temp_v1_6->unk10.v0;
                                    (*dl) = temp_v0_9;
                                    temp_v1_6->unk0 = 0xF5100000;
                                    temp_v1_6->unk4 = 0x07080200;
                                    (*dl) = temp_a2_3;
                                    temp_v1_6->unk8.v1 = 0xE6000000;
                                    temp_v0_9->unk4 = 0;
                                    (*dl) = (void *)&temp_v1_6->unk18;
                                    temp_v1_6->unk10.v1 = 0xF3000000;
                                    if (temp_t2 < 0) {
                                        var_a1 = temp_t2 + 3;
                                    }
                                    temp_a1_2 = var_a1 >> 2;
                                    var_v1_3 = 0x800;
                                    if (temp_a1_2 > 0) {
                                        var_v1_3 = temp_a1_2 + 0x7FF;
                                    }
                                    var_a0_4 = temp_lo - 1;
                                    if (var_a0_4 >= 0x800) {
                                        var_a0_4 = 0x7FF;
                                    }
                                    temp_a0_5 = ((var_a0_4 & 0xFFF) << 0xC) | 0x07000000;
                                    if (temp_a1_2 > 0) {
                                        if (temp_a1_2 == 0) {

                                        }
                                        if ((temp_a1_2 == -1) && ((var_v1_3 / temp_a1_2) == 0x80000000)) {

                                        }
                                        temp_a2_3->unk4 = (s32) (temp_a0_5 | ((var_v1_3 / temp_a1_2) & 0xFFF));
                                    } else {
                                        temp_a2_3->unk4 = (s32) (temp_a0_5 | (var_v1_3 & 0xFFF));
                                    }
                                    temp_v0_10 = (*dl);
                                    temp_v1_7 = (void *)&(*dl)->unk8.v0;
                                    var_a0_3 = (void *)&temp_v1_7->unk8.v0;
                                    (*dl) = temp_v1_7;
                                    temp_v0_10->unk0 = 0xE7000000;
                                    temp_v0_10->unk4 = 0;
                                    (*dl) = var_a0_3;
                                    temp_v1_7->unk0 = (s32) (((((s32) ((D_800E32A4->unk8 * 2) + 7) >> 3) & 0x1FF) << 9) | 0xF5100000);
                                    temp_v1_7->unk4 = 0x80200;
                                    (*dl) = (void *)&temp_v1_7->unk10.v0;
                                    temp_v1_7->unk8.v1 = 0xF2000000;
                                    goto block_114;
                        } else {
                            if (D_800E32B8 != 8) {
                                if (D_800E32B8 < 9) {
                                    if (D_800E32B8 == 4) goto mode1_format4;
                                    var_v0_2 = (tile_right >> 8) + 4;
                                    goto block_115;
                                }
                                if (D_800E32B8 == 0x10) goto block_alt_format16;
                                var_v0_2 = (tile_right >> 8) + 4;
                                goto block_115;
                            }
                            goto mode1_format8;
mode1_format4:
                                    var_v1_5 = sp24 - 1;
                                    temp_a0_8 = (*dl);
                                    temp_v0_14 = temp_a0_8; /* FAKEMATCH: keep the old mode1 format4 command while advancing. */
                                    temp_a0_8 = (void *)&temp_a0_8->unk8.v0;
                                    (*dl) = temp_a0_8;
                                    temp_v0_14->unk0 = 0xFD500000;
                                    temp_v0_14->unk4 = temp_a2;
                                    temp_v0_15 = (void *)&temp_a0_8->unk8.v0;
                                    temp_a1_5 = (void *)&temp_a0_8->unk10.v0;
                                    temp_a2_5 = (void *)&temp_a0_8->unk18.v0;
                                    (*dl) = temp_v0_15;
                                    temp_a0_8->unk0 = 0xF5500000;
                                    temp_a0_8->unk4 = 0x07080200;
                                    (*dl) = temp_a1_5;
                                    temp_a0_8->unk8.v1 = 0xE6000000;
                                    temp_v0_15->unk4 = 0;
                                    (*dl) = temp_a2_5;
                                    temp_a0_8->unk10.v1 = 0xF3000000;
                                    if (var_v1_5 >= 0x800) {
                                        var_v1_5 = 0x7FF;
                                    }
                                    temp_a1_5->unk4 = (s32) (((var_v1_5 & 0xFFF) << 0xC) | 0x07000000);
                                    temp_v0_16 = (void *)&temp_a0_8->unk20.v0;
                                    temp_v1_9 = (void *)&temp_a0_8->unk28.v0;
                                    (*dl) = temp_v0_16;
                                    temp_a0_8->unk18.v1 = 0xE7000000;
                                    temp_a2_5->unk4 = 0;
                                    (*dl) = temp_v1_9;
                                    temp_a0_8->unk20.v1 = sp28;
                                    temp_v0_16->unk4 = 0x80200;
                                    (*dl) = (void *)&temp_a0_8->unk30;
                                    temp_a0_8->unk28.v1 = 0xF2000000;
                                    temp_v1_9->unk4 = (((((temp_t2 - 1) * 4) & 0xFFF) << 0xC) | ((sp20 * 4) & 0xFFF));
                                    goto block_115;
mode1_format8:
                            if (sp1C == 0) {
                                sp1C = 1;
                                temp_a0_9 = (*dl);
                                temp_v0_18 = temp_a0_9; /* FAKEMATCH: preserve the old mode1 command base. */
                                temp_a0_9 = (void *)&temp_a0_9->unk8.v0;
                                temp_a1_7 = (void *)&temp_a0_9->unk8.v0;
                                (*dl) = temp_a0_9;
                                temp_v0_18->unk0 = 0xF5500000;
                                temp_v0_18->unk4 = 0x07080200;
                                temp_v1_13 = (void *)&temp_a0_9->unk10.v0;
                                (*dl)->unk0 = (s32) (((((s32) (D_800E32A4->unk8 + 7) >> 3) & 0x1FF) << 9) | 0xF5480000);
                                (*dl) = temp_a1_7;
                                temp_a0_9->unk4 = 0x80200;
                                (*dl) = temp_v1_13;
                                temp_a0_9->unk8.v1 = 0xF2000000;
                                temp_a1_7->unk4 = (((((temp_t2 - 1) * 4) & 0xFFF) << 0xC) | ((sp20 * 4) & 0xFFF));
                                (*dl) = (void *)&temp_a0_9->unk18.v0;
                                temp_a0_9->unk10.v1 = 0xE7000000;
                                temp_v1_13->unk4 = 0;
                            }
                            var_a1_2 = sp2C - 1;
                            temp_v0_19 = (*dl);
                            temp_v1_14 = (void *)&(*dl)->unk8.v0;
                            temp_a0_10 = (void *)&temp_v1_14->unk8.v0;
                            (*dl) = temp_v1_14;
                            temp_v0_19->unk0 = 0xE6000000;
                            temp_v0_19->unk4 = 0;
                            (*dl) = temp_a0_10;
                            (*dl)->unk8.v1 = 0xFD500000;
                            temp_v1_14->unk4 = temp_a2;
                            (*dl) = (void *)&temp_v1_14->unk10.v0;
                            temp_v1_14->unk8.v1 = 0xF3000000;
                            if (var_a1_2 >= 0x800) {
                                var_a1_2 = 0x7FF;
                            }
                            temp_a0_10->unk4 = (s32) (((var_a1_2 & 0xFFF) << 0xC) | 0x07000000);
                            goto block_115;
block_alt_format16:
                                var_a0_7 = temp_lo - 1;
                                temp_a1_6 = (*dl);
                                temp_v1_10 = temp_a1_6; /* FAKEMATCH: keep the old mode1 format16 command while advancing. */
                                temp_a1_6 = (void *)&temp_a1_6->unk8.v0;
                                (*dl) = temp_a1_6;
                                temp_v1_10->unk0 = 0xFD100000;
                                temp_v0_17 = (void *)&temp_a1_6->unk8.v0;
                                temp_v1_10->unk4 = temp_a2;
                                temp_v1_11 = (void *)&temp_a1_6->unk10.v0;
                                temp_a2_6 = (void *)&temp_a1_6->unk18.v0;
                                (*dl) = temp_v0_17;
                                temp_a1_6->unk0 = 0xF5100000;
                                temp_a1_6->unk4 = 0x07080200;
                                (*dl) = temp_v1_11;
                                temp_a1_6->unk8.v1 = 0xE6000000;
                                temp_v0_17->unk4 = 0;
                                (*dl) = temp_a2_6;
                                temp_a1_6->unk10.v1 = 0xF3000000;
                                if (var_a0_7 >= 0x800) {
                                    var_a0_7 = 0x7FF;
                                }
                                temp_v1_11->unk4 = (s32) (((var_a0_7 & 0xFFF) << 0xC) | 0x07000000);
                                temp_v1_12 = (void *)&temp_a1_6->unk20.v0;
                                var_a0_3 = (void *)&temp_a1_6->unk28.v0;
                                f510_word = (s32) (((((s32) ((D_800E32A4->unk8 * 2) + 7) >> 3) & 0x1FF) << 9) | 0xF5100000);
                                (*dl) = temp_v1_12;
                                temp_a1_6->unk18.v1 = 0xE7000000;
                                temp_a2_6->unk4 = 0;
                                (*dl) = var_a0_3;
                                temp_a1_6->unk20.v1 = f510_word;
                                temp_v1_12->unk4 = 0x80200;
                                (*dl) = (void *)&temp_a1_6->unk30;
                                temp_a1_6->unk28.v1 = 0xF2000000;
block_114:
                                var_a0_3->unk4 = (((((temp_t2 - 1) * 4) & 0xFFF) << 0xC) | ((sp20 * 4) & 0xFFF));
                                goto block_115;
block_115:
                            var_v0_2 = (tile_right >> 8) + 4;
                        }
                        temp_a1_8 = (*dl);
                        temp_a2_7 = temp_a1_8; /* FAKEMATCH: retain the old final command while advancing. */
                        temp_a1_8 = (void *)&temp_a1_8->unk8.v0;
                        (*dl) = temp_a1_8;
                        temp_a0_11 = (void *)&temp_a1_8->unk8.v0;
                        temp_a2_7->unk0 = (s32) (((((arg2 >> 8) + 4) & 0xFFF) << 0xC) | ((var_v0_2 & 0xFFF) | 0xE4000000));
                        temp_a2_7->unk4 = (s32) ((((arg0 >> 8) & 0xFFF) << 0xC) | ((tile_left >> 8) & 0xFFF));
                        (*dl) = temp_a0_11;
                        temp_a1_8->unk0 = 0xE1000000;
                        temp_a1_8->unk4 = (s32) (((frame_prefix.sp14 >> 5) << 0x10) | ((var_t7 >> 5) & 0xFFFF));
                        (*dl) = (void *)&temp_a1_8->unk10.v0;
                        temp_a0_11->unk0 = 0xF1000000;
                        temp_a0_11->unk4 = (s32) ((frame_prefix.sp4 << 0x10) | (frame_prefix.sp8 & 0xFFFF));
                    }
                } while (frame_prefix.sp10 >= sp30);
            }
        }
    }
}

#endif
