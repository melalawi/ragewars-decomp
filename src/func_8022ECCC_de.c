#include "span_1000/code_8022E120.h"
#include "types.h"

extern s32 D_800C9FE4;
extern s32 D_800CD6E0_de;



extern func_8022ECBC_S1 *D_800FE9F0;

extern void func_80449870_de(void *);
extern void func_802227F4_de(void *, void *, s32);

void func_8022ECCC_de(void) {
    if (D_800FE9F0->unk5EA == 1) {
        func_80449870_de((s32)D_800FE9F0);
    } else {
        func_802227F4_de(D_800FE9F0, D_800FE9F0, 0x22);
    }
    D_800CD6E0_de = 1;
    D_800C9FE4 = 0;
}
