/* Loads the stage list of the results screen D_800E4690: clears its two 36-bit sets at 0xA74 and
   0xA79, copies into the first the 36 cleared-stage bits that the player record D_80102B00[index at
   0xA5C] keeps for the current mode D_801462D5 (at 0x7E, 0x83, 0x88 or 0x8D for modes 1 to 4), and
   refreshes the list through func_80427690. */
#include "basetypes.h"

struct Record {
    char pad0[0x7E];
    u8 single[5];
    u8 versus[5];
    u8 three[5];
    u8 four[5];
    char pad92[0x190 - 0x92];
};

struct Screen {
    char pad0[0xA5C];
    s32 record;
    char padA60[0xA74 - 0xA60];
    u8 shown[5];
    u8 marked[5];
};

extern struct Screen *D_800E4690;
extern struct Record D_80102B00[];
extern u8 D_801462D5;

extern void func_802656A8(u8 *, s32, s32);
extern s32 func_80265670(u8 *, s32);
extern void func_80427690(void);

void func_804271E8(void) {
    s32 i;

    i = 0;
    do {
        func_802656A8(D_800E4690->shown, i, 0);
        func_802656A8(D_800E4690->marked, i, 0);
        i++;
    } while (i < 36);
    switch (D_801462D5) {
    case 1:
        i = 0;
        do {
            func_802656A8(D_800E4690->shown, i, func_80265670(D_80102B00[D_800E4690->record].single, i));
            i++;
        } while (i < 36);
        break;
    case 2:
        i = 0;
        do {
            func_802656A8(D_800E4690->shown, i, func_80265670(D_80102B00[D_800E4690->record].versus, i));
            i++;
        } while (i < 36);
        break;
    case 3:
        i = 0;
        do {
            func_802656A8(D_800E4690->shown, i, func_80265670(D_80102B00[D_800E4690->record].three, i));
            i++;
        } while (i < 36);
        break;
    case 4:
        i = 0;
        do {
            func_802656A8(D_800E4690->shown, i, func_80265670(D_80102B00[D_800E4690->record].four, i));
            i++;
        } while (i < 36);
        break;
    }
    func_80427690();
}
