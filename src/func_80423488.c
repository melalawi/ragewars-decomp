/* Handles the menu shortcut codes by selecting an entry and refreshing the screen. */
#include "basetypes.h"
#define NULL ((void *)0)
typedef struct {s32 unk0;char pad4[0x1C];s32 unk20;} State;
extern State *D_800E4510;
extern void func_8029A73C(void),func_80423280(void),func_8041A4B0(s32,s32);
extern s32 func_8029AA08(void);
s32 func_80423488(void) {
    s32 temp_v0;
    s32 var_s0;

    func_8029A73C();
    var_s0 = 1;
    temp_v0 = func_8029AA08();
    switch(temp_v0) {
    case 0x50:D_800E4510->unk20=-1;break;
    case 0x57:D_800E4510->unk20=6;break;
    case 0x58:D_800E4510->unk20=5;break;
    default:var_s0=0;break;
    }
    if (var_s0 == 1) {
        func_80423280();
        func_8041A4B0(D_800E4510->unk0, 2);
    }
    return 0;
}
