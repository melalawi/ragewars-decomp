#include "common/types.h"
#include "span_1000/code_8021762C.h"
#include "span_1000/types.h"
#include "types.h"
/* Runs a player's weapon menu each frame: the menu button (0x8000 of the controller at 0x698) counts
   only while func_8022C460_de allows and the controller is not paused through D_801468F4, which instead
   closes the menu (state 3), as does holding the button while the value at 0x4 is positive; from a
   closed state holding it clears the pending weapon at 0xCC0, rebuilds the menu through func_802181FC_de
   and opens it, while releasing it with a weapon pending outside category 8 rebuilds it and marks it
   open; with no category the slot under the cursor from func_80217B3C_de, when it changes, plays sound
   0xD4D for an unowned weapon, forgets an empty slot, moves the cursor at 0x37C and requests the
   slot's weapon at 0x770 unless it is current, switching the slot to the weapon's alternate at 0xC of
   its D_800D052C record when the player holds that one and input bit 0x1000 is clear. */




extern s32 D_80142834;
extern void *D_800CB2EC[];
extern s32 func_8022C460_de(void *);
extern void func_802181FC_de(void *, s32, void *);
extern s32 func_80217B3C_de(void *);
extern void func_8025DF34_de(s32);






void func_80217D74_de(s32 *menu, void *player) {
    s32 held;
    s32 slot;
    s32 category;
    Entry34 *entry;
    s16 weapon;
    s16 alternate;
    char *ammo;

    held = ((struct func_8021846C_S3 *) ((ObjectLinks11B8 *) player)->unk_698)->unkB0 & 0x8000;
    if (func_8022C460_de(player) != 0) {
        held = 0;
    }
    if (D_80142834 != 0 && ((struct func_8020EA10_S3 *) ((ObjectLinks11B8 *) player)->unk_5D8)->unk8F == 1) {
        held = 0;
        menu[0] = 3;
    }
    if (held && ((struct func_802077F4_S2 *) menu)->unk4 > 0.0f) {
        menu[0] = 3;
    }
    if (menu[0] == 0 || menu[0] == 3) {
        if (!held) {
            if (((ObjectLinks11B8 *)(player))->unk_CC0 != -1 && menu[0x388 / 4] != 8) {
                func_802181FC_de(menu, 0, player);
                menu[0] = 1;
            }
            return;
        }
        ((ObjectLinks11B8 *)(player))->unk_CC0 = -1;
        func_802181FC_de(menu, held, player);
        ((ObjectLinks11B8 *)(player))->unk_11B4 = 1;
        menu[0] = 1;
    }
    category = menu[0x388 / 4];
    if (category != -1) {
        return;
    }
    slot = func_80217B3C_de(player);
    if (slot == menu[0x390 / 4]) {
        return;
    }
    if (slot != category) {
        entry = (Entry34 *)&((Block24 *)menu)[slot];
        weapon = entry->weapon;
        if (entry->owned == 0) {
            func_8025DF34_de(0xD4D);
            return;
        }
        if (weapon < 0) {
            menu[0x390 / 4] = category;
            return;
        }
        if (slot != menu[0x37C / 4]) {
            menu[0x37C / 4] = slot;
        }
        if (weapon == ((ObjectLinks11B8 *)(player))->unk_62E) {
            menu[0x390 / 4] = slot;
            return;
        }
        ((ObjectLinks11B8 *)(player))->unk_770 = weapon;
        if (!(((ObjectLinks11B8 *)(player))->unk_38 & 0x1000)) {
            alternate = ((func_8021C9B4_S3 *)(D_800CB2EC[weapon]))->unkC;
            if (alternate != category && (ammo = (char *) player + alternate * 2)[0x602] != 0) {
                entry->weapon = alternate;
            }
        }
    }
    menu[0x390 / 4] = slot;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C4AA8_4 = 30.0f;
const float unbake_rodata_800C4AAC_4 = (-40.9599991f);
const float unbake_rodata_800C4AB0_4 = 51.1999969f;
const float unbake_rodata_800C4AB4_4 = 5.0f;
const float unbake_rodata_800C4AB8_4 = 0.5f;
const float unbake_rodata_800C4ABC_4 = 10.0f;
const float unbake_rodata_800C4AC0_4 = 90.0f;
const float unbake_rodata_800C4AC4_4 = 0.100000001f;
const float unbake_rodata_800C4AC8_4 = 5.0f;
const float unbake_rodata_800C4ACC_4 = 0.300000012f;
const float unbake_rodata_800C4AD0_4 = 1.0f;
const float unbake_rodata_800C4AD4_4 = 30.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C9C68_4 = 30.0f;
const float unbake_rodata_800C9C6C_4 = (-40.9599991f);
const float unbake_rodata_800C9C70_4 = 51.1999969f;
const float unbake_rodata_800C9C74_4 = 5.0f;
const float unbake_rodata_800C9C78_4 = 0.5f;
const float unbake_rodata_800C9C7C_4 = 10.0f;
const float unbake_rodata_800C9C80_4 = 90.0f;
const float unbake_rodata_800C9C84_4 = 0.100000001f;
const float unbake_rodata_800C9C88_4 = 5.0f;
const float unbake_rodata_800C9C8C_4 = 0.300000012f;
const float unbake_rodata_800C9C90_4 = 1.0f;
const float unbake_rodata_800C9C94_4 = 30.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C4AE8_4 = 1.0f;
const float unbake_rodata_800C4AEC_4 = (-1.0f);
const float unbake_rodata_800C4AF0_4 = 1.57079637f;
const float unbake_rodata_800C4AF4_4 = 1.0f;
const float unbake_rodata_800C4AF8_4 = (-1.0f);
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C4998_4 = 80.0f;
#elif defined(VERSION_DE)
const double unbake_rodata_800C4AF8_8 = 4294967296.0;
const float unbake_rodata_800C4B00_4 = 0.00392156886f;
const float unbake_rodata_800C4B04_4 = 1.0f;
const double unbake_rodata_800C4B08_8 = 4294967296.0;
const float unbake_rodata_800C4B10_4 = 255.0f;
const float unbake_rodata_800C4B14_4 = 5.0f;
const float unbake_rodata_800C4B18_4 = 1.0f;
#endif
