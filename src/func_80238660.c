#ifdef NON_MATCHING
/* Draws a fading trail of directional HUD markers from local width, alpha and color tables. */
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
s32 func_802ABC18(s32, s32, s16, s16, f32, f32, s32);
f32 func_802BC380(f32);
typedef struct { f32 quarter, one; } QuarterOne;
typedef struct { f32 positive, negative; } DirectionPair;
typedef struct { f32 positive, border; } BorderPair;
#if defined(VERSION_US_REV1)
#define QUARTER_PAIR D_800C85C8
#define K00 D_800C85C8.quarter
#define K04 D_800C85C8.one
#define K08 D_800C85D0
#define K0C D_800C85D4
#define DIRECTION_PAIR D_800C85D8
#define K10 D_800C85D8.positive
#define K14 D_800C85D8.negative
#define BORDER_PAIR D_800C85E0
#define K18 D_800C85E0.positive
#define K1C D_800C85E0.border
#define K20 D_800C85E8
#define K24 D_800C85EC
#define K28 D_800C85F0
#define K2C D_800C85F4
#define K30 D_800C85F8
#define K34 D_800C85FC
#define K38 D_800C8600
#define WIDTHS D_800C853C
#define ALPHA D_800C8558
#define COLORS D_800C8574
#elif defined(VERSION_US)
#define QUARTER_PAIR D_800C3408
#define K00 D_800C3408.quarter
#define K04 D_800C3408.one
#define K08 D_800C3410
#define K0C D_800C3414
#define DIRECTION_PAIR D_800C3418
#define K10 D_800C3418.positive
#define K14 D_800C3418.negative
#define BORDER_PAIR D_800C3420
#define K18 D_800C3420.positive
#define K1C D_800C3420.border
#define K20 D_800C3428
#define K24 D_800C342C
#define K28 D_800C3430
#define K2C D_800C3434
#define K30 D_800C3438
#define K34 D_800C343C
#define K38 D_800C3440
#define WIDTHS D_800C337C
#define ALPHA D_800C3398
#define COLORS D_800C33B4
#elif defined(VERSION_EU)
#define QUARTER_PAIR D_800C3788
#define K00 D_800C3788.quarter
#define K04 D_800C3788.one
#define K08 D_800C3790
#define K0C D_800C3794
#define DIRECTION_PAIR D_800C3798
#define K10 D_800C3798.positive
#define K14 D_800C3798.negative
#define BORDER_PAIR D_800C37A0
#define K18 D_800C37A0.positive
#define K1C D_800C37A0.border
#define K20 D_800C37A8
#define K24 D_800C37AC
#define K28 D_800C37B0
#define K2C D_800C37B4
#define K30 D_800C37B8
#define K34 D_800C37BC
#define K38 D_800C37C0
#define WIDTHS D_800C36FC
#define ALPHA D_800C3718
#define COLORS D_800C3734
#elif defined(VERSION_EU_X)
#define QUARTER_PAIR D_800C37C8
#define K00 D_800C37C8.quarter
#define K04 D_800C37C8.one
#define K08 D_800C37D0
#define K0C D_800C37D4
#define DIRECTION_PAIR D_800C37D8
#define K10 D_800C37D8.positive
#define K14 D_800C37D8.negative
#define BORDER_PAIR D_800C37E0
#define K18 D_800C37E0.positive
#define K1C D_800C37E0.border
#define K20 D_800C37E8
#define K24 D_800C37EC
#define K28 D_800C37F0
#define K2C D_800C37F4
#define K30 D_800C37F8
#define K34 D_800C37FC
#define K38 D_800C3800
#define WIDTHS D_800C373C
#define ALPHA D_800C3758
#define COLORS D_800C3774
#elif defined(VERSION_DE)
#define QUARTER_PAIR D_800C34D8
#define K00 D_800C34D8.quarter
#define K04 D_800C34D8.one
#define K08 D_800C34E0
#define K0C D_800C34E4
#define DIRECTION_PAIR D_800C34E8
#define K10 D_800C34E8.positive
#define K14 D_800C34E8.negative
#define BORDER_PAIR D_800C34F0
#define K18 D_800C34F0.positive
#define K1C D_800C34F0.border
#define K20 D_800C34F8
#define K24 D_800C34FC
#define K28 D_800C3500
#define K2C D_800C3504
#define K30 D_800C3508
#define K34 D_800C350C
#define K38 D_800C3510
#define WIDTHS D_800C344C
#define ALPHA D_800C3468
#define COLORS D_800C3484
#endif
extern const QuarterOne QUARTER_PAIR;
extern const f32 K08;
extern const f32 K0C;
extern const DirectionPair DIRECTION_PAIR;
extern const BorderPair BORDER_PAIR;
extern const f32 K20;
extern const f32 K24;
extern const f32 K28;
extern const f32 K2C;
extern const f32 K30;
extern const f32 K34;
extern const f32 K38;
typedef struct { s32 command, parameter; } DisplayCommand;
extern DisplayCommand *D_80110634;
typedef struct { f32 width; } MarkerWidth;
typedef struct { s32 alpha; } MarkerAlpha;
typedef union { s32 word[7]; f32 width[7]; u8 bytes[28]; } SevenWords;
typedef union { s32 word[21]; u8 bytes[84]; } TwentyOneWords;
extern SevenWords WIDTHS;
extern SevenWords ALPHA;
extern TwentyOneWords COLORS;
extern s32 D_800E28D0;
extern s32 D_800E28D4;                          
typedef struct func_80238660_S1 func_80238660_S1;
typedef struct func_80238660_S2 func_80238660_S2;
typedef struct func_80238660_S3 func_80238660_S3;
typedef struct func_80238660_S4 func_80238660_S4;
typedef struct func_80238660_S5 func_80238660_S5;
typedef struct func_80238660_S6 func_80238660_S6;
typedef struct func_80238660_S7 func_80238660_S7;
typedef struct func_80238660_S8 func_80238660_S8;
typedef struct func_80238660_S9 func_80238660_S9;
typedef struct func_80238660_S10 func_80238660_S10;
struct func_80238660_S1 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
};
struct func_80238660_S2 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
};
struct func_80238660_S3 {
    char pad0[0x120];
    s32 unk120;
};
struct func_80238660_S4 {
    s32 unk0;
    s32 unk4;
};
struct func_80238660_S5 {
    char pad0[0x8];
    s32 unk8;
};
struct func_80238660_S6 {
    s32 unk0;
    s32 unk4;
};
struct func_80238660_S7 {
    char unk0[1];
};
struct func_80238660_S8 {
    char pad0[0x20];
    f32 unk20;
};
struct func_80238660_S9 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};
struct func_80238660_S10 {
    char pad0[0x3];
    u8 unk3;
    char pad3[0x8];
    s32 unkC;
};

/* Copies marker widths, alpha and colors, then draws directional HUD markers. */

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0xb8, 0xbc, 0xc0, 0xc4, 0xc8, 0xcc, 0xd0, 0xd4, 0xd8, 0xdc, 0xe8, 0xec, 0xf0, 0xf4, 0x100, 0x104, 0x110, 0x114], gap at: 0xe0. */
void func_80238660(func_80238660_S3 *arg0, f32 arg1, f32 arg2, f32 arg3, volatile s32 arg4) /* FAKEMATCH: Reload the draw mode at each original branch. */ {
    SevenWords widths;
    SevenWords alpha;
    TwentyOneWords colors;
    f32 fade_y;
    f32 quarter;
    f32 conversion_limit;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f20;
    f32 temp_f21;
    f32 temp_f25;
    f32 temp_f25_2;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f3;
    f32 temp_f4;
    f32 temp_f5;
    f32 temp_f6;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f1;
    f32 var_f1_2;
    f32 var_f1_3;
    f32 var_f21;
    f32 var_f22;
    f32 var_f23;
    f32 var_f23_2;
    f32 var_f24;
    f32 var_f26;
    DisplayCommand *temp_a0;
    DisplayCommand **display;
    DisplayCommand **first_display;
    volatile DisplayCommand *var_a2; /* FAKEMATCH: Preserve the command-store ordering before its draw call. */
    s32 *var_s2;
    u8 *color_base;
    s32 *var_v0;
    s32 *var_v1;
    s32 var_a0;
    s32 var_s0;
    s32 var_s1;
    s32 var_s3;
    s32 var_s4;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v1_2;
    s32 enabled;
    s32 high_bit;
    func_80238660_S8 *var_v0_2;

    var_f24 = arg1;
    var_f22 = arg2;
    var_f23 = arg3;
    widths = WIDTHS;
    alpha = ALPHA;
    colors = COLORS;
    if ((var_f23 != 0.0f) && (arg0->unk120 == 0)) {
        temp_f21 = (f32) ((s32) D_800E28D0 / 2) - var_f24;
        temp_f20 = (f32) ((s32) D_800E28D4 / 2) - var_f22;
        first_display = &D_80110634;
        temp_a0 = (*first_display)++;
        temp_a0->command = 0xE3001201;
        temp_a0->parameter = 0x2000;
        temp_f25 = func_802BC380((temp_f21 * temp_f21) + (temp_f20 * temp_f20));
        if (arg4 == 0) {
            quarter = K00;
            temp_f1 = temp_f25 / func_802BC380(((f32) (D_800E28D0 * D_800E28D0) * quarter) + ((f32) (D_800E28D4 * D_800E28D4) * quarter));
            if (temp_f1 > 1.0f) {
                var_f23 = 0.0f;
            } else {
                var_f23 *= 1.0f - temp_f1;
            }
        }
        temp_f25 *= K08;
        var_f1 = temp_f21;
        if (temp_f21 < 0.0f) {
            var_f1 = -temp_f21;
        }
        if (temp_f20 < 0.0f) {
            if (-temp_f20 < var_f1) {
                goto block_16;
            }
            goto block_22;
        }
        if (temp_f20 < var_f1) {
block_16:
            var_f26 = K0C;
            if (temp_f21 > 0.0f) {
                var_f26 = K10;
            }
            if (temp_f21 < 0.0f) {
                var_f21 = temp_f20 / -temp_f21;
            } else {
                var_f21 = temp_f20 / temp_f21;
            }
        } else {
block_22:
            if (temp_f20 < 0.0f) {
                var_f26 = temp_f21 / -temp_f20;
            } else {
                var_f26 = temp_f21 / temp_f20;
            }
            var_f21 = K14;
            if (temp_f20 > 0.0f) {
                var_f21 = K18;
            }
        }
        var_s0 = 0;
        if (arg4 != 0) {
            temp_f6 = (f32) D_800E28D4 + K1C;
            temp_f5 = var_f24 + K1C;
            var_f1_2 = temp_f6 - var_f22;
            temp_f4 = ((f32) D_800E28D0 + K1C) - var_f24;
            temp_f2 = var_f22 + K1C;
            if (!(var_f1_2 <= temp_f4)) {
                var_f1_2 = temp_f4;
            }
            if (!(var_f1_2 <= temp_f2)) {
                var_f1_2 = temp_f2;
            }
            if (!(var_f1_2 <= temp_f5)) {
                var_f1_2 = temp_f5;
            }
            if (!(var_f1_2 <= K1C)) {
                var_f1_2 = K1C;
            }
            if (var_f1_2 < 0.0f) {
                var_f23 = 0.0f;
            } else {
                /* FAKEMATCH: Keep the duplicated fade coordinate separate from the loop coordinate. */
                fade_y = var_f22;
                var_f0 = temp_f6 - fade_y;
                if (!(var_f0 <= temp_f4)) {
                    var_f0 = temp_f4;
                }
                if (!(var_f0 <= temp_f2)) {
                    var_f0 = temp_f2;
                }
                if (!(var_f0 <= temp_f5)) {
                    var_f0 = temp_f5;
                }
                if (!(var_f0 <= K1C)) {
                    var_f0 = K1C;
                }
                var_f23 = var_f23 * (var_f0 / K1C);
            }
            var_f0_2 = var_f23;
            if (!(var_f23 > K20)) {
                var_f0_2 = 0.0f;
                if (!(var_f23 < 0.0f)) {
                    var_f0_2 = var_f23;
                    goto block_53;
                }
            } else {
block_53:
                if (var_f0_2 > K20) {
                    var_f0_2 = K20;
                }
            }
            var_f23 = var_f0_2;
            var_s0 = 0;
        }
        /* FAKEMATCH: Keep the conversion mask and draw flag live across marker draws. */
        display = &D_80110634;
        conversion_limit = K24;
        enabled = 1;
        high_bit = 0x80000000;
        var_s4 = 8;
        var_s3 = 4;
        /* FAKEMATCH: Keep the table base separate from the advancing red-channel cursor. */
        color_base = colors.bytes;
        var_s2 = (s32 *)color_base;
        var_s1 = var_s0;
loop_57:
        var_f24 += var_f26 * temp_f25;
        var_f22 += var_f21 * temp_f25;
        if (arg4 != 0) {

            if (var_s0 == 0) {
                var_f1_3 = K28;
            } else {
                goto block_61;
            }
        } else {

block_61:
            var_f1_3 = ((MarkerWidth *)(void *)&widths.bytes[var_s1])->width * K2C;
        }
        var_f1_3 *= K30;
        temp_f3 = var_f1_3 * K34;
        temp_f2_2 = -temp_f3;
        if ((temp_f2_2 < var_f24) && (var_f24 < ((f32) D_800E28D0 + temp_f3)) && (temp_f2_2 < var_f22) && (var_f22 < ((f32) D_800E28D4 + temp_f3))) {
            if ((arg4 != 0) && (var_s0 == 0)) {
                var_a2 = *display;
                temp_f0 = var_f23 * K38;
                *display = (DisplayCommand *)(var_a2 + 1);
                var_a2->command = 0xFB000000;
                if (!(temp_f0 >= conversion_limit)) {
                    var_v1_2 = (s32) temp_f0;
                    var_a0 = 0x258;
                } else {
                    var_v1_2 = (s32) (temp_f0 - conversion_limit) | high_bit;
                    var_a0 = 0x258;
                }
                var_v0_3 = -0x100;
                /* FAKEMATCH: Let the compiler merge draw tails after each branch prepares its arguments. */
                var_a2->parameter = (s32) (var_v1_2 | var_v0_3);
                func_802ABC18(var_a0, 0, (s16) (s32) (var_f24 - temp_f3), (s16) (s32) (var_f22 - temp_f3), var_f1_3, var_f1_3, enabled);
            } else {
                var_a2 = *display;
                var_a2->command = 0xFB000000;
                *display = (DisplayCommand *)(var_a2 + 1);
                temp_f0_2 = (f32) ((MarkerAlpha *)(void *)&alpha.bytes[var_s1])->alpha * var_f23;
                var_v1_2 = ((((func_80238660_S10 *)(var_s2))->unk3) << 0x18) | ((((func_80238660_S10 *)&color_base[var_s3])->unk3) << 0x10) | ((((func_80238660_S10 *)&color_base[var_s4])->unk3) << 8);
                if (!(temp_f0_2 >= conversion_limit)) {
                    var_v0_4 = (s32) temp_f0_2;
                    var_a0 = 0x259;
                } else {
                    var_v0_4 = (s32) (temp_f0_2 - conversion_limit) | high_bit;
                    var_a0 = 0x259;
                }
                var_v0_3 = var_v0_4 & 0xFF;
                var_a2->parameter = (s32) (var_v1_2 | var_v0_3);
                func_802ABC18(var_a0, 0, (s16) (s32) (var_f24 - temp_f3), (s16) (s32) (var_f22 - temp_f3), var_f1_3, var_f1_3, enabled);
            }

            var_s1 += 4;
            var_s4 += 0xC;
            var_s3 += 0xC;
            var_s0 += 1;
            var_s2 = &((func_80238660_S10 *)(var_s2))->unkC;
            if (var_s0 < 7) {
                goto loop_57;
            }
        }
    }
}

#endif
