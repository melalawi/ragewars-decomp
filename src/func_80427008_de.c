#include "span_16E000/code_80425BC0.h"
#include "types.h"
/* Loads the stage list of the results screen D_800E4690: clears its two 36-bit sets at 0xA74 and
   0xA79, copies into the first the 36 cleared-stage bits that the player record D_80102B00[index at
   0xA5C] keeps for the current mode D_801462D5 (at 0x7E, 0x83, 0x88 or 0x8D for modes 1 to 4), and
   refreshes the list through func_804274B0_de. */





extern struct Screen_func_80427008_de *D_800E0640_de;
extern struct Record_func_80427008_de D_800FEB00[];
extern u8 D_80142215;

extern void func_80265688_de(u8 *, s32, s32);
extern s32 func_80265650_de(u8 *, s32);
extern void func_804274B0_de(void);

void func_80427008_de(void) {
    s32 i;

    i = 0;
    do {
        func_80265688_de(D_800E0640_de->shown, i, 0);
        func_80265688_de(D_800E0640_de->marked, i, 0);
        i++;
    } while (i < 36);
    switch (D_80142215) {
    case 1:
        i = 0;
        do {
            func_80265688_de(D_800E0640_de->shown, i, func_80265650_de(D_800FEB00[D_800E0640_de->record].single, i));
            i++;
        } while (i < 36);
        break;
    case 2:
        i = 0;
        do {
            func_80265688_de(D_800E0640_de->shown, i, func_80265650_de(D_800FEB00[D_800E0640_de->record].versus, i));
            i++;
        } while (i < 36);
        break;
    case 3:
        i = 0;
        do {
            func_80265688_de(D_800E0640_de->shown, i, func_80265650_de(D_800FEB00[D_800E0640_de->record].three, i));
            i++;
        } while (i < 36);
        break;
    case 4:
        i = 0;
        do {
            func_80265688_de(D_800E0640_de->shown, i, func_80265650_de(D_800FEB00[D_800E0640_de->record].four, i));
            i++;
        } while (i < 36);
        break;
    }
    func_804274B0_de();
}
