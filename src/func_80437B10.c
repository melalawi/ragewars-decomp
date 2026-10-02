#include "basetypes.h"
#include "shared/menu_transition.h"

/* Calls func_8029A73C; when func_8029AA08 reports 0x3D0 it sets the word at 0x10 of the menu block
   D_800E5784 points to to 7 and clears five bytes at D_80102B7E through func_802A101C, for 0x3D1 it
   sets that word to -1; then it calls func_8041A4B0 on the block's first word with 2. Returns
   zero. */
extern MenuSelectionMessage *D_800E5784;
extern char D_80102B7E[];
extern void func_8029A73C();
extern s32 func_8029AA08();
extern void func_802A101C(void *, s32, s32);
extern void func_8041A4B0(void *, s32);

#if defined(VERSION_DE)
enum { MENU_80437B10_976 = 970, MENU_80437B10_977 = 971 };
#elif defined(VERSION_EU_X)
enum { MENU_80437B10_976 = 980, MENU_80437B10_977 = 981 };
#else
enum { MENU_80437B10_976 = 976, MENU_80437B10_977 = 977 };
#endif

s32 func_80437B10(void) {
    s32 choice;

    func_8029A73C();
    choice = func_8029AA08();
    switch (choice) {
    case MENU_80437B10_977:
        D_800E5784->value = -1;
        break;
    case MENU_80437B10_976:
        D_800E5784->value = 7;
        func_802A101C(D_80102B7E, 0, 5);
        break;
    }
    func_8041A4B0(D_800E5784->first, 2);
    return 0;
}

