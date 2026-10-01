#include "basetypes.h"
#include "shared/player.h"
typedef SharedPlayer Player;

/* Picks a computer player's next weapon: in state 14 defers to func_802100E0; otherwise gathers the loaded weapons it carries (slot kinds from 0x4C3, with ammunition and allowed by func_8022EAFC), filtering the specials by the record's weapon mode (mode 0 or an unknown mode, reset to 0, skips class-1 weapons and treats kind 6 as 5; modes 0 and 1 skip class-2 weapons; mode 2 allows all), and unless it already holds one of them and should keep it (holding kind 4 in gear 2, func_802831FC reporting a threat, or a 79 percent roll through func_80274544) chooses one at random into 0x770, clearing the brain's switch timer at 0x2E4 when it changes. */
typedef struct {
    char pad0[0x20];
    s16 *weaponClass;
} WeaponInfo;

typedef struct Record {
    char pad0[0x93];
    u8 weaponMode;
} Record;

typedef struct Model {
    char pad0[0x4C];
    s32 slots[8];
} Model;


typedef struct {
    Player *player;
    char pad4[0x2E0];
    s32 switchTimer;
} Brain;

extern WeaponInfo *D_800D052C[];
extern char D_80121990[];

extern void func_802100E0(Brain *);
extern s32 func_8022EAFC(Player *, s32);
extern s32 func_802831FC(char *, Player *);
extern s32 func_80274544(void);

void func_8020FDB0(Brain *brain, s32 *ammo) {
    s32 choices[8];
    u32 count;
    s32 holding;
    u32 i;
    s32 weapon;
    s32 pick;

    if (brain->player->views1450.view1450_1.computer == 0) {
        return;
    }
    if (brain->player->views5DC.view5E0_9.state == 14) {
        func_802100E0(brain);
        return;
    }
    holding = count = 0;
    for (i = count; i < 8; i++) {
        weapon = brain->player->views18.view18_2.model->slots[i];
        weapon -= 0x4C3;
        if (weapon < 0 || ammo[i] == 0 || func_8022EAFC(brain->player, weapon) == 0) {
            continue;
        }
        if ((u32)weapon >= 2) {
            switch (brain->player->views5D8.view5D8_1.record->weaponMode) {
            case 1:
                goto second;
            case 0:
                break;
            case 2:
                goto add;
            default:
                brain->player->views5D8.view5D8_1.record->weaponMode = 0;
                break;
            }
            if (*D_800D052C[weapon]->weaponClass == 1) {
                continue;
            }
            if (weapon == 6) {
                weapon = 5;
            }
        second:
            if (*D_800D052C[weapon]->weaponClass == 2) {
                continue;
            }
        }
    add:
        choices[count++] = weapon;
        if (weapon == brain->player->views5E8.view62E_14.weapon) {
            holding = 1;
        }
    }
    if (holding) {
        if (brain->player->views5E8.view62E_14.weapon == 4 && brain->player->views1C.view594_39.gear == 2) {
            return;
        }
        if (func_802831FC(D_80121990, brain->player) > 0) {
            return;
        }
        if (func_80274544() % 100 >= 21) {
            return;
        }
    }
    if (count == 0) {
        return;
    }
    pick = choices[func_80274544() % count];
    brain->player->views5E8.view770_92.nextWeapon = pick;
    if (pick != brain->player->views5E8.view62E_14.weapon) {
        brain->switchTimer = 0;
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C3E08_4 = 0.5f;
#elif defined(VERSION_US_REV1)
const double unbake_rodata_800C8FA0_8 = 4294967296.0;
const float unbake_rodata_800C8FA8_4 = 0.0166666675f;
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800C3CD0_2C[] = {0x43, 0x47, 0x61, 0x6D, 0x65, 0x4F, 0x62, 0x6A, 0x65, 0x63, 0x74, 0x49, 0x6E, 0x73, 0x74, 0x61, 0x6E, 0x63, 0x65, 0x5F, 0x5F, 0x44, 0x72, 0x61, 0x77, 0x3A, 0x20, 0x61, 0x6E, 0x69, 0x6D, 0x20, 0x6F, 0x62, 0x6A, 0x65, 0x63, 0x74, 0x20, 0x69, 0x6E, 0x66, 0x6F, 0x00};
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C3C90_4 = 1.0f;
const float unbake_rodata_800C3C94_4 = 1.5f;
const float unbake_rodata_800C3C98_4 = 65536.0f;
const float unbake_rodata_800C3C9C_4 = 3.05185094e-05f;
const float unbake_rodata_800C3CA0_4 = 2.0f;
const float unbake_rodata_800C3CA4_4 = 2.14748365e+09f;
const float unbake_rodata_800C3CA8_4 = 1.0f;
const float unbake_rodata_800C3CAC_4 = 0.5f;
const float unbake_rodata_800C3CB0_4 = 0.300000012f;
const float unbake_rodata_800C3CB4_4 = (-2.0f);
const float unbake_rodata_800C3CB8_4 = 3.0f;
const float unbake_rodata_800C3CBC_4 = 0.970000029f;
const float unbake_rodata_800C3CC0_4 = 0.0299999993f;
const float unbake_rodata_800C3CC4_4 = 1.52587891e-05f;
const float unbake_rodata_800C3CC8_4 = 0.5f;
const float unbake_rodata_800C3CCC_4 = 65536.0f;
const float unbake_rodata_800C3CD0_4 = 0.5f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C3E30_4 = 2.14748365e+09f;
const float unbake_rodata_800C3E34_4 = 0.00787401572f;
const float unbake_rodata_800C3E38_4 = 102.399994f;
const float unbake_rodata_800C3E3C_4 = 0.5f;
#endif
