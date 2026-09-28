extern void *D_800E2830;

#include "basetypes.h"

extern s32 D_800E28D0;
extern int D_800E28D4;

/** Copy a two-word record into the global record and clear two trailing fields. */
void func_80245A20(void) {
    char *record = (char *)D_800E2830;
    int hi = D_800E28D4;
    int lo = D_800E28D0;
    *(int *)(record + 0x10C) = hi;
    *(int *)(record + 0x108) = lo;
    *(int *)(record + 0x110) = 0;
    *(int *)(record + 0x114) = 0;
}
