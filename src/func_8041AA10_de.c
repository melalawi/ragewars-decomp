#include "common/types.h"
#include "span_1000/code_8029D984.h"
#include "span_16E000/code_8041A0AC.h"
#include "types.h"

/* Marks a menu's state word at offset 0x54 as 2 when func_8029DB58_de's value for the fifth argument
   is below func_80299B4C_de's; then, when the fourth argument is one, stores the fourth argument as the state and scrolls down through func_8041A910_de. Returns zero. */



extern s32 func_80299B4C_de();
extern void func_8041A910_de(struct func_8022FD9C_Record *);

s32 func_8041AA10_de(struct func_8022FD9C_Record *menu, void *second, void *third, s32 active, s32 fifth) {
    if (func_8029DB58_de(fifth) < func_80299B4C_de()) {
        menu->unk54 = 2;
    }
    if (active == 1) {
        menu->unk54 = active;
        func_8041A910_de(menu);
        return 0;
    }
    return 0;
}
