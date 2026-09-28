/* Resets a player HUD, initializes its text widgets and weapon-view state, and refreshes player status and effects. */
typedef struct {int v[4];} Quad;
#include "basetypes.h"
#define NULL 0
typedef struct {s32 f0;s32 f4;s32 f8;char padC[132];f32 f90;f32 f94;f32 f98;f32 f9C;f32 fA0;f32 fA4;f32 fA8;f32 fAC;f32 fB0;f32 fB4;f32 fB8;} View;
extern f32 D_800C73F0,D_800C73F8,D_800C7400,D_800C7404;
void func_8021A78C(void *);                            /* extern */
void func_8022BAC0();                                  /* extern */
void func_8022BB70(void *);                            /* extern */
s32 func_80245774();                                /* extern */
void func_802458B4();                                  /* extern */
void func_802458C8();                                  /* extern */
void func_80264808(s32, s32);                            /* extern */
void func_80278E74(s32, s32, void *);                    /* extern */
void func_802AB6C0(void *, s32, s16);                    /* extern */
void func_802AB6FC(void *, s32 *);                       /* extern */
void func_80426270(void *);                            /* extern */
extern s32 D_8013B290;
extern s32 D_8013B2BC;
extern struct {char pad[0xD];u8 mode;char pE[0x1D-0xE];u8 weapons;} D_801462C8[];
extern char D_800CE480;
extern char D_800CE4BC;
extern char D_800CE52C;
extern char D_800CE59C;
extern char D_800CE60C;
extern char D_800CE630;
extern char D_800CE670;
extern char D_800CE69C;
extern char D_800CE6D8;
extern char D_800E28D0;

void func_80449E38(void *arg0) {
    s32 temp_a0;
    s32 var_s0;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s0_3;
    void *temp_s0_4;
    void *temp_s0_5;
    void *temp_s0_6;
    void *temp_s0_7;
    void *temp_s0_8;
    void *temp_s0_9;
    void *temp_v1;
    View *var_v0;

    if (D_801462C8->weapons != 0) {
        func_8022BAC0(); func_8022BB70(arg0);
        if (*(u8 *)((char *)*(void **)((char *)arg0+0x5D8)+0x91)==0 && D_801462C8->mode==1) func_80426270(arg0);
    }
    var_v0=(View *)((char *)arg0+0x878);
    var_v0->fB4 = 0;
    var_v0->f8 = 0;
    var_v0->fB8 = 0;
    var_v0->f4 = -1;
    (*(s32 *)((char *)arg0+0x878)) = -1;
    var_v0->fA8 = 0;
    var_v0->f9C = 0;
    var_v0->fA4 = 0;
    var_v0->fAC = 437.5f;
    var_v0->fB0 = (f32) -675.0f;
    var_v0->f90 = 0.25f;
    var_v0->f94 = (f32) 0.1875f;
    var_v0->f98 = 0.25f;
    var_v0->fA0 = 1.5707964897155762f;
    (*(s32 *)((char *)arg0+0x11B0)) = 0;
    func_80264808((*(s32 *)((char *)arg0+0x698)), 1);
    temp_s0 = arg0 + 0xE2C;
    (*(s32 *)((char *)arg0+0x678)) = 0;
    (*(s32 *)((char *)arg0+0x67C)) = 0;
    (*(s32 *)((char *)arg0+0x680)) = 0;
    (*(s32 *)((char *)arg0+0x684)) = 0;
    func_802AB6C0(temp_s0, 0x78, 0x60);
    func_802AB6FC(temp_s0, &D_800CE4BC);
    temp_s0_2 = arg0 + 0xE68;
    func_802AB6C0(temp_s0_2, 0xBE, 0x60);
    func_802AB6FC(temp_s0_2, &D_800CE52C);
    temp_s0_3 = arg0 + 0xEA4;
    func_802AB6C0(temp_s0_3, 0x104, 0x60);
    func_802AB6FC(temp_s0_3, &D_800CE59C);
    temp_s0_4 = arg0 + 0xEE0;
    func_802AB6C0(temp_s0_4, 0x1C, 0x60);
    func_802AB6FC(temp_s0_4, &D_800CE480);
    temp_s0_5 = arg0 + 0xF1C;
    func_802AB6C0(temp_s0_5, -0x40, 0x10);
    func_802AB6FC(temp_s0_5, &D_800CE60C);
    temp_s0_6 = arg0 + 0xF58;
    func_802AB6C0(temp_s0_6, 0x28, 0x10);
    func_802AB6FC(temp_s0_6, &D_800CE630);
    temp_s0_7 = arg0 + 0x1048;
    func_802AB6C0(temp_s0_7, -0x52, 0x10);
    func_802AB6FC(temp_s0_7, &D_800CE670);
    temp_s0_8 = arg0 + 0x1084;
    (*(f32 *)((char *)arg0+0x107C)) = 255.0f;
    func_802AB6C0(temp_s0_8, -0x52, 0x44);
    func_802AB6FC(temp_s0_8, &D_800CE69C);
    temp_s0_9 = arg0 + 0x10C0;
    func_802AB6C0(temp_s0_9, -0x52, 0x44);
    func_802AB6FC(temp_s0_9, &D_800CE6D8);
    func_802AB6C0(arg0 + 0xFD0, 0x18, (s16) (*(s16 *)((char *)&D_800E28D0+6) + 0x60));
    func_802AB6C0(arg0 + 0x100C, 0x18, (s16) (*(s16 *)((char *)&D_800E28D0+6) + 0x60));
    func_802AB6C0(arg0 + 0x10FC, 0x64, 0x64);
    (*(s32 *)((char *)arg0+0x11C4)) = 0;
    (*(s32 *)((char *)arg0+0x7BC)) = 0;
    (*(s32 *)((char *)arg0+0x1134)) = (s32) (*(s32 *)((char *)arg0+0x5E4));
    temp_v1 = (*(void * *)((char *)arg0+0x5DC));
    if (temp_v1 != NULL) {
        *(Quad *)((char *)arg0+0x760) = *(Quad *)((char *)temp_v1+0x140);
    }
    func_8021A78C(arg0);
    var_s0 = 0;
    if (func_80245774() == 0) {
        if (D_8013B2BC != 999) var_s0 = 1;
    }
    if (D_8013B290 != 0) {
        var_s0 = 1;
    }
    if (var_s0 != 0) {
        (*(s32 *)((char *)arg0+0x5EC)) = (s32) D_8013B2BC;
    }
    (*(s32 *)((char *)arg0+0x1228)) = 0;
    (*(s32 *)((char *)arg0+0x1224)) = 0;
    func_802458C8();
    temp_a0 = (*(s32 *)((char *)arg0+0x14));
    if (temp_a0 != 0) {
        func_80278E74(temp_a0, 1, arg0);
    }
    func_802458B4();
}
