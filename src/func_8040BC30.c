/* Selects the video mode and applies framebuffer and display configuration; the mode-to-word-array cast preserves configuration-store and mode-load scheduling. */
#include "basetypes.h"
typedef struct { int a,b,c,d,e; } Config; typedef struct { s32 unk0,unk4,unk8,unkC,unk10,unk14,unk18; } Mode;
#define NULL ((void *)0)
s32 func_80265370();                                /* extern */
void func_802BF7F0(s32);                                 /* extern */
void func_8040C504(s32, s32, s32, s32, s32, s32);      /* extern */
extern s32 D_80000300;
extern s32 D_800D15C0;
extern s32 D_800D15C4;
extern s32 D_800D15C8;
extern s32 D_800D15CC;
extern s32 D_800E28D0,D_800E28D4;
extern s32 D_800E28D8;
extern u8 D_800E28DB;
extern s32 D_800E28E8;
extern Mode D_800E28F8[];
extern Mode D_800E2984[];
extern Config D_800E2A10[];
extern char D_800E2A14;
extern char D_800E2A18;
extern char D_800E2A1C;
extern char D_800E2A20;
extern s32 D_801450C0;
extern u8 D_80146848;

static inline void set_config(int a,int b,int c,int d,int e) {
        D_800E28E8 = a;
        D_800D15C0 = b;
        D_800D15C4 = c;
        D_800D15C8 = d;
        D_800D15CC = e;
}
static inline void set_mode(s32 *var_s0) {
        D_800E28D0 = (s32) var_s0[0];
        D_800E28D4 = (s32) var_s0[1];
        func_8040C504(var_s0[0], var_s0[1], var_s0[2], var_s0[3], var_s0[4], var_s0[5]);
}
void func_8040BC30(void) {
    char *var_v0;
    s32 var_a0;
    s32 temp_v0;
    s32 var_v1;
    Mode *var_s0;

    var_s0 = NULL;
    D_801450C0 = 2;
    if (D_800E28D8 == -1) {
        if (func_80265370() != 0x400000) {
            D_800E28D8 = 1;
        } else {
            D_800E28D8 = 0;
        }
        D_80146848 = D_800E28DB;
    }
    switch(D_80000300) {
    case 1: var_s0=&D_800E28F8[D_800E28D8];break;
    case 0:case 2:var_s0=&D_800E2984[D_800E28D8];break;
    }
    if (var_s0 != NULL) {
        Config config=D_800E2A10[D_800E28D8];
        set_config(config.a,config.b,config.c,config.d,config.e);
        set_mode((s32 *)var_s0);
        var_a0 = 0x80;
        if (D_800E28E8 != 0) {
            var_a0 = 0x40;
        }
        func_802BF7F0(var_a0);
        func_802BF7F0(0x20);
        func_802BF7F0(2);
    }
}
