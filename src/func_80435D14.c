/* Allocates menu state, selects the language-dependent title and enables the appropriate menu item. */
#include "basetypes.h"
#define NULL ((void *)0)
typedef struct {char pad[0x14];s16 unk14,unk16;} Menu;
extern s32 *D_800E5550;
extern u8 D_801462D5;
extern s32 D_80146894;
extern s32 *func_80252FFC(s32);
extern void func_8025E234(s32),func_802648E8(void),func_802A3358(void),func_8040E9D0(s32,s32);
extern s32 func_8040C4F4(void),func_8040ECB0(void *,s32),func_8042B108(void);
s32 func_80435D14(Menu *arg0) {
    s32 *temp_v0;

    temp_v0 = func_80252FFC(0x14);
    D_800E5550 = temp_v0;
    *temp_v0 = 0;
    func_8025E234(-1);
    func_802648E8();
    if (func_8040C4F4() == 1) {
        arg0->unk14 = 0x62;
        arg0->unk16 = 0x45;
    } else if (func_8040C4F4() == 2) {
        arg0->unk14 = 0x69;
    }
    func_802A3358();
    if ((D_801462D5 != 0) || (func_8042B108() == 0)) {
        func_8040E9D0(func_8040ECB0(arg0, 0x3E), 1);
    }
    D_80146894 = 1;
    return 0;
}
