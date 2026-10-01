#ifdef NON_MATCHING
/* Draws the inset viewport border with black bands and a one-pixel outline. */
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
void func_8026D8F8(void);
typedef struct Gfx { u32 w0; u32 w1; } Gfx;
extern Gfx *D_80110634;
extern s32 D_800E28D0;
extern s32 D_800E28D4;

#if defined(VERSION_US_REV1)
extern const f32 D_800E0B78;
#define BORDER_C0 D_800E0B78
extern const f32 D_800E0B7C;
#define BORDER_C1 D_800E0B7C
extern const f32 D_800E0B80;
#define BORDER_C2 D_800E0B80
extern const f32 D_800E0B84;
#define BORDER_C3 D_800E0B84
extern const f32 D_800E0B88;
#define BORDER_C4 D_800E0B88
extern const f32 D_800E0B8C;
#define BORDER_C5 D_800E0B8C
extern const f32 D_800E0B90;
#define BORDER_C6 D_800E0B90
extern const f32 D_800E0B94;
#define BORDER_C7 D_800E0B94
extern const f32 D_800E0B98;
#define BORDER_C8 D_800E0B98
extern const f32 D_800E0B9C;
#define BORDER_C9 D_800E0B9C
extern const f32 D_800E0BA0;
#define BORDER_C10 D_800E0BA0
extern const f32 D_800E0BA4;
#define BORDER_C11 D_800E0BA4
extern const f32 D_800E0BA8;
#define BORDER_C12 D_800E0BA8
extern const f32 D_800E0BAC;
#define BORDER_C13 D_800E0BAC
extern const f32 D_800E0BB0;
#define BORDER_C14 D_800E0BB0
extern const f32 D_800E0BB4;
#define BORDER_C15 D_800E0BB4
extern const f32 D_800E0BB8;
#define BORDER_C16 D_800E0BB8
extern const f32 D_800E0BBC;
#define BORDER_C17 D_800E0BBC
extern const f32 D_800E0BC0;
#define BORDER_C18 D_800E0BC0
extern const f32 D_800E0BC4;
#define BORDER_C19 D_800E0BC4
extern const f32 D_800E0BC8;
#define BORDER_C20 D_800E0BC8
extern const f32 D_800E0BCC;
#define BORDER_C21 D_800E0BCC
extern const f32 D_800E0BD0;
#define BORDER_C22 D_800E0BD0
extern const f32 D_800E0BD4;
#define BORDER_C23 D_800E0BD4
extern const f32 D_800E0BD8;
#define BORDER_C24 D_800E0BD8
extern const f32 D_800E0BDC;
#define BORDER_C25 D_800E0BDC
extern const f32 D_800E0BE0;
#define BORDER_C26 D_800E0BE0
extern const f32 D_800E0BE4;
#define BORDER_C27 D_800E0BE4
extern const f32 D_800E0BE8;
#define BORDER_C28 D_800E0BE8
extern const f32 D_800E0BEC;
#define BORDER_C29 D_800E0BEC
extern const f32 D_800E0BF0;
#define BORDER_C30 D_800E0BF0
extern const f32 D_800E0BF4;
#define BORDER_C31 D_800E0BF4
extern const f32 D_800E0BF8;
#define BORDER_C32 D_800E0BF8
extern const f32 D_800E0BFC;
#define BORDER_C33 D_800E0BFC
extern const f32 D_800E0C00;
#define BORDER_C34 D_800E0C00
extern const f32 D_800E0C04;
#define BORDER_C35 D_800E0C04
extern const f32 D_800E0C08;
#define BORDER_C36 D_800E0C08
extern const f32 D_800E0C0C;
#define BORDER_C37 D_800E0C0C
extern const f32 D_800E0C10;
#define BORDER_C38 D_800E0C10
extern const f32 D_800E0C14;
#define BORDER_C39 D_800E0C14
extern const f32 D_800E0C18;
#define BORDER_C40 D_800E0C18
extern const f32 D_800E0C1C;
#define BORDER_C41 D_800E0C1C
extern const f32 D_800E0C20;
#define BORDER_C42 D_800E0C20
extern const f32 D_800E0C24;
#define BORDER_C43 D_800E0C24
extern const f32 D_800E0C28;
#define BORDER_C44 D_800E0C28
extern const f32 D_800E0C2C;
#define BORDER_C45 D_800E0C2C
extern const f32 D_800E0C30;
#define BORDER_C46 D_800E0C30
extern const f32 D_800E0C34;
#define BORDER_C47 D_800E0C34
extern const f32 D_800E0C38;
#define BORDER_C48 D_800E0C38
#elif defined(VERSION_EU_X)
extern const f32 D_800E8388;
#define BORDER_C0 D_800E8388
extern const f32 D_800E838C;
#define BORDER_C1 D_800E838C
extern const f32 D_800E8390;
#define BORDER_C2 D_800E8390
extern const f32 D_800E8394;
#define BORDER_C3 D_800E8394
extern const f32 D_800E8398;
#define BORDER_C4 D_800E8398
extern const f32 D_800E839C;
#define BORDER_C5 D_800E839C
extern const f32 D_800E83A0;
#define BORDER_C6 D_800E83A0
extern const f32 D_800E83A4;
#define BORDER_C7 D_800E83A4
extern const f32 D_800E83A8;
#define BORDER_C8 D_800E83A8
extern const f32 D_800E83AC;
#define BORDER_C9 D_800E83AC
extern const f32 D_800E83B0;
#define BORDER_C10 D_800E83B0
extern const f32 D_800E83B4;
#define BORDER_C11 D_800E83B4
extern const f32 D_800E83B8;
#define BORDER_C12 D_800E83B8
extern const f32 D_800E83BC;
#define BORDER_C13 D_800E83BC
extern const f32 D_800E83C0;
#define BORDER_C14 D_800E83C0
extern const f32 D_800E83C4;
#define BORDER_C15 D_800E83C4
extern const f32 D_800E83C8;
#define BORDER_C16 D_800E83C8
extern const f32 D_800E83CC;
#define BORDER_C17 D_800E83CC
extern const f32 D_800E83D0;
#define BORDER_C18 D_800E83D0
extern const f32 D_800E83D4;
#define BORDER_C19 D_800E83D4
extern const f32 D_800E83D8;
#define BORDER_C20 D_800E83D8
extern const f32 D_800E83DC;
#define BORDER_C21 D_800E83DC
extern const f32 D_800E83E0;
#define BORDER_C22 D_800E83E0
extern const f32 D_800E83E4;
#define BORDER_C23 D_800E83E4
extern const f32 D_800E83E8;
#define BORDER_C24 D_800E83E8
extern const f32 D_800E83EC;
#define BORDER_C25 D_800E83EC
extern const f32 D_800E83F0;
#define BORDER_C26 D_800E83F0
extern const f32 D_800E83F4;
#define BORDER_C27 D_800E83F4
extern const f32 D_800E83F8;
#define BORDER_C28 D_800E83F8
extern const f32 D_800E83FC;
#define BORDER_C29 D_800E83FC
extern const f32 D_800E8400;
#define BORDER_C30 D_800E8400
extern const f32 D_800E8404;
#define BORDER_C31 D_800E8404
extern const f32 D_800E8408;
#define BORDER_C32 D_800E8408
extern const f32 D_800E840C;
#define BORDER_C33 D_800E840C
extern const f32 D_800E8410;
#define BORDER_C34 D_800E8410
extern const f32 D_800E8414;
#define BORDER_C35 D_800E8414
extern const f32 D_800E8418;
#define BORDER_C36 D_800E8418
extern const f32 D_800E841C;
#define BORDER_C37 D_800E841C
extern const f32 D_800E8420;
#define BORDER_C38 D_800E8420
extern const f32 D_800E8424;
#define BORDER_C39 D_800E8424
extern const f32 D_800E8428;
#define BORDER_C40 D_800E8428
extern const f32 D_800E842C;
#define BORDER_C41 D_800E842C
extern const f32 D_800E8430;
#define BORDER_C42 D_800E8430
extern const f32 D_800E8434;
#define BORDER_C43 D_800E8434
extern const f32 D_800E8438;
#define BORDER_C44 D_800E8438
extern const f32 D_800E843C;
#define BORDER_C45 D_800E843C
extern const f32 D_800E8440;
#define BORDER_C46 D_800E8440
extern const f32 D_800E8444;
#define BORDER_C47 D_800E8444
extern const f32 D_800E8448;
#define BORDER_C48 D_800E8448
#elif defined(VERSION_EU)
extern const f32 D_800ED1C8;
#define BORDER_C0 D_800ED1C8
extern const f32 D_800ED1CC;
#define BORDER_C1 D_800ED1CC
extern const f32 D_800ED1D0;
#define BORDER_C2 D_800ED1D0
extern const f32 D_800ED1D4;
#define BORDER_C3 D_800ED1D4
extern const f32 D_800ED1D8;
#define BORDER_C4 D_800ED1D8
extern const f32 D_800ED1DC;
#define BORDER_C5 D_800ED1DC
extern const f32 D_800ED1E0;
#define BORDER_C6 D_800ED1E0
extern const f32 D_800ED1E4;
#define BORDER_C7 D_800ED1E4
extern const f32 D_800ED1E8;
#define BORDER_C8 D_800ED1E8
extern const f32 D_800ED1EC;
#define BORDER_C9 D_800ED1EC
extern const f32 D_800ED1F0;
#define BORDER_C10 D_800ED1F0
extern const f32 D_800ED1F4;
#define BORDER_C11 D_800ED1F4
extern const f32 D_800ED1F8;
#define BORDER_C12 D_800ED1F8
extern const f32 D_800ED1FC;
#define BORDER_C13 D_800ED1FC
extern const f32 D_800ED200;
#define BORDER_C14 D_800ED200
extern const f32 D_800ED204;
#define BORDER_C15 D_800ED204
extern const f32 D_800ED208;
#define BORDER_C16 D_800ED208
extern const f32 D_800ED20C;
#define BORDER_C17 D_800ED20C
extern const f32 D_800ED210;
#define BORDER_C18 D_800ED210
extern const f32 D_800ED214;
#define BORDER_C19 D_800ED214
extern const f32 D_800ED218;
#define BORDER_C20 D_800ED218
extern const f32 D_800ED21C;
#define BORDER_C21 D_800ED21C
extern const f32 D_800ED220;
#define BORDER_C22 D_800ED220
extern const f32 D_800ED224;
#define BORDER_C23 D_800ED224
extern const f32 D_800ED228;
#define BORDER_C24 D_800ED228
extern const f32 D_800ED22C;
#define BORDER_C25 D_800ED22C
extern const f32 D_800ED230;
#define BORDER_C26 D_800ED230
extern const f32 D_800ED234;
#define BORDER_C27 D_800ED234
extern const f32 D_800ED238;
#define BORDER_C28 D_800ED238
extern const f32 D_800ED23C;
#define BORDER_C29 D_800ED23C
extern const f32 D_800ED240;
#define BORDER_C30 D_800ED240
extern const f32 D_800ED244;
#define BORDER_C31 D_800ED244
extern const f32 D_800ED248;
#define BORDER_C32 D_800ED248
extern const f32 D_800ED24C;
#define BORDER_C33 D_800ED24C
extern const f32 D_800ED250;
#define BORDER_C34 D_800ED250
extern const f32 D_800ED254;
#define BORDER_C35 D_800ED254
extern const f32 D_800ED258;
#define BORDER_C36 D_800ED258
extern const f32 D_800ED25C;
#define BORDER_C37 D_800ED25C
extern const f32 D_800ED260;
#define BORDER_C38 D_800ED260
extern const f32 D_800ED264;
#define BORDER_C39 D_800ED264
extern const f32 D_800ED268;
#define BORDER_C40 D_800ED268
extern const f32 D_800ED26C;
#define BORDER_C41 D_800ED26C
extern const f32 D_800ED270;
#define BORDER_C42 D_800ED270
extern const f32 D_800ED274;
#define BORDER_C43 D_800ED274
extern const f32 D_800ED278;
#define BORDER_C44 D_800ED278
extern const f32 D_800ED27C;
#define BORDER_C45 D_800ED27C
extern const f32 D_800ED280;
#define BORDER_C46 D_800ED280
extern const f32 D_800ED284;
#define BORDER_C47 D_800ED284
extern const f32 D_800ED288;
#define BORDER_C48 D_800ED288
#elif defined(VERSION_DE)
extern const f32 D_800DCB48;
#define BORDER_C0 D_800DCB48
extern const f32 D_800DCB4C;
#define BORDER_C1 D_800DCB4C
extern const f32 D_800DCB50;
#define BORDER_C2 D_800DCB50
extern const f32 D_800DCB54;
#define BORDER_C3 D_800DCB54
extern const f32 D_800DCB58;
#define BORDER_C4 D_800DCB58
extern const f32 D_800DCB5C;
#define BORDER_C5 D_800DCB5C
extern const f32 D_800DCB60;
#define BORDER_C6 D_800DCB60
extern const f32 D_800DCB64;
#define BORDER_C7 D_800DCB64
extern const f32 D_800DCB68;
#define BORDER_C8 D_800DCB68
extern const f32 D_800DCB6C;
#define BORDER_C9 D_800DCB6C
extern const f32 D_800DCB70;
#define BORDER_C10 D_800DCB70
extern const f32 D_800DCB74;
#define BORDER_C11 D_800DCB74
extern const f32 D_800DCB78;
#define BORDER_C12 D_800DCB78
extern const f32 D_800DCB7C;
#define BORDER_C13 D_800DCB7C
extern const f32 D_800DCB80;
#define BORDER_C14 D_800DCB80
extern const f32 D_800DCB84;
#define BORDER_C15 D_800DCB84
extern const f32 D_800DCB88;
#define BORDER_C16 D_800DCB88
extern const f32 D_800DCB8C;
#define BORDER_C17 D_800DCB8C
extern const f32 D_800DCB90;
#define BORDER_C18 D_800DCB90
extern const f32 D_800DCB94;
#define BORDER_C19 D_800DCB94
extern const f32 D_800DCB98;
#define BORDER_C20 D_800DCB98
extern const f32 D_800DCB9C;
#define BORDER_C21 D_800DCB9C
extern const f32 D_800DCBA0;
#define BORDER_C22 D_800DCBA0
extern const f32 D_800DCBA4;
#define BORDER_C23 D_800DCBA4
extern const f32 D_800DCBA8;
#define BORDER_C24 D_800DCBA8
extern const f32 D_800DCBAC;
#define BORDER_C25 D_800DCBAC
extern const f32 D_800DCBB0;
#define BORDER_C26 D_800DCBB0
extern const f32 D_800DCBB4;
#define BORDER_C27 D_800DCBB4
extern const f32 D_800DCBB8;
#define BORDER_C28 D_800DCBB8
extern const f32 D_800DCBBC;
#define BORDER_C29 D_800DCBBC
extern const f32 D_800DCBC0;
#define BORDER_C30 D_800DCBC0
extern const f32 D_800DCBC4;
#define BORDER_C31 D_800DCBC4
extern const f32 D_800DCBC8;
#define BORDER_C32 D_800DCBC8
extern const f32 D_800DCBCC;
#define BORDER_C33 D_800DCBCC
extern const f32 D_800DCBD0;
#define BORDER_C34 D_800DCBD0
extern const f32 D_800DCBD4;
#define BORDER_C35 D_800DCBD4
extern const f32 D_800DCBD8;
#define BORDER_C36 D_800DCBD8
extern const f32 D_800DCBDC;
#define BORDER_C37 D_800DCBDC
extern const f32 D_800DCBE0;
#define BORDER_C38 D_800DCBE0
extern const f32 D_800DCBE4;
#define BORDER_C39 D_800DCBE4
extern const f32 D_800DCBE8;
#define BORDER_C40 D_800DCBE8
extern const f32 D_800DCBEC;
#define BORDER_C41 D_800DCBEC
extern const f32 D_800DCBF0;
#define BORDER_C42 D_800DCBF0
extern const f32 D_800DCBF4;
#define BORDER_C43 D_800DCBF4
extern const f32 D_800DCBF8;
#define BORDER_C44 D_800DCBF8
extern const f32 D_800DCBFC;
#define BORDER_C45 D_800DCBFC
extern const f32 D_800DCC00;
#define BORDER_C46 D_800DCC00
extern const f32 D_800DCC04;
#define BORDER_C47 D_800DCC04
extern const f32 D_800DCC08;
#define BORDER_C48 D_800DCC08
#else
extern const f32 D_800DB7F8;
#define BORDER_C0 D_800DB7F8
extern const f32 D_800DB7FC;
#define BORDER_C1 D_800DB7FC
extern const f32 D_800DB800;
#define BORDER_C2 D_800DB800
extern const f32 D_800DB804;
#define BORDER_C3 D_800DB804
extern const f32 D_800DB808;
#define BORDER_C4 D_800DB808
extern const f32 D_800DB80C;
#define BORDER_C5 D_800DB80C
extern const f32 D_800DB810;
#define BORDER_C6 D_800DB810
extern const f32 D_800DB814;
#define BORDER_C7 D_800DB814
extern const f32 D_800DB818;
#define BORDER_C8 D_800DB818
extern const f32 D_800DB81C;
#define BORDER_C9 D_800DB81C
extern const f32 D_800DB820;
#define BORDER_C10 D_800DB820
extern const f32 D_800DB824;
#define BORDER_C11 D_800DB824
extern const f32 D_800DB828;
#define BORDER_C12 D_800DB828
extern const f32 D_800DB82C;
#define BORDER_C13 D_800DB82C
extern const f32 D_800DB830;
#define BORDER_C14 D_800DB830
extern const f32 D_800DB834;
#define BORDER_C15 D_800DB834
extern const f32 D_800DB838;
#define BORDER_C16 D_800DB838
extern const f32 D_800DB83C;
#define BORDER_C17 D_800DB83C
extern const f32 D_800DB840;
#define BORDER_C18 D_800DB840
extern const f32 D_800DB844;
#define BORDER_C19 D_800DB844
extern const f32 D_800DB848;
#define BORDER_C20 D_800DB848
extern const f32 D_800DB84C;
#define BORDER_C21 D_800DB84C
extern const f32 D_800DB850;
#define BORDER_C22 D_800DB850
extern const f32 D_800DB854;
#define BORDER_C23 D_800DB854
extern const f32 D_800DB858;
#define BORDER_C24 D_800DB858
extern const f32 D_800DB85C;
#define BORDER_C25 D_800DB85C
extern const f32 D_800DB860;
#define BORDER_C26 D_800DB860
extern const f32 D_800DB864;
#define BORDER_C27 D_800DB864
extern const f32 D_800DB868;
#define BORDER_C28 D_800DB868
extern const f32 D_800DB86C;
#define BORDER_C29 D_800DB86C
extern const f32 D_800DB870;
#define BORDER_C30 D_800DB870
extern const f32 D_800DB874;
#define BORDER_C31 D_800DB874
extern const f32 D_800DB878;
#define BORDER_C32 D_800DB878
extern const f32 D_800DB87C;
#define BORDER_C33 D_800DB87C
extern const f32 D_800DB880;
#define BORDER_C34 D_800DB880
extern const f32 D_800DB884;
#define BORDER_C35 D_800DB884
extern const f32 D_800DB888;
#define BORDER_C36 D_800DB888
extern const f32 D_800DB88C;
#define BORDER_C37 D_800DB88C
extern const f32 D_800DB890;
#define BORDER_C38 D_800DB890
extern const f32 D_800DB894;
#define BORDER_C39 D_800DB894
extern const f32 D_800DB898;
#define BORDER_C40 D_800DB898
extern const f32 D_800DB89C;
#define BORDER_C41 D_800DB89C
extern const f32 D_800DB8A0;
#define BORDER_C42 D_800DB8A0
extern const f32 D_800DB8A4;
#define BORDER_C43 D_800DB8A4
extern const f32 D_800DB8A8;
#define BORDER_C44 D_800DB8A8
extern const f32 D_800DB8AC;
#define BORDER_C45 D_800DB8AC
extern const f32 D_800DB8B0;
#define BORDER_C46 D_800DB8B0
extern const f32 D_800DB8B4;
#define BORDER_C47 D_800DB8B4
extern const f32 D_800DB8B8;
#define BORDER_C48 D_800DB8B8
#endif


void func_80401D74(s32 arg0) {
    Gfx **display;
    f32 zero; /* FAKEMATCH: keep zero in an FPR for unsigned float conversions. */
    f32 next_conversion_limit; /* FAKEMATCH: load the following threshold before masking the current coordinate. */
    f32 temp_f0;
    f32 temp_f0_10;
    f32 temp_f0_11;
    f32 temp_f0_12;
    f32 temp_f0_13;
    f32 temp_f0_14;
    f32 temp_f0_15;
    f32 temp_f0_16;
    f32 temp_f0_17;
    f32 temp_f0_18;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f0_6;
    f32 temp_f0_7;
    f32 temp_f0_8;
    f32 temp_f0_9;
    f32 temp_f2;
    f32 temp_f5;
    f32 temp_f6;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f0_3;
    f32 var_f0_4;
    f32 var_f0_5;
    f32 var_f0_6;
    f32 var_f0_7;
    f32 var_f0_8;
    s32 var_a1;
    s32 var_v0;
    s32 var_v0_10;
    s32 var_v0_11;
    s32 var_v0_12;
    s32 var_v0_13;
    s32 var_v0_14;
    s32 var_v0_15;
    s32 var_v0_16;
    s32 var_v0_17;
    s32 var_v0_18;
    s32 var_v0_19;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v0_5;
    s32 var_v0_6;
    s32 var_v0_7;
    s32 var_v0_8;
    s32 var_v0_9;
    s32 var_v1;
    s32 var_v1_10;
    s32 var_v1_12;
    s32 var_v1_2;
    s32 var_v1_3;
    s32 var_v1_4;
    s32 var_v1_5;
    s32 var_v1_6;
    s32 var_v1_7;
    s32 var_v1_8;
    s32 var_v1_9;
    Gfx *temp_a0;
    Gfx *temp_a1;
    Gfx *temp_a1_10;
    Gfx *temp_a1_2;
    Gfx *temp_a1_3;
    Gfx *temp_a1_4;
    Gfx *temp_a1_5;
    Gfx *temp_a1_6;
    Gfx *temp_a1_7;
    Gfx *temp_a1_8;
    Gfx *temp_a1_9;
    Gfx *temp_a2;
    Gfx *temp_a2_2;
    Gfx *temp_t3;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v1;
    Gfx *temp_v1_2;

    func_8026D8F8();
    display = &D_80110634;
    zero = 0.0f;
    temp_f2 = (f32) arg0;
    temp_a1 = (*display)++;
    temp_v0 = (*display);
    temp_a1->w0 = 0xE7000000;
    temp_v1 = (temp_v0 + 1);
    temp_a1->w1 = 0;
    temp_a1_2 = (temp_v0 + 2);
    (*display) = temp_v1;
    temp_v0->w0 = 0xE3000A01;
    temp_a2 = (temp_v0 + 3);
    temp_v0->w1 = 0;
    (*display) = temp_a1_2;
    temp_v0[1].w0 = 0xFCFFFFFF;
    temp_v1->w1 = 0xFFFDF6FB;
    (*display) = temp_a2;
    temp_v0[2].w0 = 0xE200001C;
    temp_a1_2->w1 = 0x504240;
    temp_a1_3 = (temp_v0 + 4);
    (*display) = temp_a1_3;
    temp_f6 = (f32) D_800E28D0;
    temp_v0[3].w0 = 0xFA000000;
    temp_a2->w1 = 0;
    (*display) = (temp_v0 + 5);
    temp_f0 = temp_f6 - BORDER_C0;
    temp_f5 = (f32) (D_800E28D4 - (arg0 * 2));
    if (!(temp_f0 >= BORDER_C1)) {
        var_v1 = (s32) temp_f0;
    } else {
        var_v1 = (s32) (temp_f0 - BORDER_C1) | 0x80000000;
    }
    var_v1 = (var_v1 & 0x3FF) << 0xE;
    temp_f0_2 = temp_f2 + BORDER_C2;
    if (!(temp_f0_2 >= BORDER_C3)) {
        var_v0 = (s32) temp_f0_2;
    } else {
        var_v0 = (s32) (temp_f0_2 - BORDER_C3) | 0x80000000;
    }
    var_v0 = var_v0 & 0x3FF;
    temp_a1_3->w0 = (s32) (((var_v0 * 4) | 0xF6000000) | var_v1);
    if (!(zero >= BORDER_C4)) {
        var_v0_2 = (s32) zero;
    } else {
        var_v0_2 = (s32) (zero - BORDER_C4) | 0x80000000;
    }
    var_v0_2 = (var_v0_2 & 0x3FF) << 0xE;
    if (!(temp_f2 >= BORDER_C5)) {
        var_v0_3 = (s32) temp_f2;
    } else {
        var_v0_3 = (s32) (temp_f2 - BORDER_C5) | 0x80000000;
    }
    var_v0_3 = var_v0_3 & 0x3FF;
    temp_a1_3->w1 = (s32) (var_v0_2 | (var_v0_3 * 4));
    {
        Gfx **display = &D_80110634;
    temp_a1_4 = (*display);
    temp_f0_3 = (zero + temp_f6) - BORDER_C6;
    (*display) = (temp_a1_4 + 1);
    if (!(temp_f0_3 >= BORDER_C7)) {
        var_v1_2 = (s32) temp_f0_3;
    } else {
        var_v1_2 = (s32) (temp_f0_3 - BORDER_C7) | 0x80000000;
    }
    var_v1_2 = (var_v1_2 & 0x3FF) << 0xE;
    var_f0 = temp_f2 + temp_f5;
    temp_f0_4 = var_f0 - BORDER_C8;
    if (!(temp_f0_4 >= BORDER_C9)) {
        var_v0_4 = (s32) temp_f0_4;
    } else {
        var_v0_4 = (s32) (temp_f0_4 - BORDER_C9) | 0x80000000;
    }
    var_v0_4 = var_v0_4 & 0x3FF;
    temp_a1_4->w0 = (s32) (((var_v0_4 * 4) | 0xF6000000) | var_v1_2);
    if (!(zero >= BORDER_C10)) {
        var_v1_3 = (s32) zero;
    } else {
        var_v1_3 = (s32) (zero - BORDER_C10) | 0x80000000;
    }
    var_v1_3 = (var_v1_3 & 0x3FF) << 0xE;
    var_f0_2 = temp_f2 + temp_f5;
    temp_f0_5 = var_f0_2 - BORDER_C11;
    if (!(temp_f0_5 >= BORDER_C12)) {
        var_v0_5 = (s32) temp_f0_5;
    } else {
        var_v0_5 = (s32) (temp_f0_5 - BORDER_C12) | 0x80000000;
    }
    var_v0_5 = var_v0_5 & 0x3FF;
    temp_a1_4->w1 = (s32) (var_v1_3 | (var_v0_5 * 4));
    }
    {
        Gfx **display = &D_80110634;
    temp_a1_5 = (*display);
    temp_f0_6 = zero + BORDER_C13;
    (*display) = (temp_a1_5 + 1);
    if (!(temp_f0_6 >= BORDER_C14)) {
        var_v1_4 = (s32) temp_f0_6;
    } else {
        var_v1_4 = (s32) (temp_f0_6 - BORDER_C14) | 0x80000000;
    }
    var_v1_4 = (var_v1_4 & 0x3FF) << 0xE;
    var_f0_3 = temp_f2 + temp_f5;
    temp_f0_7 = var_f0_3 - BORDER_C15;
    if (!(temp_f0_7 >= BORDER_C16)) {
        var_v0_6 = (s32) temp_f0_7;
    } else {
        var_v0_6 = (s32) (temp_f0_7 - BORDER_C16) | 0x80000000;
    }
    var_v0_6 = var_v0_6 & 0x3FF;
    temp_a1_5->w0 = (s32) (((var_v0_6 * 4) | 0xF6000000) | var_v1_4);
    if (!(zero >= BORDER_C17)) {
        var_v0_7 = (s32) zero;
    } else {
        var_v0_7 = (s32) (zero - BORDER_C17) | 0x80000000;
    }
    var_v0_7 = (var_v0_7 & 0x3FF) << 0xE;
    if (!(temp_f2 >= BORDER_C18)) {
        var_v0_8 = (s32) temp_f2;
    } else {
        var_v0_8 = (s32) (temp_f2 - BORDER_C18) | 0x80000000;
    }
    var_v0_8 = var_v0_8 & 0x3FF;
    temp_a1_5->w1 = (s32) (var_v0_7 | (var_v0_8 * 4));
    }
    {
        Gfx **display = &D_80110634;
    temp_t3 = (*display);
    temp_f0_8 = (zero + temp_f6) - BORDER_C19;
    (*display) = (temp_t3 + 1);
    if (!(temp_f0_8 >= BORDER_C20)) {
        var_v1_5 = (s32) temp_f0_8;
    } else {
        var_v1_5 = (s32) (temp_f0_8 - BORDER_C20) | 0x80000000;
    }
    var_v1_5 = (var_v1_5 & 0x3FF) << 0xE;
    var_f0_4 = temp_f2 + temp_f5;
    temp_f0_9 = var_f0_4 - BORDER_C21;
    if (!(temp_f0_9 >= BORDER_C22)) {
        var_v0_9 = (s32) temp_f0_9;
    } else {
        var_v0_9 = (s32) (temp_f0_9 - BORDER_C22) | 0x80000000;
    }
    var_v0_9 = var_v0_9 & 0x3FF;
    temp_f0_10 = (zero + temp_f6) - BORDER_C23;
    temp_t3->w0 = (s32) (((var_v0_9 * 4) | 0xF6000000) | var_v1_5);
    if (!(temp_f0_10 >= BORDER_C24)) {
        var_v1_6 = (s32) temp_f0_10;
    } else {
        var_v1_6 = (s32) (temp_f0_10 - BORDER_C24) | 0x80000000;
    }
    next_conversion_limit = BORDER_C25;
    var_v1_6 = (var_v1_6 & 0x3FF) << 0xE;
    if (!(temp_f2 >= next_conversion_limit)) {
        var_a1 = (s32) temp_f2;
    } else {
        var_a1 = (s32) (temp_f2 - next_conversion_limit) | 0x80000000;
    }
    var_a1 = var_a1;
    temp_t3->w1 = (s32) (var_v1_6 | ((var_a1 & 0x3FF) * 4));
    }
    {
        Gfx **display = &D_80110634;
    temp_a1_6 = (*display)++;
    temp_v1_2 = (*display);
    temp_a1_6->w0 = 0xE7000000;
    temp_a1_6->w1 = 0;
    temp_a1_7 = (temp_v1_2 + 1);
    (*display) = temp_a1_7;
    temp_v1_2->w1 = 0x300000;
    temp_v0_2 = (temp_v1_2 + 2);
    temp_v1_2->w0 = 0xE3000A01;
    (*display) = temp_v0_2;
    temp_v1_2[1].w0 = 0xFCFFFFFF;
    temp_a1_7->w1 = 0xFFFE793C;
    temp_a1_8 = (temp_v1_2 + 3);
    temp_a2_2 = (temp_v1_2 + 4);
    (*display) = temp_a1_8;
    temp_v1_2[2].w0 = 0xE200001C;
    temp_v0_2->w1 = 0;
    (*display) = temp_a2_2;
    temp_v1_2[3].w0 = 0xF7000000;
    temp_f0_11 = (zero + temp_f6) - BORDER_C26;
    temp_a1_8->w1 = 0x10001;
    (*display) = (temp_v1_2 + 5);
    if (!(temp_f0_11 >= BORDER_C27)) {
        var_v1_7 = (s32) temp_f0_11;
    } else {
        var_v1_7 = (s32) (temp_f0_11 - BORDER_C27) | 0x80000000;
    }
    next_conversion_limit = BORDER_C28;
    var_v1_7 = (var_v1_7 & 0x3FF) << 0xE;
    if (!(temp_f2 >= next_conversion_limit)) {
        var_v0_10 = (s32) temp_f2;
    } else {
        var_v0_10 = (s32) (temp_f2 - next_conversion_limit) | 0x80000000;
    }
    var_v0_10 = var_v0_10 & 0x3FF;
    temp_a2_2->w0 = (s32) (((var_v0_10 * 4) | 0xF6000000) | var_v1_7);
    if (!(zero >= BORDER_C29)) {
        var_v0_11 = (s32) zero;
    } else {
        var_v0_11 = (s32) (zero - BORDER_C29) | 0x80000000;
    }
    var_v0_11 = (var_v0_11 & 0x3FF) << 0xE;
    if (!(temp_f2 >= BORDER_C30)) {
        var_v0_12 = (s32) temp_f2;
    } else {
        var_v0_12 = (s32) (temp_f2 - BORDER_C30) | 0x80000000;
    }
    var_v0_12 = var_v0_12 & 0x3FF;
    }
    {
        Gfx **display = &D_80110634;
    temp_a1_9 = (*display);
    temp_f0_12 = (zero + temp_f6) - BORDER_C31;
    temp_a2_2->w1 = (s32) (var_v0_11 | (var_v0_12 * 4));
    (*display) = (temp_a1_9 + 1);
    if (!(temp_f0_12 >= BORDER_C32)) {
        var_v1_8 = (s32) temp_f0_12;
    } else {
        var_v1_8 = (s32) (temp_f0_12 - BORDER_C32) | 0x80000000;
    }
    var_v1_8 = (var_v1_8 & 0x3FF) << 0xE;
    var_f0_5 = temp_f2 + temp_f5;
    temp_f0_13 = var_f0_5 - BORDER_C33;
    if (!(temp_f0_13 >= BORDER_C34)) {
        var_v0_13 = (s32) temp_f0_13;
    } else {
        var_v0_13 = (s32) (temp_f0_13 - BORDER_C34) | 0x80000000;
    }
    var_v0_13 = var_v0_13 & 0x3FF;
    temp_a1_9->w0 = (s32) (((var_v0_13 * 4) | 0xF6000000) | var_v1_8);
    if (!(zero >= BORDER_C35)) {
        var_v1_9 = (s32) zero;
    } else {
        var_v1_9 = (s32) (zero - BORDER_C35) | 0x80000000;
    }
    var_v1_9 = (var_v1_9 & 0x3FF) << 0xE;
    var_f0_6 = temp_f2 + temp_f5;
    temp_f0_14 = var_f0_6 - BORDER_C36;
    if (!(temp_f0_14 >= BORDER_C37)) {
        var_v0_14 = (s32) temp_f0_14;
    } else {
        var_v0_14 = (s32) (temp_f0_14 - BORDER_C37) | 0x80000000;
    }
    var_v0_14 = var_v0_14 & 0x3FF;
    temp_a1_9->w1 = (s32) (var_v1_9 | (var_v0_14 * 4));
    }
    {
        Gfx **display = &D_80110634;
    temp_a1_10 = (*display);
    (*display) = (temp_a1_10 + 1);
    if (!(zero >= BORDER_C38)) {
        var_v1_10 = (s32) zero;
    } else {
        var_v1_10 = (s32) (zero - BORDER_C38) | 0x80000000;
    }
    var_v1_10 = (var_v1_10 & 0x3FF) << 0xE;
    var_f0_7 = temp_f2 + temp_f5;
    temp_f0_15 = var_f0_7 - BORDER_C39;
    if (!(temp_f0_15 >= BORDER_C40)) {
        var_v0_15 = (s32) temp_f0_15;
    } else {
        var_v0_15 = (s32) (temp_f0_15 - BORDER_C40) | 0x80000000;
    }
    var_v0_15 = var_v0_15 & 0x3FF;
    temp_a1_10->w0 = (s32) (((var_v0_15 * 4) | 0xF6000000) | var_v1_10);
    if (!(zero >= BORDER_C41)) {
        var_v0_16 = (s32) zero;
    } else {
        var_v0_16 = (s32) (zero - BORDER_C41) | 0x80000000;
    }
    var_v0_16 = (var_v0_16 & 0x3FF) << 0xE;
    if (!(temp_f2 >= BORDER_C42)) {
        var_v0_17 = (s32) temp_f2;
    } else {
        var_v0_17 = (s32) (temp_f2 - BORDER_C42) | 0x80000000;
    }
    var_v0_17 = var_v0_17 & 0x3FF;
    temp_f0_16 = zero + temp_f6;
    temp_a1_10->w1 = (s32) (var_v0_16 | (var_v0_17 * 4));
    }
    {
        /* FAKEMATCH: reuse the completed display-address local to change the final address register. */
        display = &D_80110634;
    temp_a0 = (*display);
    (*display) = (temp_a0 + 1);
    /* FAKEMATCH: recycle the dead scalar to change the final coordinate register priority. */
    if (!(temp_f0_16 >= BORDER_C43)) {
        arg0 = (s32) temp_f0_16;
    } else {
        arg0 = (s32) (temp_f0_16 - BORDER_C43) | 0x80000000;
    }
    arg0 = (arg0 & 0x3FF) << 0xE;
    var_f0_8 = temp_f2 + temp_f5;
    temp_f0_17 = var_f0_8 - BORDER_C44;
    if (!(temp_f0_17 >= BORDER_C45)) {
        var_v0_18 = (s32) temp_f0_17;
    } else {
        var_v0_18 = (s32) (temp_f0_17 - BORDER_C45) | 0x80000000;
    }
    var_v0_18 = var_v0_18 & 0x3FF;
    temp_f0_18 = (zero + temp_f6) - BORDER_C46;
    temp_a0->w0 = (s32) (((var_v0_18 * 4) | 0xF6000000) | arg0);
    if (!(temp_f0_18 >= BORDER_C47)) {
        var_v1_12 = (s32) temp_f0_18;
    } else {
        var_v1_12 = (s32) (temp_f0_18 - BORDER_C47) | 0x80000000;
    }
    next_conversion_limit = BORDER_C48;
    var_v1_12 = (var_v1_12 & 0x3FF) << 0xE;
    if (!(temp_f2 >= next_conversion_limit)) {
        var_v0_19 = (s32) temp_f2;
    } else {
        var_v0_19 = (s32) (temp_f2 - next_conversion_limit) | 0x80000000;
    }
    var_v0_19 = var_v0_19 & 0x3FF;
    temp_a0->w1 = (s32) (var_v1_12 | (var_v0_19 * 4));    }

}

#endif
