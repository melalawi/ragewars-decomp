/* Releases the two active resources and clears their associated state. */
#include "basetypes.h"
#define NULL ((void *)0)

void func_802537D8(s32, s32);                            /* extern */
void func_802538A8(s32);                                 /* extern */
extern s32 D_800E28B0;
extern s32 D_800E28B4;
extern s32 D_800E28B8;
extern s32 D_800E28BC;

void func_80409990(void) {
    if ((D_800E28B0 != 0) || (D_800E28B4 != 0)) {
        func_802538A8(0);
    }
    if (D_800E28B0 != 0) {
        func_802537D8(0, D_800E28B0);
    }
    if (D_800E28B4 != 0) {
        func_802537D8(0, D_800E28B4);
    }
    D_800E28B0 = 0;
    D_800E28B4 = 0;
    D_800E28B8 = 0;
    D_800E28BC = 0;
}
