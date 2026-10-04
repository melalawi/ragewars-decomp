#include "common/types.h"
#include "span_16E000/code_8042D1BC.h"
#include "types.h"
/* Activates the requested player slots and creates any missing players when entering the screen. */





extern Screen_func_8042DC04_de *D_800E13E0_de;
extern Slot_func_8042DC04_de D_801422D8[];
extern s8 D_800FEB0D[];
extern void func_8029973C_de(void);
extern void func_8041A430_de(int, int);
extern void func_8022F204_de(int);

int func_8042DC04_de(void) {
    int i;
    Slot_func_8042DC04_de *slot;

    func_8029973C_de();
    D_800E13E0_de->state = 7;
    func_8041A430_de(D_800E13E0_de->window, 2);
    for (i = 0; i < D_800E13E0_de->count; i++) {
        slot = &D_801422D8[i];
        slot->active = 1;
        slot->index = i;
        if (D_800FEB0D[i * 400] < 0) {
            func_8022F204_de(i);
        }
    }
    return 0;
}
