#include "span_16E000/code_8040BBC0.h"
#include "types.h"

/* Requests a new value when no change is pending: if D_800E28E0 is zero and the value differs from
   D_800E28D8, remembers the old value in D_800E28DC, stores the new one, sets D_800E28E4 and starts
   the 0x14-tick countdown D_800E28E0. */
extern s32 D_800DE888_de;
extern s32 D_800DE88C;
extern s32 D_800DE890;
extern s32 D_800DE894;

void func_8040C428_de(s32 value) {
    if (D_800DE890 == 0 && value != D_800DE888_de) {
        D_800DE894 = 1;
        D_800DE88C = D_800DE888_de;
        D_800DE888_de = value;
        D_800DE890 = 0x14;
    }
}
