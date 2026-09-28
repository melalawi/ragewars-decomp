/* Advances streamed music through fade, retry, loading and playback states while updating volume. */
#include "basetypes.h"
typedef struct {char pad[0x2B50];s32 unk2B50;char p54[12];s32 unk2B60,unk2B64;char p68[0x3C];f32 unk2BA4;char pa8[16];s32 unk2BB8;} Context;
typedef struct {s32 unk0;u16 unk4;} Resource;
typedef struct {Context *unk0;s32 unk4;struct Bank *unk8;void *unkC;s32 unk10,unk14,unk18,unk1C,unk20,unk24,unk28;f32 unk2C,unk30,unk34;s32 unk38;f32 unk3C;} Track;
struct Bank {s32 unk0,unk4;};
extern s32 D_800D0D90,D_800D0D94;
extern f32 D_800C90C0,D_800C90C8,D_800C90D0,D_800C90D4,D_800C90D8,D_800C90DC,D_800C90E0;
extern s32 func_80265508(s32,s32,s32),func_802B3B70(s32);
extern Resource *func_8028FD94(s32,s32);
extern f32 func_802B2350(u16);
extern void func_802B3688(s32,void *),func_802B4F50(s32),func_802B4F80(s32,s32),func_802B4FB0(s32,s32,s32),func_802B5000(s32,s32),func_802B5030(s32,s16);
#define NULL ((void *)0)
static inline f32 fade_rate(Track *track,f32 time,f32 rate) {track->unk30=time;return (f32)track->unk20/(time*rate);}
void func_8025D470(Track *arg0) {
    f32 temp_f0;
    f32 temp_f20;
    f32 var_f20;
    f32 var_f2;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_s0;
    s32 temp_v0;
    s32 temp_v0_3;
    s32 temp_v1;
    s32 var_s0;
    s32 var_v0;
    void *temp_s0_2;
    Context *temp_v0_2;
    Resource *temp_v0_4;
    Context *temp_v0_5;
    void *var_v0_2;

    temp_v1 = arg0->unk18;
    switch (temp_v1) {                              /* irregular */
    case 0x20:
        if (arg0->unk1C & 4) {
            arg0->unk1C = 0;
            D_800D0D90 = -1;
            if (arg0->unk28 >= 0) {
                arg0->unk18 = 0x40;
                return;
            }
            arg0->unk18 = 0x10;
            return;
        }
        return;
    case 0x100:
        if (arg0->unk1C & 8) {
            arg0->unk18 = 0x80;
            arg0->unk1C = 0;
            return;
        }
        temp_v0 = D_800D0D94 + 1;
        D_800D0D94 = temp_v0;
        if (temp_v0 >= 0xA) {
            D_800D0D90 = -1;
            arg0->unk18 = 0x40;
            return;
        }
        break;
    case 0x40:
        temp_a2 = arg0->unk28;
        var_v0 = 0x10;
        if (temp_a2 != -1) {
            temp_v0_2 = arg0->unk0;
            temp_v0_3 = func_80265508(temp_v0_2->unk2B60, temp_v0_2->unk2B64, temp_a2);
            temp_s0 = temp_v0_3;
            if (temp_s0 != -1) {
                temp_s0 *= 2;
                temp_s0_2 = func_8028FD94(arg0->unk0->unk2B50, temp_s0 | 1);
                temp_v0_4 = func_8028FD94(arg0->unk0->unk2B50, temp_s0);
                arg0->unk24 = (s32) temp_v0_4->unk0;
                temp_f0 = func_802B2350(temp_v0_4->unk4);
                arg0->unk30 = temp_f0;
                if (temp_f0 <= 0.0f) {
                    arg0->unk30 = D_800C90C0;
                }
                var_v0_2 = temp_s0_2;
            } else {
                var_v0_2 = NULL;
            }
            arg0->unkC = var_v0_2;
            if (var_v0_2 == NULL) {
                arg0->unk18 = 0x100;
                D_800D0D94 = 0;
                arg0->unk1C = 0;
                return;
            }
            arg0->unk18 = 0x80;
            arg0->unk4 = 1;
        case 0x80:
            var_s0 = 0;
            func_802B3688(arg0->unk10, arg0->unkC);
            func_802B5000(arg0->unk14, arg0->unk10);
            func_802B4F80(arg0->unk14, arg0->unk8->unk4);
            do {
                func_802B4FB0(arg0->unk14, var_s0 & 0xFF, 0);
                var_s0 += 1;
            } while (var_s0 < 0x14);
            temp_f20 = (f32) arg0->unk24 * (arg0->unk0->unk2BA4 * *(&D_800C90C0+1));
            func_802B5030(arg0->unk14, (s16) (s32) (temp_f20 * D_800C90C8));
            arg0->unk2C = temp_f20;
            func_802B4F50(arg0->unk14);
            arg0->unk1C = 0;
            arg0->unk18 = 0x10;
            D_800D0D90 = arg0->unk28;
            return;
        }
        goto block_44;
    case 0x10:
    default:
        if ((D_800D0D90 > 0) && (func_802B3B70(arg0->unk14) == 0)) {
            D_800D0D90 = 0;
            arg0->unk28 = 0;
        } else {
            if (arg0->unk38 != 0) {
                var_f20 = (f32) arg0->unk24;
                var_f20 *= arg0->unk0->unk2BA4 * *(&D_800C90C8+1);
                var_f20 *= arg0->unk3C;
                goto block_37;
            }
            temp_v0_5 = arg0->unk0;
            var_f20 = (f32) arg0->unk24 * (temp_v0_5->unk2BA4 * D_800C90D0);
            if (temp_v0_5->unk2BB8 != 0) {
                var_f20 *= D_800C90D4;
            }
            if (var_f20 != arg0->unk2C) {
block_37:
                func_802B5030(arg0->unk14, (s16) (s32) (var_f20 * D_800C90D8));
                arg0->unk2C = var_f20;
            }
        }
        if (arg0->unk28 != D_800D0D90) {
            if (D_800D0D90 > 0) {
                var_f2 = arg0->unk30;
                arg0->unk1C = 2;
                arg0->unk18 = 0x20;
                arg0->unk20 = (s32) (arg0->unk2C * D_800C90DC);
                if (!(var_f2 >= D_800C90E0)) {
                    var_f2 = D_800C90E0;
                }
                arg0->unk34 = fade_rate(arg0,var_f2,*(&D_800C90E0+1));
                return;
            }
            var_v0 = 0x40;
            arg0->unk1C = 0;
block_44:
            arg0->unk18 = var_v0;
        }
        break;
    }
}
