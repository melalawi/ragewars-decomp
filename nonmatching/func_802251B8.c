/* Updates player movement, position, and movement sound selection. */
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
#if defined(VERSION_US)
#define D_800C7B48 D_800C2988
#define D_800C7B4C D_800C298C
#define D_800C7B50 D_800C2990
#define D_800C7B54 D_800C2994
#define D_800C7B58 D_800C2998
#define D_800C7B5C D_800C299C
#define D_800C7B60 D_800C29A0
#define D_800C7B64 D_800C29A4
#define D_800C7B68 D_800C29A8
#define D_800C7B6C D_800C29AC
#define D_800C7B70 D_800C29B0
#define D_800C7B74 D_800C29B4
#define D_800C7B78 D_800C29B8
#define D_800C7B7C D_800C29BC
#define D_800C7B80 D_800C29C0
#define D_800C7B84 D_800C29C4
#define D_800C7B88 D_800C29C8
#define D_800C7B8C D_800C29CC
#define D_800C7B90 D_800C29D0
#define D_800C7B94 D_800C29D4
#define D_800C7B98 D_800C29D8
#define D_800C7B9C D_800C29DC
#define D_800C7BA0 D_800C29E0
#define D_800C7BA4 D_800C29E4
#define D_800C7BA8 D_800C29E8
#define D_800C7BAC D_800C29EC
#define D_800C7BB0 D_800C29F0
#define D_800C7BB4 D_800C29F4
#define D_800C7BB8 D_800C29F8
#define D_800C7BBC D_800C29FC
#define D_800C7BC0 D_800C2A00
#define D_800C7BC4 D_800C2A04
#define D_800C7BC8 D_800C2A08
#define D_800C7BCC D_800C2A0C
#define D_800CF21A D_800C9EEA
#define D_800CF21E D_800C9EEE
#define D_800CF222 D_800C9EF2
#endif
#if defined(VERSION_EU)
#define D_800C7B48 D_800C2CF8
#define D_800C7B4C D_800C2CFC
#define D_800C7B50 D_800C2D00
#define D_800C7B54 D_800C2D04
#define D_800C7B58 D_800C2D08
#define D_800C7B5C D_800C2D0C
#define D_800C7B60 D_800C2D10
#define D_800C7B64 D_800C2D14
#define D_800C7B68 D_800C2D18
#define D_800C7B6C D_800C2D1C
#define D_800C7B70 D_800C2D20
#define D_800C7B74 D_800C2D24
#define D_800C7B78 D_800C2D28
#define D_800C7B7C D_800C2D2C
#define D_800C7B80 D_800C2D30
#define D_800C7B84 D_800C2D34
#define D_800C7B88 D_800C2D38
#define D_800C7B8C D_800C2D3C
#define D_800C7B90 D_800C2D40
#define D_800C7B94 D_800C2D44
#define D_800C7B98 D_800C2D48
#define D_800C7B9C D_800C2D4C
#define D_800C7BA0 D_800C2D50
#define D_800C7BA4 D_800C2D54
#define D_800C7BA8 D_800C2D58
#define D_800C7BAC D_800C2D5C
#define D_800C7BB0 D_800C2D60
#define D_800C7BB4 D_800C2D64
#define D_800C7BB8 D_800C2D68
#define D_800C7BBC D_800C2D6C
#define D_800C7BC0 D_800C2D70
#define D_800C7BC4 D_800C2D74
#define D_800C7BC8 D_800C2D78
#define D_800C7BCC D_800C2D7C
#define D_800CF21A D_800CABBA
#define D_800CF21E D_800CABBE
#define D_800CF222 D_800CABC2
#endif
#if defined(VERSION_EU_MUL)
#define D_800C7B48 D_800C2D38
#define D_800C7B4C D_800C2D3C
#define D_800C7B50 D_800C2D40
#define D_800C7B54 D_800C2D44
#define D_800C7B58 D_800C2D48
#define D_800C7B5C D_800C2D4C
#define D_800C7B60 D_800C2D50
#define D_800C7B64 D_800C2D54
#define D_800C7B68 D_800C2D58
#define D_800C7B6C D_800C2D5C
#define D_800C7B70 D_800C2D60
#define D_800C7B74 D_800C2D64
#define D_800C7B78 D_800C2D68
#define D_800C7B7C D_800C2D6C
#define D_800C7B80 D_800C2D70
#define D_800C7B84 D_800C2D74
#define D_800C7B88 D_800C2D78
#define D_800C7B8C D_800C2D7C
#define D_800C7B90 D_800C2D80
#define D_800C7B94 D_800C2D84
#define D_800C7B98 D_800C2D88
#define D_800C7B9C D_800C2D8C
#define D_800C7BA0 D_800C2D90
#define D_800C7BA4 D_800C2D94
#define D_800C7BA8 D_800C2D98
#define D_800C7BAC D_800C2D9C
#define D_800C7BB0 D_800C2DA0
#define D_800C7BB4 D_800C2DA4
#define D_800C7BB8 D_800C2DA8
#define D_800C7BBC D_800C2DAC
#define D_800C7BC0 D_800C2DB0
#define D_800C7BC4 D_800C2DB4
#define D_800C7BC8 D_800C2DB8
#define D_800C7BCC D_800C2DBC
#define D_800CF21A D_800CB58A
#define D_800CF21E D_800CB58E
#define D_800CF222 D_800CB592
#endif
#if defined(VERSION_DE)
#define D_800C7B48 D_800C2A58
#define D_800C7B4C D_800C2A5C
#define D_800C7B50 D_800C2A60
#define D_800C7B54 D_800C2A64
#define D_800C7B58 D_800C2A68
#define D_800C7B5C D_800C2A6C
#define D_800C7B60 D_800C2A70
#define D_800C7B64 D_800C2A74
#define D_800C7B68 D_800C2A78
#define D_800C7B6C D_800C2A7C
#define D_800C7B70 D_800C2A80
#define D_800C7B74 D_800C2A84
#define D_800C7B78 D_800C2A88
#define D_800C7B7C D_800C2A8C
#define D_800C7B80 D_800C2A90
#define D_800C7B84 D_800C2A94
#define D_800C7B88 D_800C2A98
#define D_800C7B8C D_800C2A9C
#define D_800C7B90 D_800C2AA0
#define D_800C7B94 D_800C2AA4
#define D_800C7B98 D_800C2AA8
#define D_800C7B9C D_800C2AAC
#define D_800C7BA0 D_800C2AB0
#define D_800C7BA4 D_800C2AB4
#define D_800C7BA8 D_800C2AB8
#define D_800C7BAC D_800C2ABC
#define D_800C7BB0 D_800C2AC0
#define D_800C7BB4 D_800C2AC4
#define D_800C7BB8 D_800C2AC8
#define D_800C7BBC D_800C2ACC
#define D_800C7BC0 D_800C2AD0
#define D_800C7BC4 D_800C2AD4
#define D_800C7BC8 D_800C2AD8
#define D_800C7BCC D_800C2ADC
#define D_800CF21A D_800C9FD6
#define D_800CF21E D_800C9FDA
#define D_800CF222 D_800C9FDE
#define D_800CF1E8 D_800C9FAA
#endif
extern const f32 D_800C7B48;
extern const f32 D_800C7B4C;
extern const f32 D_800C7B50;
extern const f32 D_800C7B54;
extern const f32 D_800C7B58;
extern const f32 D_800C7B5C;
extern const f32 D_800C7B60;
extern const f32 D_800C7B64;
extern const f32 D_800C7B68;
extern const f32 D_800C7B6C;
extern const f32 D_800C7B70;
extern const f32 D_800C7B74;
extern const f32 D_800C7B78;
extern const f32 D_800C7B7C;
extern const f32 D_800C7B80;
extern const f32 D_800C7B84;
extern const f32 D_800C7B88;
extern const f32 D_800C7B8C;
extern const f32 D_800C7B90;
extern const f32 D_800C7B94;
extern const f32 D_800C7B98;
extern const f32 D_800C7B9C;
extern const f32 D_800C7BA0;
extern const f32 D_800C7BA4;
extern const f32 D_800C7BA8;
extern const f32 D_800C7BAC;
extern const f32 D_800C7BB0;
extern const f32 D_800C7BB4;
extern const f32 D_800C7BB8;
extern const f32 D_800C7BBC;
extern const f32 D_800C7BC0;
extern const f32 D_800C7BC4;
extern const f32 D_800C7BC8;
extern const f32 D_800C7BCC;

s32 func_802227D0(void *, void *, s32);
int func_8024E61C(void *);
f32 func_80274710(f32, f32, f32);
f32 func_80274810(f32, f32);
void func_802748E0(f32 *, f32, f32);
float func_802BB630(float);
float func_802BC200(float);
typedef struct { f32 x, y, z; } Vec;
void func_8025DE74(s32, Vec, s32, s32);
typedef struct { char pad[0x1D]; u8 flag; char pad1E[0x60E]; s32 unk62C; } Settings;
extern Settings D_801462C8;
extern volatile s32 D_800CE47C;
extern s32 D_800CED30;                          /* unable to generate initializer: unknown type */
#if defined(VERSION_DE)
extern struct { struct { s16 id; s16 pad; } sounds[1]; } D_800CF1E8;
#else
extern struct { char pad[6]; struct { s16 id; s16 pad; } sounds[1]; } D_800CF1E8;
#endif
extern f32 D_800D2988[2];
extern s16 D_800CF21A;                          /* const */
extern s16 D_800CF21E;                          /* const */
extern s16 D_800CF222[3];             
typedef struct func_802251B8_S1 func_802251B8_S1;
typedef struct func_802251B8_S2 func_802251B8_S2;
typedef struct func_802251B8_S3 func_802251B8_S3;
typedef struct func_802251B8_S4 func_802251B8_S4;
typedef struct func_802251B8_S5 func_802251B8_S5;
typedef union func_802251B8_S2_U724 { s32 v0; f32 v1; } func_802251B8_S2_U724;
typedef union func_802251B8_S2_U728 { s8 v0; f32 v1; } func_802251B8_S2_U728;
struct func_802251B8_S1 {
    char pad0[0x8];
    Vec pos;
    char pad10[0x4];
    func_802251B8_S3 * unk18;
    f32 unk1C;
    char pad1C[0x4];
    f32 unk24;
    char pad24[0x10];
    s32 unk38;
    char pad38[0x30];
    f32 unk6C;
};
struct func_802251B8_S2 {
    char pad0[0x38];
    s32 unk38;
    char pad38[0xA8];
    u16 unkE4;
    char padE4[0x4F2];
    func_802251B8_S5 * unk5D8;
    char pad5D8[0x4];
    s32 unk5E0;
    char pad5E0[0x74];
    f32 unk658;
    char pad658[0x10];
    f32 unk66C;
    char pad66C[0x2C];
    f32 unk69C;
    f32 unk6A0;
    f32 unk6A4;
    f32 unk6A8;
    char pad6A8[0x4];
    s32 unk6B0;
    char pad6B0[0xC];
    f32 unk6C0;
    f32 unk6C4;
    char pad6C4[0x18];
    f32 unk6E0;
    f32 unk6E4;
    f32 unk6E8;
    f32 unk6EC;
    f32 unk6F0;
    char pad6F0[0x30];
    func_802251B8_S2_U724 unk724;
    func_802251B8_S2_U728 unk728;
    f32 unk72C;
    char pad72C[0xB8];
    s32 unk7E8;
    char pad7E8[0x80];
    s32 unk86C;
    char pad86C[0x968];
    f32 unk11D8;
    char pad11D8[0x1D8];
    s32 *unk13B4;
    char pad13B4[0x308];
    f32 unk16C0;
};
struct func_802251B8_S3 {
    char pad0[0x14];
    s32 unk14;
};
struct func_802251B8_S4 {
    char pad0[0x1D];
    u8 unk1D;
    char pad1D[0x60E];
    s32 unk62C;
};
struct func_802251B8_S5 {
    char pad0[0x8F];
    u8 unk8F;
};

/* const */

/* FAKEMATCH: shared scalar lifetimes reproduce the original register allocation. */
void func_802251B8(func_802251B8_S2 *arg0, func_802251B8_S1 *arg1) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f20_3;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 temp_f3;
    f32 temp_f3_2;
    f32 var_a1;
    f32 var_a2;
    f32 var_f0;
    f32 var_f0_3;
    f32 var_f0_4;
    f32 var_f0_5;
    f32 var_f1;
    f32 var_f1_2;
    s32 temp_v1;
    s32 var_v0;
    Settings *settings;
    f32 deltaX, deltaZ, deltaY, cosine;
    f32 recoil;
    /* FAKEMATCH: stage the identifier before the consecutive velocity stores. */
    s32 actorId;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v1;

    if (!(arg1->unk38 & 0x100)) {
        arg0->unk724.v0 = 0;
        arg0->unk16C0 = 0.0f;
        if (func_8024E61C(arg1) == 0) {
            recoil = D_800C7B48;
            arg0->unk6E8 = (f32) (arg0->unk6E8 - (func_802BC200(arg1->unk6C) * recoil));
            arg0->unk6F0 = (f32) (arg0->unk6F0 - (func_802BB630(arg1->unk6C) * recoil));
        }
        func_802227D0(arg0, arg1, 5);
        return;
    }
    temp_f0 = arg0->unk69C;
    if ((temp_f0 > D_800C7B4C) || (temp_f0 < D_800C7B4C)) {
        arg0->unk16C0 = (f32) (arg0->unk16C0 + (temp_f0 * D_800C7B50));
    }
    temp_f0_2 = arg0->unk16C0;
    if (temp_f0_2 > D_800C7B54) {
        arg0->unk16C0 = D_800C7B54;
    } else if (temp_f0_2 < D_800C7B58) {
        arg0->unk16C0 = D_800C7B58;
    }
    /* FAKEMATCH: reload the clamped field after either conditional store. */
    func_802748E0(&arg0->unk728.v1, ((volatile func_802251B8_S2 *)arg0)->unk16C0 * D_800C7B5C, 0.5f);
    var_f1_2 = -arg0->unk6A0 * D_800C7B60;
    var_f0 = D_800C7B64;
    if ((var_f1_2 < D_800C7B64) || (var_f0 = D_800C7B68, (var_f1_2 > D_800C7B68))) {
        var_f1_2 = var_f0;
    }
    func_802748E0(&arg0->unk724.v1, var_f1_2 * D_800C7B6C, 0.0625f);
    if ((arg0->unk7E8 == 0) && !(arg0->unk6E4 > D_800C7B70)) {
        if (!(arg1->unk38 & 0xC0000)) {
            if (arg1->unk18->unk14 & 2) {
                if ((arg0->unk6B0 & 0x10) && (arg0->unk11D8 <= 0.0f)) {
                    func_802227D0(arg0, arg1, 5);
                    var_v0 = 1;
                } else { var_v0 = 0; }
            } else { var_v0 = 0; }
        } else { var_v0 = 0; }
    } else { var_v0 = 0; }
    if (var_v0 != 0) {
        temp_f1 = arg1->unk6C + arg0->unk728.v1;
        arg1->unk6C = temp_f1;
        temp_f2 = arg0->unk728.v1;
        if (temp_f2 >= D_800C7B74) {
            temp_f0_2 = temp_f1 + D_800C7B78;
            goto block_25;
        }
        if (temp_f2 <= D_800C7B7C) {
            temp_f0_2 = temp_f1 - D_800C7B80;
block_25:
            arg1->unk6C = temp_f0_2;
        }
        temp_f20 = func_802BC200(arg1->unk6C + D_800C7B84);
        temp_f1_2 = arg1->unk24 + (func_802BB630(arg1->unk6C + D_800C7B84) * D_800C7B88);
        arg1->unk1C = (f32) (arg1->unk1C + (temp_f20 * D_800C7B88));
        arg1->unk24 = temp_f1_2;
        temp_f1_3 = arg0->unk728.v1;
        if (temp_f1_3 >= D_800C7B8C) {
            var_f0_3 = arg1->unk6C + D_800C7B90;
            goto block_30;
        }
        if (temp_f1_3 <= D_800C7B94) {
            var_f0_3 = arg1->unk6C - D_800C7B98;
block_30:
            arg1->unk6C = var_f0_3;
        }
        arg0->unk728.v1 = 0.0f;
        arg0->unk16C0 = 0.0f;
        return;
    }
    temp_f2_2 = arg0->unk6E0 * arg0->unk6C0 * func_802BC200(arg0->unk658 * D_800C7B9C);
    temp_f3 = arg0->unk6A8;
    if ((temp_f3 > 0.0f) || (temp_f3 < 0.0f)) {
        func_802748E0(&arg0->unk72C, temp_f2_2, 0.25f);
    } else {
        func_802748E0(&arg0->unk72C, 0.0f, 0.9f);
    }
    temp_f2_3 = arg0->unk6A8;
    var_v1 = 1;
    if (!(temp_f2_3 > 0.0f)) {
        var_v1 = 0;
    }
    var_v0_2 = 1;
    if (!(temp_f2_3 < 0.0f)) {
        var_v0_2 = 0;
    }
    temp_f20_2 = arg0->unk6C0;
    if ((var_v1 != 0) || (var_v0_2 != 0)) {
        var_a1 = temp_f2_3 * D_800C7BA0;
        if (temp_f2_3 < 0.0f) {
            var_f0_4 = -temp_f2_3 * D_800C7BA4;
        } else {
            var_f0_4 = temp_f2_3 * D_800C7BA8;
        }
        arg0->unk6C0 = func_80274710(arg0->unk6C0, var_a1, var_f0_4);
    } else {
        arg0->unk6C0 = func_80274810(temp_f20_2, D_800C7BAC);
    }
    temp_f2_4 = arg0->unk6A4;
    if (temp_f2_4 != 0.0f) {
        var_a2 = temp_f2_4 * D_800C7BB0;
        if (temp_f2_4 < 0.0f) {
            var_f0_5 = -temp_f2_4 * D_800C7BB4;
        } else {
            var_f0_5 = temp_f2_4 * D_800C7BB8;
        }
        arg0->unk6C4 = func_80274710(arg0->unk6C4, var_a2, var_f0_5);
    } else {
        arg0->unk6C4 = func_80274810(arg0->unk6C4, D_800C7BBC);
    }
    if ((arg0->unk6C0 == 0.0f) && (arg0->unk6C4 == 0.0f)) {
        arg0->unk658 = 0.0f;
        if (temp_f20_2 != 0.0f) {
            arg0->unk6E0 = (f32) -arg0->unk6E0;
        }
    } else {
        temp_f3_2 = arg0->unk658;
        if (temp_f3_2 > D_800C7BC0) {
            arg0->unk6E0 = (f32) -arg0->unk6E0;
            arg0->unk658 = (f32) (temp_f3_2 - D_800C7BC0);
            arg0->unk6C0 = (f32) (arg0->unk6C0 * D_800C7BC4);
            arg0->unk6C4 = (f32) (arg0->unk6C4 * D_800C7BC4);
            settings = &D_801462C8;
            if ((settings->flag != 0) && ((arg0->unk5D8->unk8F != 1) || (settings->unk62C == 0))) {
                temp_v1 = arg0->unk38;
                if (temp_v1 & 0x200) {
                    func_8025DE74(D_800CF21A, arg1->pos, 0, -1);
                } else if (temp_v1 & 0x400) {
                    func_8025DE74(D_800CF21E, arg1->pos, 0, -1);
                } else if (temp_v1 & 0x800) {
                    func_8025DE74(*D_800CF222, arg1->pos, 0, -1);
                } else {
                    func_8025DE74(D_800CF1E8.sounds[arg0->unk5E0].id, arg1->pos, 0, -1);
                }
            }
        }
    }
    temp_f20_3 = func_802BC200(arg1->unk6C - D_800C7BC8);
    cosine = func_802BB630(arg1->unk6C - D_800C7BC8);
    /* FAKEMATCH: volatile reads preserve the separate movement-scale loads. */
    deltaX = temp_f20_3 * ((volatile func_802251B8_S2 *)arg0)->unk6C4 * ((volatile func_802251B8_S2 *)arg0)->unk66C;
    deltaZ = cosine * ((volatile func_802251B8_S2 *)arg0)->unk6C4 * ((volatile func_802251B8_S2 *)arg0)->unk66C;
    deltaY = arg0->unk6C0 * (*D_800D2988 * D_800C7BCC);
    deltaX = arg0->unk6E8 + deltaX;
    deltaZ = arg0->unk6F0 + deltaZ;
    deltaY = arg0->unk6EC + deltaY;
    actorId = arg0->unkE4;
    /* FAKEMATCH: finish the three velocity stores before reading the sound selector. */
    ((volatile func_802251B8_S2 *)arg0)->unk6E8 = deltaX;
    ((volatile func_802251B8_S2 *)arg0)->unk6F0 = deltaZ;
    ((volatile func_802251B8_S2 *)arg0)->unk6EC = deltaY;
    if (actorId == D_800CE47C) {
        var_v0_3 = 0xA46;
    } else if (arg0->unk6C0 > 0.0f) {
        /* FAKEMATCH: reuse the result while checking the state table so its default is rematerialized. */
        var_v0_3 = (s32)arg0->unk13B4;
        if (var_v0_3 != (s32)&D_800CED30) {
            var_v0_3 = 0xA46;
        } else {
            var_v0_3 = 0x5E28;
        }
    } else {
        var_v0_3 = 0xA3C;
        if (arg0->unk13B4 == &D_800CED30) {
            var_v0_3 = 0x5E27;
        }
    }
    /* FAKEMATCH: keep the sound selection store at the common branch join. */
    ((volatile func_802251B8_S2 *)arg0)->unk86C = var_v0_3;
}
