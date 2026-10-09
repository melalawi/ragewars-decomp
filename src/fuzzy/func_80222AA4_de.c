#include "common/types_06e4f7ef1f9e.h"
#include "span_1000/code_8021CD70.h"
#include "span_1000/code_8022A274.h"
#include "types.h"

extern void *D_800D052C[];

/* Check the ammo required by the selected primary or alternate weapon mode. */
s32 func_80222AA4_de(void *object, s16 weaponNumber)
{
    SharedPlayer *player = object;
    s32 weapon = weaponNumber;
    s32 slot;
    func_8022AAC4_S2 *definition;
    s16 *condition;

    definition = D_800D052C[weapon];
    if (player->views1C.view594_40.mode == 1) {
        condition = definition->unk20;
    } else {
        condition = definition->unk24;
    }
    slot = condition != 0 ? condition[0] : -1;
    if (slot != -1) {
        if (player->views1C.view594_40.mode == 2) {
            switch (weapon) {
            default:
                condition = ((func_8022AAC4_S2 *)D_800D052C[weapon])->unk24;
                if (condition != 0) {
                    return player->views5E8.view5F4_12.ammo[slot] >= condition[3];
                }
                return -1;
            case 4:
                return player->views5E8.view5F4_12.ammo[slot] >= 48;
            case 3:
                return player->views5E8.view5F4_12.ammo[slot] >= 25;
            }
        }
        if (player->views1C.view594_40.mode == 1) {
            switch (weapon) {
            default:
                condition = ((func_8022AAC4_S2 *)D_800D052C[weapon])->unk20;
                if (condition != 0) {
                    return player->views5E8.view5F4_12.ammo[slot] >= condition[3];
                }
                return -1;
            case 4:
                return player->views5E8.view5F4_12.ammo[slot] >= 5;
            case 3:
                return player->views5E8.view5F4_12.ammo[slot] >= 3;
            }
        }
    }
    return -1;
}
