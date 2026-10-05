#include "span_1000/code_802A25C4.h"
#include "types.h"
s32 func_802A5E08_de();
s32 func_802A5EE0_de(s32);
extern s32 D_800CDBE8;
extern s32 D_801427D4;
void func_802A5680_de(s32 arg0) {
    D_800CDBE8 = 0;
    if (D_801427D4 == 0) {
        func_802A5E08_de();
        func_802A5EE0_de(arg0);
    }
}
