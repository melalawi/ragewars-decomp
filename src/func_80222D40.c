/* Returns whether a player can take more ammunition for a pickup: looks up the pickup's weapon slot
   through func_802AD940, takes the cap as zero for no slot, the character's cap at 0x108 when option
   D_801462D5 is not 1, or otherwise D_800CE3E8's cap raised, unless the flag at 0x1450 is set, by the
   player profile's bonus byte for slots 0, 1 and 2 in D_80102B14, and compares the slot's count at
   0x5F4 against it. */
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

s32 func_80222D40(void *arg0, s32 arg1) {
    void *pickup;
    s32 slot;
    s16 *count;
    s32 cap;
    s32 base;

    pickup = func_802AD940(arg1);
    if (pickup == 0) {
        return 0;
    }
    slot = *(s16 *) ((char *) pickup + 0xC);
    count = (s16 *) ((char *) arg0 + 0x5F4 + slot * 2);
    if (slot == -1) {
        cap = 0;
    } else {
        if (D_801462D5 != 1) {
            base = (*(Desc **) ((char *) arg0 + 0x18))->caps[slot];
        } else {
            base = D_800CE3E8[slot];
            if (*(s32 *) ((char *) arg0 + 0x1450) == 0) {
                if (slot == 0) {
                    base += D_80102B14[*(s32 *) ((char *) arg0 + 0x5D4)].bonus0;
                } else if (slot == 1) {
                    base += D_80102B14[*(s32 *) ((char *) arg0 + 0x5D4)].bonus1;
                } else if (slot == 2) {
                    base += D_80102B14[*(s32 *) ((char *) arg0 + 0x5D4)].bonus2;
                }
            }
        }
        cap = base;
    }
    return *count < cap;
}
