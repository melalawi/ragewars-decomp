#include "span_1000/code_802A0AC4.h"
#include "types.h"


extern s32 D_800CD940_de;
extern s32 D_800CD94C_de;
extern s32 D_800D2BC0;
extern void func_802547E4_de(void *);

void func_802A0E34_de(void) {
    D_800D2B80 -= 1;
    if (D_800CD940_de != 0) {
        func_802547E4_de(D_800CD940_de);
    }
    D_800CD940_de = 0;
    D_800CD94C_de = 0;
    D_800D2BC0 = 0;
}
