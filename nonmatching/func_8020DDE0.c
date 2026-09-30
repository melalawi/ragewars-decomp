/* Computes and adjusts a projectile trajectory through successive elevation trials. */
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
/* The values func_8020DDE0 loads by address:
 * 0x800C6ECC = -90.0 (float, D_800C6ECC in this cartridge's tables)
 * 0x800C6ED0 = 90.0 (float, D_800C6ED0 in this cartridge's tables)
 * 0x800C6ED4 = 57.295776 (float, unnamed in this cartridge's tables)
 * 0x800C6ED8 = -90.0 (float, D_800C6ED8 in this cartridge's tables)
 * 0x800C6EDC = 90.0 (float, D_800C6EDC in this cartridge's tables)
 * 0x800C6EE0 = 57.295776 (float, D_800C6EE0 in this cartridge's tables)
 * 0x800C6EE4 = 45.0 (float, unnamed in this cartridge's tables)
 * 0x800C6EE8 = -45.0 (float, D_800C6EE8 in this cartridge's tables)
 * 0x800C6EEC = 45.0 (float, D_800C6EEC in this cartridge's tables)
 * 0x800C6EF0 = 90.0 (float, D_800C6EF0 in this cartridge's tables)
 * 0x800C6EF4 = 0.5 (float, unnamed in this cartridge's tables)
 * 0x800C6EF8 = 0.017453294 (float, D_800C6EF8 in this cartridge's tables)
 * 0x800C6EFC = 1.0 (float, D_800C6EFC in this cartridge's tables)
 * 0x800C6F00 = 45.0 (float, D_800C6F00 in this cartridge's tables)
 * 0x800C6F04 = 90.0 (float, unnamed in this cartridge's tables)
 * 0x800C6F08 = 45.0 (float, D_800C6F08 in this cartridge's tables)
 * 0x800C6F0C = -45.0 (float, D_800C6F0C in this cartridge's tables)
 * 0x800C6F10 = 45.0 (float, D_800C6F10 in this cartridge's tables)
 * 0x800C6F14 = 90.0 (float, unnamed in this cartridge's tables)
 * 0x800C6F18 = 45.0 (float, D_800C6F18 in this cartridge's tables)
 * 0x800C6F1C = -45.0 (float, D_800C6F1C in this cartridge's tables)
 * 0x800C6F20 = 45.0 (float, D_800C6F20 in this cartridge's tables)
 * 0x800C6F24 = 90.0 (float, unnamed in this cartridge's tables)
 * 0x800C6F28 = 1.0 (float, D_800C6F28 in this cartridge's tables)
 * 0x800C6F2C = 0.5 (float, D_800C6F2C in this cartridge's tables)
 */
s32 func_8020E674(void *, f32, f32);
s32 func_80265570(u32 *, s32, u32, s32 *, s32 *);
f32 func_80285600(s32);
char * func_8028FD94(int *, int);
f32 func_8029D044(f32, f32);
f32 func_8029ED3C(f32);
float func_802BB630(float);
f32 func_802BC380(f32);
extern s32 *D_801315F4;

typedef struct Vec3 { f32 x, y, z; } Vec3;
typedef struct func_8020DDE0_S1 func_8020DDE0_S1;
typedef struct func_8020DDE0_S2 func_8020DDE0_S2;
typedef struct func_8020DDE0_S4 func_8020DDE0_S4;
typedef struct func_8020DDE0_S5 func_8020DDE0_S5;
typedef struct func_8020DDE0_S6 func_8020DDE0_S6;
typedef struct func_8020DDE0_S7 func_8020DDE0_S7;
struct func_8020DDE0_S1 {
    func_8020DDE0_S2 * unk0;
    char pad0[0x244];
    f32 unk248;
    f32 unk24C;
    f32 unk250;
    f32 unk254;
    Vec3 unk258;
    f32 unk264;
    s32 unk268;
    s32 unk26C;
    s32 unk270;
    s32 unk274;
    f32 unk278;
    f32 unk27C;
    f32 unk280;
    s32 unk284;
};
struct func_8020DDE0_S2 {
    char pad0[0x8];
    Vec3 unk8;
    char pad14[0x61A];
    s16 unk62E;
};
struct func_8020DDE0_S4 {
    char pad0[0x4];
    s32 unk4;
    u32 unk8;
};
struct func_8020DDE0_S6 {
    char pad0[0x30];
    func_8020DDE0_S7 *unk30;
    char pad34[8];
};
struct func_8020DDE0_S5 {
    char pad0[0x8];
    func_8020DDE0_S6 unk8[1];
};
struct func_8020DDE0_S7 {
    u16 unk0;
    u16 unk2;
    u16 unk4;
    u16 unk6;
};

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x40, 0x44, 0x48, 0x4c, 0x58, 0x5c, 0x68, 0x6c, 0x70, 0x74], gap at: 0x50. */

#if defined(VERSION_EU_MUL)
#define D_800C6ECC D_800C20BC
#define D_800C6ED0 D_800C20C0
#define D_800C6ED4 D_800C20C4
#define D_800C6ED8 D_800C20C8
#define D_800C6EDC D_800C20CC
#define D_800C6EE0 D_800C20D0
#define D_800C6EE4 D_800C20D4
#define D_800C6EE8 D_800C20D8
#define D_800C6EEC D_800C20DC
#define D_800C6EF0 D_800C20E0
#define D_800C6EF4 D_800C20E4
#define D_800C6EF8 D_800C20E8
#define D_800C6EFC D_800C20EC
#define D_800C6F00 D_800C20F0
#define D_800C6F04 D_800C20F4
#define D_800C6F08 D_800C20F8
#define D_800C6F0C D_800C20FC
#define D_800C6F10 D_800C2100
#define D_800C6F14 D_800C2104
#define D_800C6F18 D_800C2108
#define D_800C6F1C D_800C210C
#define D_800C6F20 D_800C2110
#define D_800C6F24 D_800C2114
#define D_800C6F28 D_800C2118
#define D_800C6F2C D_800C211C
#define D_801315F4 D_80137534
extern s32 *D_80137534;
#endif
extern f32 D_800C6ECC;
extern f32 D_800C6ED0;
extern f32 D_800C6ED4;
extern f32 D_800C6ED8;
extern f32 D_800C6EDC;
extern f32 D_800C6EE0;
extern f32 D_800C6EE4;
extern f32 D_800C6EE8;
extern f32 D_800C6EEC;
extern f32 D_800C6EF0;
extern f32 D_800C6EF4;
extern f32 D_800C6EF8;
extern f32 D_800C6EFC;
extern f32 D_800C6F00;
extern f32 D_800C6F04;
extern f32 D_800C6F08;
extern f32 D_800C6F0C;
extern f32 D_800C6F10;
extern f32 D_800C6F14;
extern f32 D_800C6F18;
extern f32 D_800C6F1C;
extern f32 D_800C6F20;
extern f32 D_800C6F24;
extern f32 D_800C6F28;
extern f32 D_800C6F2C;
s32 func_8020DDE0(func_8020DDE0_S1 *arg0) {
    Vec3 start;
    Vec3 end;
    s32 sp38;
    s32 sp3C;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f1;
    /* FAKEMATCH: reuse the default angle scalar for the later trajectory result to match allocation. */
    f32 temp_f1_2;
    f32 temp_f20;
    f32 temp_f21;
    f32 temp_f22;
    f32 temp_f23;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 temp_f2_5;
    f32 temp_f3;
    f32 temp_f3_2;
    f32 temp_f3_3;
    f32 temp_f4;
    f32 radians;
    /* FAKEMATCH: stage resource arguments to preserve the original call setup order. */
    s32 entry_count;
    u32 *entry_data;
    s32 temp_s0;
    s32 *temp_s0_2;
    s32 temp_v0_6;
    s32 temp_v0_7;
    s32 temp_v0_8;
    s32 temp_v0_9;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v0_5;
    func_8020DDE0_S4 *temp_v0_2;
    u32 var_s2;
    func_8020DDE0_S6 *temp_s0_3;
    func_8020DDE0_S2 *temp_v0;
    func_8020DDE0_S7 *temp_v0_3;
    func_8020DDE0_S7 *temp_v0_4;
    func_8020DDE0_S2 *temp_v0_5;

    temp_s0 = arg0->unk0->unk62E;
    var_s2 = 0;
    if (temp_s0 != arg0->unk26C) {
        arg0->unk268 = 0;
        arg0->unk26C = (s32) temp_s0;
    }
    if (arg0 != NULL) {
        temp_v1 = arg0->unk268;
        if (temp_v1 == 0) {
            temp_v0 = arg0->unk0;
            start = temp_v0->unk8;
            end = arg0->unk258;
            temp_f3 = end.x - start.x;
            temp_f2 = end.y - start.y;
            temp_f1 = end.z - start.z;
            end.x = temp_f3;
            end.y = temp_f2;
            end.z = temp_f1;
            arg0->unk264 = func_802BC380((temp_f3 * temp_f3) + (temp_f2 * temp_f2) + (temp_f1 * temp_f1));
            temp_f22 = end.y;
            end.y = 0.0f;
            temp_f21 = func_802BC380((end.x * end.x) + (end.z * end.z));
            switch (temp_s0) {
            case 10:
            case 12:
                arg0->unk268 = 1;
                arg0->unk270 = 1;
                arg0->unk274 = 0;
                goto block_15;
            case 6:
            case 8:
                arg0->unk268 = 0xB;
                arg0->unk270 = 0;
                arg0->unk274 = 1;
                goto block_15;
            case 9:
                arg0->unk268 = 1;
                arg0->unk270 = 1;
                arg0->unk274 = 1;
                goto block_15;
            default:
                if (temp_f21 == 0.0f) {
                    if (temp_f22 < 0.0f) {
                        arg0->unk248 = D_800C6ECC;
                    } else {
                        arg0->unk248 = D_800C6ED0;
                    }
                } else {
                    arg0->unk248 = (f32) (func_8029D044(temp_f22, temp_f21) * D_800C6ED4);
                }
                temp_f1_2 = arg0->unk248;
                temp_f0_4 = 0.0f;
                arg0->unk270 = 0;
                arg0->unk274 = 0;
                arg0->unk24C = temp_f1_2;
                arg0->unk250 = temp_f0_4;
                arg0->unk254 = temp_f0_4;
                return 1;
            }
block_15:
                if (temp_f21 == 0.0f) {
                    if (temp_f22 < 0.0f) {
                        arg0->unk278 = D_800C6ED8;
                    } else {
                        arg0->unk278 = D_800C6EDC;
                    }
                } else {
                    arg0->unk278 = (f32) (func_8029D044(temp_f22, temp_f21) * D_800C6EE0);
                }
                arg0->unk24C = arg0->unk278;
                temp_f2_2 = arg0->unk278;
                if (temp_f2_2 > D_800C6EE4) {
                    arg0->unk284 = 0;
                } else {
                    var_v0 = 1;
                    if (!(temp_f2_2 > 0.0f)) {
                        var_v0 = 2;
                        if (!(temp_f2_2 > D_800C6EE8)) {
                            var_v0 = 3;
                        }
                    }
                    arg0->unk284 = var_v0;
                }
                temp_f0_2 = D_800C6EF0 - ((f32) arg0->unk284 * D_800C6EEC);
                temp_f2_3 = arg0->unk278;
                /* FAKEMATCH: commit the bound before reusing its scalar for the midpoint. */
                ((volatile func_8020DDE0_S1 *)arg0)->unk27C = temp_f0_2;
                temp_f0_2 = (temp_f0_2 + temp_f2_3) * D_800C6EF4;
                arg0->unk280 = temp_f2_3;
                arg0->unk278 = temp_f0_2;
                if (arg0->unk270 != 0) {
                    arg0->unk24C = temp_f0_2;
                }
                goto block_54;

        } else {
            if (temp_v1 < 0xB) {
                if (temp_s0 != 9) {
                    if (temp_s0 < 0xA) {
                        if (temp_s0 != 2) {

                        } else {
                            goto block_42;
                        }
                    } else {
                        if (temp_s0 == 0xA) goto block_42;
                        var_v0_2 = 0xC;
                        goto block_41;
                    }
                } else {
                    goto block_42;
                }
                goto block_43;
            }
            if (temp_v1 < 0x15) {
                arg0->unk270 = 0;
                if (temp_s0 != 8) {
                    if (temp_s0 < 9) {
                        if (temp_s0 != 6) {

                        } else {
                            goto block_42;
                        }
                    } else {
                        var_v0_2 = 9;
block_41:
                        if (temp_s0 == var_v0_2) {
                            goto block_42;
                        }
                    }
                } else {
block_42:
                    var_s2 = 0x12E;
                }
block_43:
                if (arg0->unk268 < 0x15) {
                    temp_s0_2 = D_801315F4;
                    temp_v0_2 = func_8028FD94(temp_s0_2, 1);
                    entry_data = &temp_v0_2->unk8;
                    entry_count = temp_v0_2->unk4;
                    if (func_80265570(entry_data, entry_count, var_s2, &sp38, &sp3C) == 0) {
                        arg0->unk270 = 0;
                        arg0->unk274 = 0;
                        arg0->unk268 = 0;
                        return 1;
                    }
                    temp_s0_3 = ((func_8020DDE0_S5 *)func_8028FD94(temp_s0_2, 2))->unk8;
                    temp_s0_3 += sp38;
                    temp_v0_3 = temp_s0_3->unk30;
                    temp_f23 = func_80285600((temp_v0_3->unk4 << 0x10) | temp_v0_3->unk6);
                    temp_v0_4 = temp_s0_3->unk30;
                    temp_f0_3 = func_80285600((temp_v0_4->unk0 << 0x10) | temp_v0_4->unk2);
                    temp_v0_5 = arg0->unk0;
                    start = temp_v0_5->unk8;
                    end = arg0->unk258;
                    temp_f4 = end.x - start.x;
                    temp_f3_2 = end.y - start.y;
                    temp_f2_4 = end.z - start.z;
                    end.x = temp_f4;
                    end.y = temp_f3_2;
                    end.z = temp_f2_4;
                    arg0->unk264 = func_802BC380((temp_f4 * temp_f4) + (temp_f3_2 * temp_f3_2) + (temp_f2_4 * temp_f2_4));
                    temp_f22 = end.y;
                    end.y = 0.0f;
                    temp_f21 = func_802BC380((end.x * end.x) + (end.z * end.z));
                    radians = D_800C6EF8;
                    temp_f0_4 = func_802BB630(arg0->unk278 * radians);
                    temp_f20 = temp_f0_4 * temp_f0_4;
                    temp_f1_2 = (func_8029ED3C(arg0->unk278 * radians) * temp_f21) + ((temp_f0_3 * (temp_f21 * temp_f21)) / (2.0f * (temp_f23 * temp_f23) * temp_f20));
                    if (((temp_f22 - D_800C6EFC) <= temp_f1_2) && (temp_f1_2 <= (temp_f22 + D_800C6EFC))) {
                        if (func_8020E674(arg0, temp_f23, temp_f0_3) != 0) {
                            temp_v0_6 = arg0->unk284;
                            temp_v0_7 = temp_v0_6 - 1;
                            if (temp_v0_6 > 0) {
                                arg0->unk284 = temp_v0_7;
                                arg0->unk27C = (f32) (D_800C6F04 - ((f32) temp_v0_7 * D_800C6F00));
                                arg0->unk280 = (f32) (D_800C6F00 - ((f32) arg0->unk284 * D_800C6F00));
                                if (arg0->unk270 != 0) {
                                    arg0->unk268 = 1;
                                } else {
                                    arg0->unk268 = 0xB;
                                }
block_54:
                                return 0;
                            }
                        }
                        if ((arg0->unk270 != 0) && (arg0->unk274 != 0)) {
                            temp_f3_3 = arg0->unk24C;
                            arg0->unk268 = 0xB;
                            arg0->unk270 = 0;
                            arg0->unk250 = (f32) (arg0->unk278 - arg0->unk248);
                            if (temp_f3_3 > D_800C6F08) {
                                arg0->unk284 = 0;
                            } else {
                                var_v0_4 = 1;
                                if (!(temp_f3_3 > 0.0f)) {
                                    var_v0_4 = 2;
                                    if (!(temp_f3_3 > D_800C6F0C)) {
                                        var_v0_4 = 3;
                                    }
                                }
                                arg0->unk284 = var_v0_4;
                            }
                            arg0->unk27C = (f32) (D_800C6F14 - ((f32) arg0->unk284 * D_800C6F10));
                            arg0->unk280 = (f32) (D_800C6F10 - ((f32) arg0->unk284 * D_800C6F10));
                            return 0;
                        }
                        arg0->unk270 = 0;
                        arg0->unk274 = 0;
                        arg0->unk268 = (s32) (arg0->unk268 + 1);
                        arg0->unk250 = (f32) (arg0->unk278 - arg0->unk248);
                        return 1;
                    }
                    temp_v1_2 = arg0->unk268 + 1;
                    if (temp_v1_2 == 0xB) {
                        temp_f2_5 = arg0->unk24C;
                        arg0->unk270 = 0;
                        arg0->unk268 = (s32) (arg0->unk268 + 1);
                        arg0->unk250 = (f32) (arg0->unk278 - arg0->unk248);
                        if (temp_f2_5 > D_800C6F18) {
                            arg0->unk284 = 0;
                        } else {
                            var_v0_5 = 1;
                            if (!(temp_f2_5 > 0.0f)) {
                                var_v0_5 = 2;
                                if (!(temp_f2_5 > D_800C6F1C)) {
                                    var_v0_5 = 3;
                                }
                            }
                            arg0->unk284 = var_v0_5;
                        }
                        arg0->unk27C = (f32) (D_800C6F24 - ((f32) arg0->unk284 * D_800C6F20));
                        arg0->unk280 = (f32) (D_800C6F20 - ((f32) arg0->unk284 * D_800C6F20));
                        if (arg0->unk274 == 0) {
                            arg0->unk268 = 0;
                        }
                        return arg0->unk274 == 0;
                    }
                    if (temp_v1_2 >= 0x15) {
                        arg0->unk270 = 0;
                        arg0->unk274 = 0;
                        arg0->unk268 = (s32) (arg0->unk268 + 1);
                        arg0->unk254 = (f32) (arg0->unk278 - arg0->unk24C);
                        return 1;
                    }
                    if (temp_f1_2 < (temp_f22 - D_800C6F28)) {
                        temp_v0_8 = arg0->unk284;
                        if (temp_v0_8 != 0) {
                            if (temp_v0_8 < 0) goto block_87;
                            if (temp_v0_8 < 4) {
                                goto block_83;
                            }
                        } else {
                            goto block_86;
                        }
                    } else {
                        temp_v0_9 = arg0->unk284;
                        if (temp_v0_9 == 0) {
block_83:
                            arg0->unk280 = (f32) arg0->unk278;
                        } else {
                            if (temp_v0_9 < 0) goto block_87;
                            if (temp_v0_9 >= 4) goto block_87;
block_86:
                            arg0->unk27C = (f32) arg0->unk278;
                        }
                    }
block_87:
                    arg0->unk268 = (s32) (arg0->unk268 + 1);
                    arg0->unk278 = (arg0->unk27C + arg0->unk280) * D_800C6F2C;
                    return 0;
                }
                goto block_88;
            }
block_88:
            arg0->unk268 = 0;
            arg0->unk270 = 0;
            arg0->unk274 = 0;
            /* Duplicate return node #89. Try simplifying control flow for better match */
            return 1;
        }
    } else {
        return 1;
    }
}
