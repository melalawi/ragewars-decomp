/* Populates the results panel with player identity, score, accuracy, and selected model. */
#include "basetypes.h"
typedef struct {char p[16];u8 unk10;char q[15];s32 unk20;char r[8];s32 unk2C;char a[8];void *unk38;char b[88];s32 unk94,unk98;} State; typedef struct {s16 unk0,unk2,unk4,unk6,unk8;char p[118];s8 unk80;} Player;
void func_802A1C08(void *, char *, ...);                  /* extern */
void func_8040E958(void *, s32);                         /* extern */
void *func_8040ECB0(s32, s32);                        /* extern */
s32 func_8041F1B0(s8);                              /* extern */
s32 func_80424FC8(s32);                             /* extern */
extern char D_800E1F40;
extern char D_800E1F48;
extern char D_800E3A58;
extern char D_800E4200;
extern State *D_800E5830;
extern char D_80102AE0;
extern char D_80102B00;
extern char D_80103140;
extern char D_80146398;
extern s32 D_80154028;

typedef struct func_8043847C_S1 func_8043847C_S1;
typedef union func_8043847C_S1_U28 { char v0; u8 v1; } func_8043847C_S1_U28;
typedef union func_8043847C_S1_U32 { char v0; u8 v1; } func_8043847C_S1_U32;
typedef union func_8043847C_S1_U3C { char v0; u8 v1; } func_8043847C_S1_U3C;
struct func_8043847C_S1 {
    char pad0[0x28];
    func_8043847C_S1_U28 unk28;
    char pad28[0x32 - 0x28 - sizeof(func_8043847C_S1_U28)];
    func_8043847C_S1_U32 unk32;
    char pad32[0x3C - 0x32 - sizeof(func_8043847C_S1_U32)];
    func_8043847C_S1_U3C unk3C;
    char pad3C[0x46 - 0x3C - sizeof(func_8043847C_S1_U3C)];
    char unk46;
};

void func_8043847C(void) {
    char *temp_s4;
    char *var_a1;
    s32 var_a2_2;
    State *last;
    s32 temp_a0;
    s32 temp_s0;
    s32 temp_s3;
    s32 temp_v0_7;
    State *widget;
    s32 var_a2;
    Player *temp_s2;

    temp_s0 = D_800E5830->unk94;
    temp_s3 = temp_s0 * 4;
    temp_s2 = (Player *)((temp_s0 * 0x96) + &D_80146398);
    widget = func_8040ECB0(D_800E5830->unk20, 0x279);
    func_8040E958(widget, 1);
    widget->unk10 = 0x96;
    widget->unk2C = (s32) *(s32 *)(&D_800E3A58 + (func_8041F1B0(temp_s2->unk80) * 0x70));
    widget = func_8040ECB0(D_800E5830->unk20, 0x27A);
    func_8040E958(widget, 1);
    widget->unk10 = 0xAF;
    widget->unk38 = (void *) ((temp_s0 * 0x190) + &D_80102B00);
    widget = func_8040ECB0(D_800E5830->unk20, 0x27B);
    func_8040E958(widget, 1);
    widget->unk10 = 0x73;
    widget->unk38 = func_80424FC8(temp_s0);
    widget = func_8040ECB0(D_800E5830->unk20, 0x27C);
    func_8040E958(widget, 1);
    temp_s4 = &D_800E1F40 + 4;
    widget->unk10 = 0xAF;
    func_802A1C08(&((func_8043847C_S1 *)(D_800E5830))->unk28.v0, temp_s4, temp_s2->unk4);
    widget->unk38 = (void *)&((func_8043847C_S1 *)(D_800E5830))->unk28.v1;
    widget = func_8040ECB0(D_800E5830->unk20, 0x27D);
    func_8040E958(widget, 1);
    widget->unk10 = 0xAF;
    func_802A1C08(&((func_8043847C_S1 *)(D_800E5830))->unk32.v0, temp_s4, temp_s2->unk2 + temp_s2->unk0);
    widget->unk38 = (void *)&((func_8043847C_S1 *)(D_800E5830))->unk32.v1;
    widget = func_8040ECB0(D_800E5830->unk20, 0x27E);
    func_8040E958(widget, 1);
    widget->unk10 = 0xAF;
    temp_a0 = *(s32 *)(&D_80103140 + temp_s3);
    var_a2 = 0;
    if (temp_a0 > 0) {
        temp_v0_7 = *(s32 *)(&D_80102AE0 + temp_s3) * 0x64;
        if (temp_a0 == 0) {

        }
        if ((temp_a0 == -1) && ((temp_v0_7 / temp_a0) == 0x80000000)) {

        }
        var_a2 = temp_v0_7 / temp_a0;
    }
    func_802A1C08(&((func_8043847C_S1 *)(D_800E5830))->unk3C.v0, &D_800E1F48, var_a2);
    widget->unk38 = (void *)&((func_8043847C_S1 *)(D_800E5830))->unk3C.v1;
    widget = func_8040ECB0(D_800E5830->unk20, 0x27F);
    func_8040E958(widget, 1);
    widget->unk10 = 0xAF;
    last = widget;
    switch(D_80154028) {
    case 0: func_802A1C08(&((func_8043847C_S1 *)(D_800E5830))->unk46,temp_s4,temp_s2->unk8);break;
    case 1: func_802A1C08(&((func_8043847C_S1 *)(D_800E5830))->unk46,temp_s4,temp_s2->unk6);break;
    default: func_802A1C08(&((func_8043847C_S1 *)(D_800E5830))->unk46,&D_800E1F40+4,0);break;
    }
    last->unk38=&((func_8043847C_S1 *)(D_800E5830))->unk46;
    if (D_800E5830->unk98 != -1) {
        widget = func_8040ECB0(D_800E5830->unk20, 0x280);
        widget->unk10 = 0x96;
        func_8040E958(widget, 1);
        widget->unk2C = (s32) *(s32 *)(&D_800E4200 + (D_800E5830->unk98 * 4));
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800DE6B8_4[] = {0x00, 0x00, 0x00, 0x23};
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800E3A58_4[] = {0x00, 0x00, 0x00, 0x23};
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800F0078_4[] = {0x00, 0x00, 0x00, 0x23};
#endif
