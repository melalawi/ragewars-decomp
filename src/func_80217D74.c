/* Runs a player's weapon menu each frame: the menu button (0x8000 of the controller at 0x698) counts
   only while func_8022C450 allows and the controller is not paused through D_801468F4, which instead
   closes the menu (state 3), as does holding the button while the value at 0x4 is positive; from a
   closed state holding it clears the pending weapon at 0xCC0, rebuilds the menu through func_802181FC
   and opens it, while releasing it with a weapon pending outside category 8 rebuilds it and marks it
   open; with no category the slot under the cursor from func_80217B3C, when it changes, plays sound
   0xD4D for an unowned weapon, forgets an empty slot, moves the cursor at 0x37C and requests the
   slot's weapon at 0x770 unless it is current, switching the slot to the weapon's alternate at 0xC of
   its D_800D052C record when the player holds that one and input bit 0x1000 is clear. */
#include "basetypes.h"

typedef struct {
    char pad0[0x1C];
    s32 weapon;
    void *info;
    s32 owned;
    f32 x;
    s32 y;
    f32 z;
} Entry;

extern s32 D_801468F4;
extern void *D_800D052C[];
extern s32 func_8022C450(void *);
extern void func_802181FC(void *, s32, void *);
extern s32 func_80217B3C(void *);
extern void func_8025DF54(s32);

void func_80217D74(s32 *menu, void *player) {
    s32 held;
    s32 slot;
    s32 category;
    Entry *entry;
    s16 weapon;
    s16 alternate;
    char *ammo;

    held = *(s32 *) (*(char **) ((char *) player + 0x698) + 0xB0) & 0x8000;
    if (func_8022C450(player) != 0) {
        held = 0;
    }
    if (D_801468F4 != 0 && *(u8 *) (*(char **) ((char *) player + 0x5D8) + 0x8F) == 1) {
        held = 0;
        menu[0] = 3;
    }
    if (held && *(f32 *) (menu + 1) > 0.0f) {
        menu[0] = 3;
    }
    if (menu[0] == 0 || menu[0] == 3) {
        if (!held) {
            if (*(s32 *) ((char *) player + 0xCC0) != -1 && menu[0x388 / 4] != 8) {
                func_802181FC(menu, 0, player);
                menu[0] = 1;
            }
            return;
        }
        *(s32 *) ((char *) player + 0xCC0) = -1;
        func_802181FC(menu, held, player);
        *(s32 *) ((char *) player + 0x11B4) = 1;
        menu[0] = 1;
    }
    category = menu[0x388 / 4];
    if (category != -1) {
        return;
    }
    slot = func_80217B3C(player);
    if (slot == menu[0x390 / 4]) {
        return;
    }
    if (slot != category) {
        entry = (Entry *) ((char *) menu + slot * 0x18);
        weapon = entry->weapon;
        if (entry->owned == 0) {
            func_8025DF54(0xD4D);
            return;
        }
        if (weapon < 0) {
            menu[0x390 / 4] = category;
            return;
        }
        if (slot != menu[0x37C / 4]) {
            menu[0x37C / 4] = slot;
        }
        if (weapon == *(s16 *) ((char *) player + 0x62E)) {
            menu[0x390 / 4] = slot;
            return;
        }
        *(s16 *) ((char *) player + 0x770) = weapon;
        if (!(*(s32 *) ((char *) player + 0x38) & 0x1000)) {
            alternate = *(s16 *) ((char *) D_800D052C[weapon] + 0xC);
            if (alternate != category && (ammo = (char *) player + alternate * 2)[0x602] != 0) {
                entry->weapon = alternate;
            }
        }
    }
    menu[0x390 / 4] = slot;
}
