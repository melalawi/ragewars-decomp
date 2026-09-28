/* Adds ammunition to a player's weapon slot: computes the slot's cap as func_80222D40 does (zero for
   no slot, the character's cap unless option D_801462D5 is 1, otherwise D_800CE3E8's cap plus the
   profile bonus from D_80102B14 unless the flag at 0x1450 is set), and when the slot has room it
   selects weapon 1, 5 or 4 at 0xCC0 for slots 0, 1 and 2 if the slot was empty and ammunition is
   added, then adds the amount clamped to the cap. Returns whether the slot had room. Adapted from
   func_80222D40 with the count read once into an int and the weapon selection as a switch. */
#include "basetypes.h"

typedef struct {
    u8 bonus2;
    u8 bonus0;
    u8 bonus1;
    char pad[0x18D];
} Profile;

typedef struct {
    char pad[0x108];
    s32 caps[4];
} Desc;

extern void *func_802AD940(s32);
extern u8 D_801462D5;
extern s32 D_800CE3E8[];
extern Profile D_80102B14[];

s32 func_80222BC4(void *player, s32 slot, s32 amount) {
    s16 *count;
    s32 cap;
    s32 room;
    s32 total;
    s32 have;

    count = (s16 *) ((char *) player + 0x5F4 + slot * 2);
    if (slot == -1) {
        cap = 0;
    } else if (D_801462D5 != 1) {
        cap = (*(Desc **) ((char *) player + 0x18))->caps[slot];
    } else {
        cap = D_800CE3E8[slot];
        if (*(s32 *) ((char *) player + 0x1450) == 0) {
            if (slot == 0) {
                cap += D_80102B14[*(s32 *) ((char *) player + 0x5D4)].bonus0;
            } else if (slot == 1) {
                cap += D_80102B14[*(s32 *) ((char *) player + 0x5D4)].bonus1;
            } else if (slot == 2) {
                cap += D_80102B14[*(s32 *) ((char *) player + 0x5D4)].bonus2;
            }
        }
    }
    have = *count;
    room = have < cap;
    if (room) {
        if (have == 0 && amount > 0) {
            switch (slot) {
            case 0:
                *(s32 *) ((char *) player + 0xCC0) = 1;
                break;
            case 1:
                *(s32 *) ((char *) player + 0xCC0) = 5;
                break;
            case 2:
                *(s32 *) ((char *) player + 0xCC0) = 4;
                break;
            }
        }
        total = (s16) (*count += amount);
        if (total > cap) {
            total = cap;
        }
        *count = total;
    }
    return room;
}
