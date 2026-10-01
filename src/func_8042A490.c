#include "shared/menu_transition.h"
#include "basetypes.h"
/* Advances the menu transition state and updates its visual effects. */










/* The values func_8042A490 loads by address:
 * 0x800E1AF4 = 0.0033333334 (float, D_800E1AF4 in this cartridge's tables)
 * 0x800E1AF8 = 100.0 (float, D_800E1AF8 in this cartridge's tables)
 * 0x800E1AFC = 150.0 (float, unnamed in this cartridge's tables)
 * 0x800E1B00 = 2147483600.0 (float, D_800E1B00 in this cartridge's tables)
 * 0x800E1B04 = 0.0033333334 (float, D_800E1B04 in this cartridge's tables)
 * 0x800E1B08 = 100.0 (float, D_800E1B08 in this cartridge's tables)
 * 0x800E1B0C = 150.0 (float, unnamed in this cartridge's tables)
 * 0x800E1B10 = 2147483600.0 (float, D_800E1B10 in this cartridge's tables)
 */
s32 func_8025DF54(s32);
void func_8029A73C(void);
void func_802A3358(void);
float func_802BB630(float);
void func_8040E958(void *, int);
void * func_8040ECB0(void *, unsigned short);
void func_80419FA4(void *);
s32 func_80419FB8(void *);
void func_80419FD8(void *, int);
void func_8042A994(s32);
void func_8042B4C4(void);
void func_8042EB68(s32);
void func_80299368(s32);

extern MenuTransitionSignal D_80154020;

















extern func_8042A490_S2 *D_800E4F60;

s32 func_8042A490(void *arg0, s32 arg1, s32 arg2) {
    func_8042A490_S2 *countdown;
    f32 var_f0;
    s32 temp_a2;
    s32 temp_s0; /* FAKEMATCH: share the animation value across switch cases to preserve its saved register. */
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v1;
    s32 var_a1;
    s32 var_v0;
    func_8042A490_S7 *temp_a0;
    func_8042A490_S8 *temp_a0_2;
    func_8042A490_S4 *temp_a1;
    func_8042A490_S5 *temp_a1_2;
    void *var_a0;
    func_8042A490_S6 *var_a0_2;
    void *var_a0_3;

    if (D_80154020.trigger == 1) {
        D_80154020.trigger = 0;
        if (D_80154020.selection != -1) {
            D_800E4F60->unk44C->unk10 = 0x5A;
            func_8029A73C();
            func_80299368(D_80154020.selection);
            return 0;
        }
        D_800E4F60->unk44C->unk10 = 0xFF;
        D_800E4F60->unk3DC = 9;
        if (D_800E4F60->unk438 == 0) {
            func_8040E958(D_800E4F60->unk440, 1);
            var_a0 = D_800E4F60->unk448;
        } else {
            var_a0 = D_800E4F60->unk444;
        }
        func_8040E958(var_a0, 1);
        func_8040E958(D_800E4F60->unk3EC, 1);
        func_8040E958(D_800E4F60->unk3F0, 1);
        goto block_7;
    }
block_7:
    temp_v0 = D_800E4F60->unk3DC;
    switch (temp_v0) {
    case 1:
        temp_a1 = D_800E4F60->unk3CC;
        temp_a1->unk14 = (u16) (temp_a1->unk14 + D_800E4F60->unk3D2);
        temp_a1_2 = D_800E4F60->unk3D4;
        temp_a1_2->unk14 = (u16) (temp_a1_2->unk14 - D_800E4F60->unk3DA);
        temp_v0_2 = D_800E4F60->unk3E0 - 1;
        D_800E4F60->unk3E0 = temp_v0_2;
        if (temp_v0_2 <= 0) {
            func_8025DF54(0xE79);
            func_8040E958(D_800E4F60->unk3E8, 1);
            func_80419FD8(D_800E4F60->unk3E4, 4);
            D_800E4F60->unk3DC = 4;
            D_800E4F60->unk3E0 = 4;
        }
        break;
    case 2:
        temp_a0 = D_800E4F60->unk3CC;
        temp_a0->unk14 = (u16) (temp_a0->unk14 - D_800E4F60->unk3D2);
        temp_a0_2 = D_800E4F60->unk3D4;
        temp_a0_2->unk14 = (u16) (temp_a0_2->unk14 + D_800E4F60->unk3DA);
        temp_v0_3 = D_800E4F60->unk3E0 - 1;
        D_800E4F60->unk3E0 = temp_v0_3;
        if (temp_v0_3 <= 0) {
            D_800E4F60->unk3DC = 3;
            func_8029A73C();
            func_80299368(8);
            return 0;
        }
        break;
    case 3:
        if (D_800E4F60->unk460 == 0) {
            func_802A3358();
            var_a1 = 0;
            var_a0_3 = D_800E4F60->unk458;
            D_800E4F60->unk460 = 1;
            func_8040E958(var_a0_3, var_a1);
        }
        break;
    case 4:
        countdown = D_800E4F60;
        temp_v1 = countdown->unk3E0;
        temp_v0_4 = temp_v1 - 1;
        if (temp_v0_4 >= 0) {
            var_v0 = temp_v1 - (temp_v1 >= temp_v0_4);
        } else {
            var_v0 = 0;
        }
        countdown->unk3E0 = var_v0;
        /* FAKEMATCH: reload the stored countdown in the target order. */
        if ((((volatile func_8042A490_S2 *) D_800E4F60)->unk3E0 <= 0) && (func_80419FB8(D_800E4F60->unk3E4) != 0)) {
            func_80419FA4(D_800E4F60->unk3E4);
            func_8042A994(0xA);
            D_800E4F60->unk3DC = 9;
        }
        break;
    case 5:
        func_8040E958(D_800E4F60->unk458, 1);
        func_8040E958(D_800E4F60->unk3E8, 0);
        func_8042B4C4();
        func_8042A994(0);
        D_800E4F60->unk3DC = 2;
        D_800E4F60->unk3E0 = 4;
        func_8040E958(D_800E4F60->unk448, 0);
        func_8025DF54(0xE78);
        break;
    case 8:
        temp_v0 = ((func_8042A490_S9 *)func_8040ECB0(arg0, 0x316U))->unk10;
        temp_s0 = temp_v0 >> 1;
        func_8042A994(temp_s0);
        if (temp_s0 < 0xA) {
            D_800E4F60->unk3DC = 3;
            func_8042EB68(0xB);
            return 0;
        }
        break;
    case 9:
        temp_s0 = ((func_8042A490_S9 *)func_8040ECB0(arg0, 0x316U))->unk10;
        temp_s0 = (temp_s0 + 1) * 2;
        if (temp_s0 >= 0x42) {
            temp_s0 = 0x41;
            D_800E4F60->unk3DC = 3;
        }
        func_8042A994(temp_s0);
        var_a1 = 1;
        if (D_800E4F60->unk438 == 0) {
            var_a0_3 = D_800E4F60->unk448;
            func_8040E958(var_a0_3, var_a1);
        }
        break;
    default:
        break;
    }
    if (D_800E4F60->unk3DC == 3) {
            temp_a2 = D_800E4F60->unk45C + arg2;
            D_800E4F60->unk45C = temp_a2;
            if (D_80154020.selection == -1) {
                if (D_800E4F60->unk438 == 0) {
                    var_f0 = (func_802BB630((f32) temp_a2 * 0.0033333334f) * 100.0f) + 150.0f;
                    var_a0_2 = D_800E4F60->unk448;
                    var_a0_2->unk10 = (u8) (u32) var_f0;
                } else {
                    var_f0 = (func_802BB630((f32) temp_a2 * 0.0033333334f) * 100.0f) + 150.0f;
                    var_a0_2 = D_800E4F60->unk43C;
                    var_a0_2->unk10 = (u8) (u32) var_f0;
                }
            }
        }
        return 0;
}

