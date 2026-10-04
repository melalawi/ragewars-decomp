#include "span_1000/code_80222E80.h"
#include "types.h"
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
