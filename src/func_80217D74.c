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
typedef struct { s32 words[6]; } MenuRecord;

extern s32 D_801468F4;
extern void *D_800D052C[];
extern s32 func_8022C450(void *);
extern void func_802181FC(void *, s32, void *);
extern s32 func_80217B3C(void *);
extern void func_8025DF54(s32);

typedef struct func_80217D74_S1 func_80217D74_S1;
typedef struct func_80217D74_S2 func_80217D74_S2;
struct func_80217D74_S1 {
    char pad0[0x38];
    s32 unk38;
    char pad38[0x5D8 - 0x38 - sizeof(s32)];
    char* unk5D8;
    char pad5D8[0x62E - 0x5D8 - sizeof(char*)];
    s16 unk62E;
    char pad62E[0x698 - 0x62E - sizeof(s16)];
    char* unk698;
    char pad698[0x770 - 0x698 - sizeof(char*)];
    s16 unk770;
    char pad770[0xCC0 - 0x770 - sizeof(s16)];
    s32 unkCC0;
    char padCC0[0x11B4 - 0xCC0 - sizeof(s32)];
    s32 unk11B4;
};
struct func_80217D74_S2 {
    char pad0[0xC];
    s16 unkC;
};

void func_80217D74(s32 *menu, void *player) {
    s32 held;
    s32 slot;
    s32 category;
    Entry *entry;
    s16 weapon;
    s16 alternate;
    char *ammo;

    held = *(s32 *) (((func_80217D74_S1 *)(player))->unk698 + 0xB0) & 0x8000;
    if (func_8022C450(player) != 0) {
        held = 0;
    }
    if (D_801468F4 != 0 && *(u8 *) (((func_80217D74_S1 *)(player))->unk5D8 + 0x8F) == 1) {
        held = 0;
        menu[0] = 3;
    }
    if (held && *(f32 *) (menu + 1) > 0.0f) {
        menu[0] = 3;
    }
    if (menu[0] == 0 || menu[0] == 3) {
        if (!held) {
            if (((func_80217D74_S1 *)(player))->unkCC0 != -1 && menu[0x388 / 4] != 8) {
                func_802181FC(menu, 0, player);
                menu[0] = 1;
            }
            return;
        }
        ((func_80217D74_S1 *)(player))->unkCC0 = -1;
        func_802181FC(menu, held, player);
        ((func_80217D74_S1 *)(player))->unk11B4 = 1;
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
        entry = (Entry *)&((MenuRecord *)menu)[slot];
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
        if (weapon == ((func_80217D74_S1 *)(player))->unk62E) {
            menu[0x390 / 4] = slot;
            return;
        }
        ((func_80217D74_S1 *)(player))->unk770 = weapon;
        if (!(((func_80217D74_S1 *)(player))->unk38 & 0x1000)) {
            alternate = ((func_80217D74_S2 *)(D_800D052C[weapon]))->unkC;
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
