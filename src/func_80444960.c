/* Updates the menu item visibility and text for the current configuration. */
#include "basetypes.h"
typedef struct { char a[8]; s32 unk8; char b[8]; char *unk14; } State;
s32 func_802934DC();                                /* extern */
extern char D_800D7610;
extern char D_800D7614;
extern u8 D_801462E5;
extern u8 D_801462E7;

s32 func_80444960(State *arg0) {
    s32 var_v0;

    if ((func_802934DC() != 0) && (D_801462E5 == 0)) {
        arg0->unk8 = arg0->unk8 & 0xFEFFFFFF;
    } else {
        arg0->unk8 = arg0->unk8 | 0x01000000;
    }
    switch (D_801462E7) {                           /* irregular */
    case 0:
        arg0->unk14 = &D_800D7610;
        break;
    case 1:
        arg0->unk14 = &D_800D7614;
        break;
    }
    return 0;
}
