#ifndef RAGEWARS_SCREENCONTEXT_H
#define RAGEWARS_SCREENCONTEXT_H

/* Game-owned render/view state. This is not the SDK Vp type; it contains Vp. */
typedef struct GameScreenContext {
    /* 0x0000 */ char unk_0000[0x4];
    /* 0x0004 */ s32 unk_0004;
    /* 0x0008 */ char unk_0008[0x4];
    /* 0x000C */ f32 unk_000C;
    /* 0x0010 */ f32 unk_0010;
    /* 0x0014 */ s16 unk_0014;
    /* 0x0016 */ char unk_0016[0x2];
    /* 0x0018 */ f32 unk_0018;
    /* 0x001C */ char unk_001C[0x8];
    /* 0x0024 */ s32 unk_0024;
    /* 0x0028 */ char unk_0028[0x10];
    /* 0x0038 */ f32 unk_0038;
    /* 0x003C */ f32 unk_003C;
    /* 0x0040 */ f32 unk_0040;
    /* 0x0044 */ f32 unk_0044;
    /* 0x0048 */ char unk_0048[0x10];
    /* 0x0058 */ s32 unk_0058;
    /* 0x005C */ f32 unk_005C;
    /* 0x0060 */ f32 unk_0060;
    /* 0x0064 */ s32 unk_0064;
    /* 0x0068 */ u16 unk_0068;
    /* 0x006A */ char unk_006A[0x2];
    /* 0x006C */ f32 unk_006C;
    /* 0x0070 */ f32 unk_0070;
    /* 0x0074 */ f32 unk_0074;
    /* 0x0078 */ f32 unk_0078;
    /* 0x007C */ s32 unk_007C;
    /* 0x0080 */ f32 unk_0080;
    /* 0x0084 */ f32 unk_0084;
    /* 0x0088 */ f32 unk_0088;
    /* 0x008C */ f32 unk_008C;
    /* 0x0090 */ f32 unk_0090;
    /* 0x0094 */ f32 unk_0094;
    /* 0x0098 */ f32 unk_0098;
    /* 0x009C */ f32 unk_009C;
    /* 0x00A0 */ char unk_00A0[0x70];
    /* 0x0110 */ f32 viewportScaleX; /* THEORY: used to form Vp X scale */
    /* 0x0114 */ f32 viewportScaleY; /* THEORY: used to form Vp Y scale */
    /* 0x0118 */ char unk_0118[0x8];
    /* 0x0120 */ s32 unk_0120;
    /* 0x0124 */ u16 unk_0124;
    /* 0x0126 */ u16 unk_0126;
    /* 0x0128 */ char unk_0128[0x10];
    /* 0x0138 */ s32 unk_0138;
    /* 0x013C */ char unk_013C[0x160];
    /* 0x029C */ f32 screenWidth;
    /* 0x02A0 */ f32 screenHeight;
    /* 0x02A4 */ f32 viewportOriginX;
    /* 0x02A8 */ f32 viewportOriginY;
    /* 0x02AC */ char unk_02AC[0x4];
    /* 0x02B0 */ Vp viewports[2]; /* THEORY: dynamic 0x10 stride; count is two */
    /* 0x02D0 */ char unk_02D0[0xB0];
    /* 0x0380 */ Mtx projectionMatrices[2]; /* THEORY: dynamic 0x40 stride; count is two */
    /* 0x0400 */ char unk_0400[0x120];
    /* 0x0520 */ u8 unk_0520;
    /* 0x0521 */ u8 unk_0521;
    /* 0x0522 */ u8 unk_0522;
    /* 0x0523 */ u8 unk_0523;
    /* 0x0524 */ char unk_0524[0x4];
    /* 0x0528 */ f32 unk_0528;
    /* 0x052C */ char unk_052C[0x12];
    /* 0x053E */ u16 unk_053E;
    /* 0x0540 */ char unk_0540[0x1270];
    /* 0x17B0 */ s32 unk_17B0;
} GameScreenContext;

#endif
