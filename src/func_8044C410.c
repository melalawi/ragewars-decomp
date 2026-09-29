/* Loads the level resource directory, initializes its runtime buffers and prepares five effect records. */
#include "basetypes.h"
#define NULL ((void *)0)
typedef struct {s32 unk0;s32 unk4;s32 unk8;s32 unkC;s32 unk10;s32 unk14;s32 unk18;s32 unk1C;s32 unk20;s32 unk24;s32 unk28;s32 unk2C;char pad30[4];s32 unk34;s32 unk38;s32 unk3C;char pad40[48];s32 unk70;char pad74[4];s32 unk78;char pad7C[4];void *unk80;void *unk84;s32 unk88;char pad8C[4];s32 unk90;s32 unk94;s32 unk98;s32 unk9C;s32 unkA0;s32 unkA4;s32 unkA8;s32 unkAC;s32 unkB0;void *unkB4;char padB8[56];s32 unkF0;s32 unkF4;s32 unkF8;s32 unkFC;char pad100[12];void *unk10C;char pad110[16];s32 unk120;s32 unk124;char pad128[111072];s32 unk1B308;char pad1B30C[16];s32 unk1B31C;char pad1B320[236];s32 unk1B40C;char pad1B410[516];s32 unk1B614;s32 unk1B618;s32 unk1B61C;char pad1B620[64];s32 unk1B660;char pad1B664[64];s32 unk1B6A4;char pad1B6A8[4];s32 unk1B6AC;} Level;
s32 func_8020A604(s32);                               /* extern */
s32 func_802537D8(s32, s32 *);                          /* extern */
s32 func_802538A8(s32);                                 /* extern */
s32 *func_80254094(s32, s32 **, s32, s32 *, s32);       /* extern */
s32 func_80254224(s32, s32 **, s32, s32 *);               /* extern */
s32 *func_802543A8(s32, s32 *, s32, s32, void *, s32 *, s32 *); /* extern */
s32 func_80286A78(void *, s32, s32);                      /* extern */
s32 func_8028D628();                                  /* extern */
s32 func_8028FE08(s32 *, s32, s32);                   /* extern */
s32 func_8028FE1C(s32 *, s32, s32, void *);           /* extern */
s32 func_80403BE0();                                  /* extern */
s32 func_8044AA68(s32 *);                               /* extern */
s32 func_8044C250(void *, void *, s32);                 /* extern */
s32 func_8044DC48(void *, s32);                       /* extern */
s32 func_8044DE04(void *);                            /* extern */
extern s32 D_285130;
extern s32 D_44E454;
extern s32 D_44E584;
extern s32 D_80145040;
extern char D_800CA040;                                /* unable to generate initializer: unknown type; const */
extern char D_800CA050;                                /* unable to generate initializer: unknown type; const */
extern char D_800CA060;                                /* unable to generate initializer: unknown type; const */
extern char D_800CA074;                                /* unable to generate initializer: unknown type; const */
extern char D_800CA084;                                /* unable to generate initializer: unknown type; const */
extern char D_800CA094;                                /* unable to generate initializer: unknown type; const */
extern char D_800CA0A4;                                /* unable to generate initializer: unknown type; const */
extern char D_800CA0B8;                                /* unable to generate initializer: unknown type; const */
extern char D_800CA0C8;                                /* unable to generate initializer: unknown type; const */
extern char D_800CA0DC;                                /* unable to generate initializer: unknown type; const */
extern char D_800CA0EC;                                /* unable to generate initializer: unknown type; const */
extern char D_800CA0F8;                                /* unable to generate initializer: unknown type; const */
extern char D_800CA100;                                /* unable to generate initializer: unknown type; const */
extern char D_800CA108;                                /* unable to generate initializer: unknown type; const */
extern char D_800CA118;                                /* unable to generate initializer: unknown type; const */
extern char D_800CA128;                                /* unable to generate initializer: unknown type; const */
extern char D_800CA13C;                                /* unable to generate initializer: unknown type; const */
extern char D_800CA14C;                                /* unable to generate initializer: unknown type; const */
extern char D_800CA160;                                /* unable to generate initializer: unknown type; const */
extern char D_800CA188;                                /* unable to generate initializer: unknown type; const */
extern s32 D_800D29B4[3]; /* const */
extern char D_800F81F0;                                /* unable to generate initializer: unknown type; const */
extern char D_800FD1F0;                                typedef struct func_8044C410_S1 func_8044C410_S1;
struct func_8044C410_S1 {
    char pad0[0x4C];
    char unk4C;
    char pad4C[0x50 - 0x4C - sizeof(char)];
    char unk50;
    char pad50[0x54 - 0x50 - sizeof(char)];
    char unk54;
    char pad54[0x58 - 0x54 - sizeof(char)];
    char unk58;
    char pad58[0x5C - 0x58 - sizeof(char)];
    char unk5C;
    char pad5C[0x74 - 0x5C - sizeof(char)];
    char unk74;
    char pad74[0x1B450 - 0x74 - sizeof(char)];
    char unk1B450;
    char pad1B450[0x1B46C - 0x1B450 - sizeof(char)];
    char unk1B46C;
    char pad1B46C[0x1B488 - 0x1B46C - sizeof(char)];
    char unk1B488;
    char pad1B488[0x1B4A4 - 0x1B488 - sizeof(char)];
    char unk1B4A4;
    char pad1B4A4[0x1B4C0 - 0x1B4A4 - sizeof(char)];
    char unk1B4C0;
};

/* unable to generate initializer: unknown type; const */

void func_8044C410(Level *arg0, s32 arg1) {
    s32 *sp20;
    s32 *sp24;
    s32 *temp_v0_10;
    s32 *temp_v0_5;
    s32 *temp_v0_9;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_6;
    s32 temp_v0_7;
    s32 temp_v0_8;
    s32 temp_v1;

    func_8028D628();
    arg0->unk0 = 0;
    func_8044DE04(arg0);
    arg0->unk4 = 0;
    arg0->unk8 = 0;
    arg0->unk1B40C = -1;
    arg0->unk1B31C = 0;
    arg0->unk1B308 = 0;
    arg0->unk1B614 = 0;
    arg0->unk1B618 = 0;
    arg0->unk1B61C = 0;
    arg0->unk1B660 = 0;
    arg0->unk1B6A4 = 0;
    arg0->unk1B6AC = 0;
    func_8044AA68(&D_80145040);
    func_802538A8(0);
    func_80254224(0, &sp20, arg1, &D_800CA040);
    temp_v0 = func_8028FE08(sp20, arg1, 5);
    arg0->unk1C = temp_v0;
    func_80254224(0, &((func_8044C410_S1 *)(arg0))->unk4C, temp_v0, &D_800CA050);
    temp_v0_2 = func_8028FE08(sp20, arg1, 3);
    arg0->unk20 = temp_v0_2;
    func_80254224(0, &((func_8044C410_S1 *)(arg0))->unk50, temp_v0_2, &D_800CA060);
    arg0->unk94 = (s32) *func_802543A8(0, sp20, 2, arg1, arg0, &D_285130, &D_800CA074);
    temp_v0_3 = func_8028FE08(sp20, arg1, 0);
    arg0->unk24 = temp_v0_3;
    func_80254224(0, &((func_8044C410_S1 *)(arg0))->unk54, temp_v0_3, &D_800CA084);
    arg0->unk78 = (s32) *func_802543A8(0, sp20, 1, arg1, arg0, &D_44E584, &D_800CA094);
    arg0->unkB4 = func_802543A8(0, sp20, 4, arg1, arg0, &D_44E454, &D_800CA0A4);
    arg0->unk98 = (s32) *func_802543A8(0, sp20, 0xA, arg1, arg0, &D_285130, &D_800CA074);
    temp_v0_4 = func_8028FE08(sp20, arg1, 9);
    arg0->unk28 = temp_v0_4;
    func_80254224(0, &((func_8044C410_S1 *)(arg0))->unk58, temp_v0_4, &D_800CA0B8);
    arg0->unk70 = (s32) *func_802543A8(0, sp20, 0xB, arg1, arg0, &D_285130, &D_800CA0C8);
    temp_v1 = *func_802543A8(0, sp20, 0xC, arg1, arg0, &D_285130, &D_800CA0DC);
    arg0->unk80 = &D_800FD1F0;
    arg0->unkA0 = temp_v1;
    arg0->unk38 = func_8028FE1C(sp20, arg1, 6, (char *)arg0 + 0x44);
    arg0->unk84 = &D_800F81F0;
    arg0->unk3C = func_8028FE1C(sp20, arg1, 7, (char *)arg0 + 0x48);
    temp_v0_5 = func_802543A8(0, sp20, 8, arg1, arg0, &D_285130, &D_800CA0EC);
    arg0->unk10C = temp_v0_5;
    arg0->unk90 = (s32) *temp_v0_5;
    arg0->unkA4 = (s32) *func_802543A8(0, sp20, 0xD, arg1, arg0, &D_285130, &D_800CA0F8);
    arg0->unkAC = (s32) *func_802543A8(0, sp20, 0xE, arg1, arg0, &D_285130, &D_800CA100);
    arg0->unkA8 = (s32) *func_802543A8(0, sp20, 0xF, arg1, arg0, &D_285130, &D_800CA108);
    arg0->unk9C = (s32) *func_802543A8(0, sp20, 0x11, arg1, arg0, &D_285130, &D_800CA118);
    temp_v0_6 = func_8028FE08(sp20, arg1, 0x10);
    arg0->unk2C = temp_v0_6;
    func_80254224(0, &((func_8044C410_S1 *)(arg0))->unk5C, temp_v0_6, &D_800CA128);
    temp_v0_7 = func_8028FE08(sp20, arg1, 0x12);
    arg0->unk34 = temp_v0_7;
    func_80254224(0, &((func_8044C410_S1 *)(arg0))->unk74, temp_v0_7, &D_800CA13C);
    func_80403BE0();
    temp_v0_8 = *func_802543A8(0, sp20, 0x13, arg1, arg0, &D_285130, &D_800CA14C);
    arg0->unkC = 0;
    arg0->unk10 = 0;
    arg0->unk14 = 0;
    arg0->unk18 = -1;
    arg0->unkB0 = temp_v0_8;
    if (*sp20 >= 0x16) {
        arg0->unkC = func_8028FE08(sp20, arg1, 0x15);
        temp_v0_9 = func_80254094(0, &sp24, arg0->unkC, &D_800CA160, 1);
        if (temp_v0_9 != NULL) {
            arg0->unk10 = (s32) (((*sp24 * 4) + 0xF) & ~7);
            func_802537D8(0, temp_v0_9);
        } else {
            arg0->unkC = 0;
        }
    }
    if (*sp20 >= 0x18) {
        temp_v0_10 = func_802543A8(0, sp20, 0x17, arg1, arg0, &D_285130, &D_800CA188);
        func_8020A604(*temp_v0_10);
        func_802537D8(0, temp_v0_10);
    }
    func_8044DC48(arg0, arg1);
    *D_800D29B4 = 1;
    func_8044C250(arg0, &((func_8044C410_S1 *)(arg0))->unk1B450, 0xDAC);
    func_8044C250(arg0, &((func_8044C410_S1 *)(arg0))->unk1B46C, 0xDAD);
    func_8044C250(arg0, &((func_8044C410_S1 *)(arg0))->unk1B488, 0xDAE);
    func_8044C250(arg0, &((func_8044C410_S1 *)(arg0))->unk1B4A4, 0xDAF);
    func_8044C250(arg0, &((func_8044C410_S1 *)(arg0))->unk1B4C0, 0xDB0);
    arg0->unkF0 = 0;
    arg0->unkF4 = 0;
    arg0->unkFC = 0;
    arg0->unkF8 = 0;
    arg0->unk88 = 0;
    arg0->unk120 = 0;
    arg0->unk124 = 0;
    func_80286A78(arg0, 0, 0);
}
