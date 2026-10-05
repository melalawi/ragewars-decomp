#include "common/types_8a8189af7b05.h"
#include "span_1000/code_8021CD70.h"
#include "types.h"
#include "common/types_8fd754e1e915.h"

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

/* Returns whether a player can take more ammunition for a pickup: looks up the pickup's weapon slot
   through func_802AC950_de, takes the cap as zero for no slot, the character's cap at 0x108 when option
   D_801462D5 is not 1, or otherwise D_800CE3E8's cap raised, unless the flag at 0x1450 is set, by the
   player profile's bonus byte for slots 0, 1 and 2 in D_80102B14, and compares the slot's count at
   0x5F4 against it. */





extern void *func_802AC950_de(s32);
extern u8 D_80142215;
extern s32 D_800C9198_de[];
extern Profile D_800FEB14[];






s32 func_80222D64_de(void *arg0, s32 arg1) {
    void *pickup;
    s32 slot;
    s16 *count;
    s32 cap;
    s32 base;

    pickup = func_802AC950_de(arg1);
    if (pickup == 0) {
        return 0;
    }
    slot = ((func_8021C9B4_S3 *)(pickup))->unkC;
    count = (s16 *) (&((func_80222D40_S2 *)(arg0))->unk5F4 + slot * 2);
    if (slot == -1) {
        cap = 0;
    } else {
        if (D_80142215 != 1) {
            base = (((func_80222D40_S2 *)(arg0))->unk18)->caps[slot];
        } else {
            base = D_800C9198_de[slot];
            if (((func_80222D40_S2 *)(arg0))->unk1450 == 0) {
                if (slot == 0) {
                    base += D_800FEB14[((func_80222D40_S2 *)(arg0))->unk5D4].bonus0;
                } else if (slot == 1) {
                    base += D_800FEB14[((func_80222D40_S2 *)(arg0))->unk5D4].bonus1;
                } else if (slot == 2) {
                    base += D_800FEB14[((func_80222D40_S2 *)(arg0))->unk5D4].bonus2;
                }
            }
        }
        cap = base;
    }
    return *count < cap;
}

/* Starts a player's ducking states from input: with button 0x1000 held and the player not already
   down (states 9 to 0xC or 0x26) it enters state 0xC, or while being hit (states 0x13 to 0x15) keeps
   the button latched at 0x38 instead; otherwise, when not being hit, holding direction bits 0x2000
   without 0x3, on the ground or descending no faster than D_800C7948[1] and not already down, it
   enters state 0xA. Returns whether a state was entered. */

extern f32 D_800C2858_de[];
extern s32 func_802227F4_de(void *, void *, s32);






s32 func_80222EA4_de(void *arg0, void *arg1) {
    s16 state;
    s32 hit;

    if (((func_80222E80_S1 *)(arg1))->unk38 & 0x1000) {
        state = ((func_80222E80_S2 *)(arg0))->unk650;
        if (state != 0xB) {
            if (state != 0xC) {
                if (state != 9) {
                    if (state != 0xA) {
                        if (state != 0x26) {
                            if (state == 0x15 || state == 0x13 || state == 0x14) {
                                hit = 1;
                            } else {
                                hit = 0;
                            }
                            if (hit) {
                                ((func_80222E80_S2 *)(arg0))->unk38 |= 0x1000;
                                return 0;
                            }
                            func_802227F4_de(arg0, arg1, 0xC);
                            return 1;
                        }
                    }
                }
            }
        }
    }
    state = ((func_80222E80_S2 *)(arg0))->unk650;
    if (state == 0x15 || state == 0x13 || state == 0x14) {
        hit = 1;
    } else {
        hit = 0;
    }
    if (hit) {
        return 0;
    }
    if ((((func_80222E80_S1 *)(arg1))->unk38 & 0x2003) != 0x2000) {
        return 0;
    }
    if (!(((func_80222E80_S1 *)(arg1))->unk20 <= 0.0f)) {
        return 0;
    }
    if (!(D_800C2858_de[1] < ((func_80222E80_S1 *)(arg1))->unk20)) {
        return 0;
    }
    state = ((func_80222E80_S2 *)(arg0))->unk650;
    if (state == 0xB) {
        return 0;
    }
    if (state == 0xC) {
        return 0;
    }
    if (state == 9) {
        return 0;
    }
    if (state == 0xA) {
        return 0;
    }
    if (state == 0x26) {
        return 0;
    }
    func_802227F4_de(arg0, arg1, 0xA);
    return 1;
}
