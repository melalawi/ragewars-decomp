#include "common/types.h"
#include "span_1000/code_802BF740.h"
#include "span_16E000/code_8040BBC0.h"
#include "span_C76B0/data.h"
#include "types.h"
/* Selects the video mode and applies framebuffer and display configuration; the mode-to-word-array cast preserves configuration-store and mode-load scheduling. */
 
#define NULL ((void *)0)
s32 func_80265350_de();                                /* extern */
                                 /* extern */
void func_8040C484_de(s32, s32, s32, s32, s32, s32);      /* extern */
extern s32 D_80000300;

extern s32 D_800CC374;


extern s32 D_800DE880_de,D_800DE884_de;
extern s32 D_800DE888_de;
extern u8 D_800DE88B;

extern struct Shape_func_8024A5A8_de_2 D_800DE8A8[];
extern struct Shape_func_8024A5A8_de_2 D_800DE934[];
extern Rec_func_8024C92C_de D_800DE9C0[];
extern char D_800E2A14;
extern char D_800E2A18;
extern char D_800E2A1C;
extern char D_800E2A20;

extern u8 D_80142788;

static inline void set_config(int a,int b,int c,int d,int e) {
        D_800DE898 = a;
        D_800CC370 = b;
        D_800CC374 = c;
        D_800CC378 = d;
        D_800CC37C = e;
}
static inline void set_mode(s32 *var_s0) {
        D_800DE880_de = (s32) var_s0[0];
        D_800DE884_de = (s32) var_s0[1];
        func_8040C484_de(var_s0[0], var_s0[1], var_s0[2], var_s0[3], var_s0[4], var_s0[5]);
}
void func_8040BBB0_de(void) {
    char *var_v0;
    s32 var_a0;
    s32 temp_v0;
    s32 var_v1;
    struct Shape_func_8024A5A8_de_2 *var_s0;

    var_s0 = NULL;
    D_80141000 = 2;
    if (D_800DE888_de == -1) {
        if (func_80265350_de() != 0x400000) {
            D_800DE888_de = 1;
        } else {
            D_800DE888_de = 0;
        }
        D_80142788 = D_800DE88B;
    }
    switch(D_80000300) {
    case 1: var_s0=&D_800DE8A8[D_800DE888_de];break;
    case 0:case 2:var_s0=&D_800DE934[D_800DE888_de];break;
    }
    if (var_s0 != NULL) {
        Rec_func_8024C92C_de config=D_800DE9C0[D_800DE888_de];
        set_config(config.x,config.y,config.z,config.pad0,config.pad1);
        set_mode((s32 *)var_s0);
        var_a0 = 0x80;
        if (D_800DE898 != 0) {
            var_a0 = 0x40;
        }
        func_802BA700_de(var_a0);
        func_802BA700_de(0x20);
        func_802BA700_de(2);
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800DD53B_1[] = {0xFF};
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800E28DB_1[] = {0xFF};
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800EEEFB_1[] = {0xFF};
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800EA0BB_1[] = {0xFF};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800DE88B_1[] = {0xFF};
#endif
