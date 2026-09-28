/* Detects the storage configuration and updates the cached selection. */
#include "basetypes.h"
#define NULL ((void *)0)
s32 func_80265370();                                /* extern */
void func_8040BC30();                                  /* extern */
extern s32 D_800E28D8;
extern u8 D_800E28DB;
extern s32 D_800E28DC;
extern s32 D_800E28E0;
extern u8 D_80146848;

void func_8040C398(void) {
    if (D_800E28D8 == -1) {
        if (func_80265370() != 0x400000) {
            D_800E28D8 = 1;
        } else {
            D_800E28D8 = 0;
        }
        D_80146848 = D_800E28DB;
    }
    if ((D_800E28E0 < 5) && (D_800E28DC != D_800E28D8)) {
        func_8040BC30();
        D_800E28DC = D_800E28D8;
    }
}
