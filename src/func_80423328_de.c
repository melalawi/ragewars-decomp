#include "span_16E000/code_80423280.h"
#if defined(VERSION_EU_X)
enum { SHORTCUT_RESET = 0x5C, SHORTCUT_SIX = 0x52, SHORTCUT_FIVE = 0x55 };
#else
enum { SHORTCUT_RESET = 0x50, SHORTCUT_SIX = 0x57, SHORTCUT_FIVE = 0x58 };
#endif
#include "types.h"
/* Handles the menu shortcut codes by selecting an entry and refreshing the screen. */
#define NULL ((void *)0)

extern State_func_80423328_de *D_800E04C0;
extern void func_8029973C_de(void),func_80422FC0_de(void),func_8041A430_de(s32,s32);
extern s32 func_80299A08_de(void);
s32 func_80423328_de(void) {
    s32 temp_v0;
    s32 var_s0;

    func_8029973C_de();
    var_s0 = 1;
    temp_v0 = func_80299A08_de();
    switch(temp_v0) {
    case SHORTCUT_RESET:D_800E04C0->unk20=-1;break;
    case SHORTCUT_SIX:D_800E04C0->unk20=6;break;
    case SHORTCUT_FIVE:D_800E04C0->unk20=5;break;
    default:var_s0=0;break;
    }
    if (var_s0 == 1) {
        func_80422FC0_de();
        func_8041A430_de(D_800E04C0->unk0, 2);
    }
    return 0;
}
