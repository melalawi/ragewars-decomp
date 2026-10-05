#include "span_1000/code_80204E78.h"
#include "common/types_06e4f7ef1f9e.h"
#include "types.h"

extern char D_800C8420_de;
extern char D_002052C4;
extern char D_00205628;
extern char D_002050A0;






/** Initialize the dest record's vtable-like fields from source's flag byte. */
void func_8020520C_de(void *source, void *dest) {
    ((func_8020520C_S1 *)(dest))->unk2C = &D_800C8420_de;
    ((func_8020520C_S1 *)(dest))->unk108 = &D_002052C4;
    ((func_8020520C_S1 *)(dest))->unk10C = &D_00205628;
    ((func_8020520C_S1 *)(dest))->unk110 = &D_002050A0;
    ((func_8020520C_S1 *)(dest))->unk124 = 0;
    ((func_8020520C_S1 *)(dest))->unk128 = ((func_8020520C_S2 *)(source))->unk3;
}

extern s32 func_80285F58_de(void *, void *);
extern s32 func_80214178_de(void *, void *, s32);
extern s32 D_8011BDC8;




void func_8020524C_de(void *arg0, void *arg1) {
    if (func_80285F58_de(&D_8011BDC8, arg0) == 1) {
        func_80214178_de(arg0, arg1, 1);
    } else {
        func_80214178_de(arg0, arg1, 0);
        ((func_80203C40_S1 *)(arg0))->unk100 |= 0x10000;
    }
}
