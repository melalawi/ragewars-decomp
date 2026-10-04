#include "span_1000/code_80245804.h"
#include "types.h"
extern void *D_800DE7E0;


extern s32 D_800DE880_de;
extern int D_800DE884_de;




/** Copy a two-word record into the global record and clear two trailing fields. */
void func_80245A30_de(void) {
    char *record = (char *)D_800DE7E0;
    int hi = D_800DE884_de;
    int lo = D_800DE880_de;
    ((func_80245A20_S1 *)(record))->unk10C = hi;
    ((func_80245A20_S1 *)(record))->unk108 = lo;
    ((func_80245A20_S1 *)(record))->unk110 = 0;
    ((func_80245A20_S1 *)(record))->unk114 = 0;
}
