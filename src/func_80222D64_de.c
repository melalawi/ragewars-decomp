#include "common/types.h"
#include "span_1000/code_80219480.h"
#include "types.h"
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
