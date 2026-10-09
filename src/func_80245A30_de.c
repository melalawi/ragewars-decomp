#include "span_1000/code_80245980.h"
#include "types.h"
extern void *D_800E2830;


extern s32 D_800E28D0;
extern int D_800E28D4;




/** Copy a two-word record into the global record and clear two trailing fields. */
void func_80245A30_de(void) {
    char *record = (char *)D_800E2830;
    int hi = D_800E28D4;
    int lo = D_800E28D0;
    ((func_80245A20_S1 *)(record))->unk10C = hi;
    ((func_80245A20_S1 *)(record))->unk108 = lo;
    ((func_80245A20_S1 *)(record))->unk110 = 0;
    ((func_80245A20_S1 *)(record))->unk114 = 0;
}
