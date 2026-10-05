#include "span_1000/code_802A25C4.h"
#include "types.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
M2C_UNK func_802A5E08_de();
M2C_UNK func_802A5EE0_de(s32);
extern s32 D_800CDBE8;
extern s32 D_801427D4;
void func_802A5680_de(s32 arg0) {
    D_800CDBE8 = 0;
    if (D_801427D4 == 0) {
        func_802A5E08_de();
        func_802A5EE0_de(arg0);
    }
}
