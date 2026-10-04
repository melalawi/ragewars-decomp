#include "span_1000/code_8025C67C.h"
#if defined(VERSION_EU)
#define func_802B2350 func_802AD520_eu
#else
#define func_802B2350 func_802AD280_de
#endif
/* Advances streamed music through fade, retry, loading and playback states while updating volume. */
#include "types.h"
extern s32 D_800CBB50_de,D_800CBB54;
extern f32 D_800C3FD0_de,D_800C3FD8_de,D_800C3FE0_de,D_800C3FE4,D_800C3FE8_de,D_800C3FEC_de,D_800C3FF0_de;
extern s32 func_802654E8_de(s32,s32,s32),func_802AEAA0_de(s32);
extern struct Resource *func_8028FDB4_de(s32,s32);
extern f32 func_802B2350(u16);
extern void func_802AE5B8_de(s32,void *),func_802AFE80_de(s32),func_802AFEB0_de(s32,s32),func_802AFEE0_de(s32,s32,s32),func_802AFF30_de(s32,s32),func_802AFF60_de(s32,s16);
#define NULL ((void *)0)
static inline f32 fade_rate(Track *track,f32 time,f32 rate) {track->unk30=time;return (f32)track->unk20/(time*rate);}
void func_8025D450_de(Track *arg0) {
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
    Context_func_8025D450_de *temp_v0_2;
    struct Resource *temp_v0_4;
    Context_func_8025D450_de *temp_v0_5;
    void *var_v0_2;

    temp_v1 = arg0->unk18;
    switch (temp_v1) {                              /* irregular */
    case 0x20:
        if (arg0->unk1C & 4) {
            arg0->unk1C = 0;
            D_800CBB50_de = -1;
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
        temp_v0 = D_800CBB54 + 1;
        D_800CBB54 = temp_v0;
        if (temp_v0 >= 0xA) {
            D_800CBB50_de = -1;
            arg0->unk18 = 0x40;
            return;
        }
        break;
    case 0x40:
        temp_a2 = arg0->unk28;
        var_v0 = 0x10;
        if (temp_a2 != -1) {
            temp_v0_2 = arg0->unk0;
            temp_v0_3 = func_802654E8_de(temp_v0_2->unk2B60, temp_v0_2->unk2B64, temp_a2);
            temp_s0 = temp_v0_3;
            if (temp_s0 != -1) {
                temp_s0 *= 2;
                temp_s0_2 = func_8028FDB4_de(arg0->unk0->unk2B50, temp_s0 | 1);
                temp_v0_4 = func_8028FDB4_de(arg0->unk0->unk2B50, temp_s0);
                arg0->unk24 = (s32) temp_v0_4->unk0;
                temp_f0 = func_802B2350(temp_v0_4->unk4);
                arg0->unk30 = temp_f0;
                if (temp_f0 <= 0.0f) {
                    arg0->unk30 = D_800C3FD0_de;
                }
                var_v0_2 = temp_s0_2;
            } else {
                var_v0_2 = NULL;
            }
            arg0->unkC = var_v0_2;
            if (var_v0_2 == NULL) {
                arg0->unk18 = 0x100;
                D_800CBB54 = 0;
                arg0->unk1C = 0;
                return;
            }
            arg0->unk18 = 0x80;
            arg0->unk4 = 1;
        case 0x80:
            var_s0 = 0;
            func_802AE5B8_de(arg0->unk10, arg0->unkC);
            func_802AFF30_de(arg0->unk14, arg0->unk10);
            func_802AFEB0_de(arg0->unk14, arg0->unk8->field_4);
            do {
                func_802AFEE0_de(arg0->unk14, var_s0 & 0xFF, 0);
                var_s0 += 1;
            } while (var_s0 < 0x14);
            temp_f20 = (f32) arg0->unk24 * (arg0->unk0->unk2BA4 * *(&D_800C3FD0_de+1));
            func_802AFF60_de(arg0->unk14, (s16) (s32) (temp_f20 * D_800C3FD8_de));
            arg0->unk2C = temp_f20;
            func_802AFE80_de(arg0->unk14);
            arg0->unk1C = 0;
            arg0->unk18 = 0x10;
            D_800CBB50_de = arg0->unk28;
            return;
        }
        goto block_44;
    case 0x10:
    default:
        if ((D_800CBB50_de > 0) && (func_802AEAA0_de(arg0->unk14) == 0)) {
            D_800CBB50_de = 0;
            arg0->unk28 = 0;
        } else {
            if (arg0->unk38 != 0) {
                var_f20 = (f32) arg0->unk24;
                var_f20 *= arg0->unk0->unk2BA4 * *(&D_800C3FD8_de+1);
                var_f20 *= arg0->unk3C;
                goto block_37;
            }
            temp_v0_5 = arg0->unk0;
            var_f20 = (f32) arg0->unk24 * (temp_v0_5->unk2BA4 * D_800C3FE0_de);
            if (temp_v0_5->unk2BB8 != 0) {
                var_f20 *= D_800C3FE4;
            }
            if (var_f20 != arg0->unk2C) {
block_37:
                func_802AFF60_de(arg0->unk14, (s16) (s32) (var_f20 * D_800C3FE8_de));
                arg0->unk2C = var_f20;
            }
        }
        if (arg0->unk28 != D_800CBB50_de) {
            if (D_800CBB50_de > 0) {
                var_f2 = arg0->unk30;
                arg0->unk1C = 2;
                arg0->unk18 = 0x20;
                arg0->unk20 = (s32) (arg0->unk2C * D_800C3FEC_de);
                if (!(var_f2 >= D_800C3FF0_de)) {
                    var_f2 = D_800C3FF0_de;
                }
                arg0->unk34 = fade_rate(arg0,var_f2,*(&D_800C3FF0_de+1));
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

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C3F00_4 = 0.100000001f;
const float unbake_rodata_800C3F04_4 = 0.00999999978f;
const float unbake_rodata_800C3F08_4 = 32767.0f;
const float unbake_rodata_800C3F0C_4 = 0.00999999978f;
const float unbake_rodata_800C3F10_4 = 0.00999999978f;
const float unbake_rodata_800C3F14_4 = 0.699999988f;
const float unbake_rodata_800C3F18_4 = 32767.0f;
const float unbake_rodata_800C3F1C_4 = 32767.0f;
const float unbake_rodata_800C3F20_4 = 0.100000001f;
const float unbake_rodata_800C3F24_4 = 60.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C90C0_4 = 0.100000001f;
const float unbake_rodata_800C90C4_4 = 0.00999999978f;
const float unbake_rodata_800C90C8_4 = 32767.0f;
const float unbake_rodata_800C90CC_4 = 0.00999999978f;
const float unbake_rodata_800C90D0_4 = 0.00999999978f;
const float unbake_rodata_800C90D4_4 = 0.699999988f;
const float unbake_rodata_800C90D8_4 = 32767.0f;
const float unbake_rodata_800C90DC_4 = 32767.0f;
const float unbake_rodata_800C90E0_4 = 0.100000001f;
const float unbake_rodata_800C90E4_4 = 60.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C4280_4 = 0.100000001f;
const float unbake_rodata_800C4284_4 = 0.00999999978f;
const float unbake_rodata_800C4288_4 = 32767.0f;
const float unbake_rodata_800C428C_4 = 0.00999999978f;
const float unbake_rodata_800C4290_4 = 0.00999999978f;
const float unbake_rodata_800C4294_4 = 0.699999988f;
const float unbake_rodata_800C4298_4 = 32767.0f;
const float unbake_rodata_800C429C_4 = 32767.0f;
const float unbake_rodata_800C42A0_4 = 0.100000001f;
const float unbake_rodata_800C42A4_4 = 60.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C42C0_4 = 0.100000001f;
const float unbake_rodata_800C42C4_4 = 0.00999999978f;
const float unbake_rodata_800C42C8_4 = 32767.0f;
const float unbake_rodata_800C42CC_4 = 0.00999999978f;
const float unbake_rodata_800C42D0_4 = 0.00999999978f;
const float unbake_rodata_800C42D4_4 = 0.699999988f;
const float unbake_rodata_800C42D8_4 = 32767.0f;
const float unbake_rodata_800C42DC_4 = 32767.0f;
const float unbake_rodata_800C42E0_4 = 0.100000001f;
const float unbake_rodata_800C42E4_4 = 60.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C3FD0_4 = 0.100000001f;
const float unbake_rodata_800C3FD4_4 = 0.00999999978f;
const float unbake_rodata_800C3FD8_4 = 32767.0f;
const float unbake_rodata_800C3FDC_4 = 0.00999999978f;
const float unbake_rodata_800C3FE0_4 = 0.00999999978f;
const float unbake_rodata_800C3FE4_4 = 0.699999988f;
const float unbake_rodata_800C3FE8_4 = 32767.0f;
const float unbake_rodata_800C3FEC_4 = 32767.0f;
const float unbake_rodata_800C3FF0_4 = 0.100000001f;
const float unbake_rodata_800C3FF4_4 = 60.0f;
#endif
