#include "basetypes.h"

/* Picks a computer player's next weapon: in state 14 defers to func_802100E0; otherwise gathers the loaded weapons it carries (slot kinds from 0x4C3, with ammunition and allowed by func_8022EAFC), filtering the specials by the record's weapon mode (mode 0 or an unknown mode, reset to 0, skips class-1 weapons and treats kind 6 as 5; modes 0 and 1 skip class-2 weapons; mode 2 allows all), and unless it already holds one of them and should keep it (holding kind 4 in gear 2, func_802831FC reporting a threat, or a 79 percent roll through func_80274544) chooses one at random into 0x770, clearing the brain's switch timer at 0x2E4 when it changes. */
typedef struct {
    char pad0[0x20];
    s16 *weaponClass;
} WeaponInfo;

typedef struct {
    char pad0[0x93];
    u8 weaponMode;
} Record;

typedef struct {
    char pad0[0x4C];
    s32 slots[8];
} Model;

typedef struct {
    char pad0[0x18];
    Model *model;
    char pad1C[0x578];
    s32 gear;
    char pad598[0x40];
    Record *record;
    char pad5DC[4];
    s32 state;
    char pad5E4[0x4A];
    s16 weapon;
    char pad630[0x140];
    s16 nextWeapon;
    char pad772[0xCDE];
    s32 computer;
} Player;

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

    if (brain->player->computer == 0) {
        return;
    }
    if (brain->player->state == 14) {
        func_802100E0(brain);
        return;
    }
    holding = count = 0;
    for (i = count; i < 8; i++) {
        weapon = brain->player->model->slots[i];
        weapon -= 0x4C3;
        if (weapon < 0 || ammo[i] == 0 || func_8022EAFC(brain->player, weapon) == 0) {
            continue;
        }
        if ((u32)weapon >= 2) {
            switch (brain->player->record->weaponMode) {
            case 1:
                goto second;
            case 0:
                break;
            case 2:
                goto add;
            default:
                brain->player->record->weaponMode = 0;
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
        if (weapon == brain->player->weapon) {
            holding = 1;
        }
    }
    if (holding) {
        if (brain->player->weapon == 4 && brain->player->gear == 2) {
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
    brain->player->nextWeapon = pick;
    if (pick != brain->player->weapon) {
        brain->switchTimer = 0;
    }
}
