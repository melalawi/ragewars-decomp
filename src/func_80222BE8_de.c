#include "common/types.h"
#include "span_1000/code_80219480.h"
#include "types.h"
/* Adds ammunition to a player's weapon slot: computes the slot's cap as func_80222D64_de does (zero for
   no slot, the character's cap unless option D_801462D5 is 1, otherwise D_800CE3E8's cap plus the
   profile bonus from D_80102B14 unless the flag at 0x1450 is set), and when the slot has room it
   selects weapon 1, 5 or 4 at 0xCC0 for slots 0, 1 and 2 if the slot was empty and ammunition is
   added, then adds the amount clamped to the cap. Returns whether the slot had room. Adapted from
   func_80222D64_de with the count read once into an int and the weapon selection as a switch. */





extern void *func_802AC950_de(s32);
extern u8 D_80142215;
extern s32 D_800C9198_de[];
extern Profile D_800FEB14[];




s32 func_80222BE8_de(void *player, s32 slot, s32 amount) {
    s16 *count;
    s32 cap;
    s32 room;
    s32 total;
    s32 have;

    count = (s16 *) (&((func_80222BC4_S1 *)(player))->unk5F4 + slot * 2);
    if (slot == -1) {
        cap = 0;
    } else if (D_80142215 != 1) {
        cap = (((func_80222BC4_S1 *)(player))->unk18)->caps[slot];
    } else {
        cap = D_800C9198_de[slot];
        if (((func_80222BC4_S1 *)(player))->unk1450 == 0) {
            if (slot == 0) {
                cap += D_800FEB14[((func_80222BC4_S1 *)(player))->unk5D4].bonus0;
            } else if (slot == 1) {
                cap += D_800FEB14[((func_80222BC4_S1 *)(player))->unk5D4].bonus1;
            } else if (slot == 2) {
                cap += D_800FEB14[((func_80222BC4_S1 *)(player))->unk5D4].bonus2;
            }
        }
    }
    have = *count;
    room = have < cap;
    if (room) {
        if (have == 0 && amount > 0) {
            switch (slot) {
            case 0:
                ((func_80222BC4_S1 *)(player))->unkCC0 = 1;
                break;
            case 1:
                ((func_80222BC4_S1 *)(player))->unkCC0 = 5;
                break;
            case 2:
                ((func_80222BC4_S1 *)(player))->unkCC0 = 4;
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
