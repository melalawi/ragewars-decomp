#include "common/types_1dc8418c21db.h"
#include "span_16E000/code_8043DF84.h"
#include "types.h"
/* Points arg0's unk14 field at D_800D7688 or D_800D768C when the mode byte at 0x7B of the owner's record is 0 or 1, and returns 0. */









extern char D_800D365C;
extern char D_800D3660;

s32 func_8043E494_de(func_80254D70_S1 *arg0, Menu_func_8043E494_de *menu) {
    switch (menu->owner->record->mode) {
    case 0:
        arg0->unk14 = &D_800D365C;
        break;
    case 1:
        arg0->unk14 = &D_800D3660;
        break;
    }
    return 0;
}
