#include "span_16E000/code_80408E1C.h"
#include "types.h"
/* Releases the two active resources and clears their associated state. */
#define NULL ((void *)0)

void func_80253838_de(s32, s32);                            /* extern */
void func_80253908_de(s32);                                 /* extern */
extern s32 D_800DE860_de;
extern s32 D_800DE864_de;
extern s32 D_800DE868;
extern s32 D_800DE86C;

void func_80409964_de(void) {
    if ((D_800DE860_de != 0) || (D_800DE864_de != 0)) {
        func_80253908_de(0);
    }
    if (D_800DE860_de != 0) {
        func_80253838_de(0, D_800DE860_de);
    }
    if (D_800DE864_de != 0) {
        func_80253838_de(0, D_800DE864_de);
    }
    D_800DE860_de = 0;
    D_800DE864_de = 0;
    D_800DE868 = 0;
    D_800DE86C = 0;
}
